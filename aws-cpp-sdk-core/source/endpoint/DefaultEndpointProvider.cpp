/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/endpoint/DefaultEndpointProvider.h>


namespace Aws
{
namespace Endpoint
{

ResolveEndpointOutcome ResolveEndpointDefaultImpl(const Aws::Crt::Endpoints::RuleEngine& ruleEngine,
                                                  const EndpointParameters& builtInParameters,
                                                  const EndpointParameters& clientContextParameters,
                                                  const EndpointParameters& endpointParameters)
{
    if(!ruleEngine) {
        AWS_LOGSTREAM_FATAL(DEFAULT_ENDPOINT_PROVIDER_TAG, "Invalid CRT Rule Engine state");
        return ResolveEndpointOutcome(
                Aws::Client::AWSError<Aws::Client::CoreErrors>(
                        Aws::Client::CoreErrors::INTERNAL_FAILURE,
                        "",
                        "CRT Endpoint rule engine is not initialized",
                        false/*retryable*/));
    }

    Aws::Crt::Endpoints::RequestContext crtRequestCtx;

    const Aws::Vector<std::reference_wrapper<const EndpointParameters>> allParameters
            = {std::cref(builtInParameters), std::cref(clientContextParameters), std::cref(endpointParameters)};

    for (const auto& parameterClass : allParameters)
    {
        for(const auto& parameter : parameterClass.get())
        {
            if(EndpointParameter::ParameterType::BOOLEAN == parameter.GetStoredType())
            {
                crtRequestCtx.AddBoolean(Aws::Crt::ByteCursorFromCString(parameter.GetName().c_str()), parameter.GetBoolValueNoCheck());
            }
            else if(EndpointParameter::ParameterType::STRING == parameter.GetStoredType())
            {
                crtRequestCtx.AddString(Aws::Crt::ByteCursorFromCString(parameter.GetName().c_str()), Aws::Crt::ByteCursorFromCString(parameter.GetStrValueNoCheck().c_str()));
            }
            else
            {
                return ResolveEndpointOutcome(
                        Aws::Client::AWSError<Aws::Client::CoreErrors>(
                                Aws::Client::CoreErrors::INVALID_QUERY_PARAMETER,
                                "",
                                "Invalid endpoint parameter type for parameter " + parameter.GetName(),
                                false/*retryable*/));
            }
        }
    }

    auto resolved = ruleEngine.Resolve(crtRequestCtx);

    if(resolved.has_value())
    {
        if(resolved->IsError())
        {
            auto crtError = resolved->GetError();
            Aws::String sdkCrtError = crtError ? Aws::String(crtError->begin(), crtError->end()) :
                    "CRT Rule engine resolution resulted in an unknown error";
            return ResolveEndpointOutcome(
                    Aws::Client::AWSError<Aws::Client::CoreErrors>(
                            Aws::Client::CoreErrors::INVALID_PARAMETER_COMBINATION,
                            "",
                            sdkCrtError,
                            false/*retryable*/));
        }
        else if(resolved->IsEndpoint() && resolved->GetUrl())
        {
            Aws::Endpoint::AWSEndpoint endpoint;
            const auto crtUrl = resolved->GetUrl();
            Aws::String sdkCrtUrl = Aws::String(crtUrl->begin(), crtUrl->end());
            endpoint.SetURL(sdkCrtUrl);

            // Transform attributes
            // Each attribute consist of properties, hence converting CRT properties to SDK attributes
            const auto crtProps = resolved->GetProperties();
            if (crtProps) {
                Aws::String sdkCrtProps = crtProps ? Aws::String(crtProps->begin(), crtProps->end()) : "";

                Internal::Endpoint::EndpointAttributes epAttributes = Internal::Endpoint::EndpointAttributes::BuildEndpointAttributesFromJson(
                        sdkCrtProps);

                endpoint.SetAttributes(std::move(epAttributes));
            }

            // transform headers
            const auto crtHeaders = resolved->GetHeaders();
            if (crtHeaders)
            {
                Aws::UnorderedMap<Aws::String, Aws::String> sdkHeaders;
                for (const auto& header: *crtHeaders)
                {
                    Aws::String key(header.first.begin(), header.first.end());
                    Aws::String value;
                    for (const auto& crtHeaderValue : header.second)
                    {
                        if(!value.empty()) {
                            value.insert(value.end(), ';');
                        }
                        value.insert(value.end(), crtHeaderValue.begin(), crtHeaderValue.end());
                    }
                    sdkHeaders.emplace(std::move(key), std::move(value));
                }

                endpoint.SetHeaders(std::move(sdkHeaders));
            }

            return ResolveEndpointOutcome(std::move(endpoint));
        }
        else
        {
            return ResolveEndpointOutcome(
                    Aws::Client::AWSError<Aws::Client::CoreErrors>(
                            Aws::Client::CoreErrors::INVALID_QUERY_PARAMETER,
                            "",
                            "Invalid AWS CRT RuleEngine state",
                            false/*retryable*/));
        }
    }
    return ResolveEndpointOutcome(
            Aws::Client::AWSError<Aws::Client::CoreErrors>(
                    Aws::Client::CoreErrors::INVALID_QUERY_PARAMETER,
                    "",
                    "Failed to evaluate the endpoint: null output from AWS CRT RuleEngine",
                    false/*retryable*/));

}

} // namespace Endpoint
} // namespace Aws