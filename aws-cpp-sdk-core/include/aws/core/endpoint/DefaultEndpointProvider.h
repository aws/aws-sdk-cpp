/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/endpoint/AWSPartitions.h>
#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/endpoint/ClientContextParameters.h>
#include <aws/core/endpoint/BuiltInParameters.h>
#include <aws/core/utils/memory/stl/AWSArray.h>

#include <aws/crt/endpoints/RuleEngine.h>

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include "aws/core/utils/logging/LogMacros.h"

namespace Aws
{
    namespace Endpoint
    {
        static const char DEFAULT_ENDPOINT_PROVIDER_TAG[] = "Aws::Endpoint::DefaultEndpointProvider";
        /**
          * Curiously Recurring Template Pattern is used:
          * https://en.cppreference.com/w/cpp/language/crtp
          */
        template<typename DerivedT,
                 typename BuiltInParametersT = Aws::Endpoint::BuiltInParameters,
                 typename ClientContextParametersT = Aws::Endpoint::ClientContextParameters>
        class AWS_CORE_API DefaultEndpointProvider : public EndpointProviderBase
        {
        public:
            DefaultEndpointProvider(const Aws::Vector<char>& endpointRulesBLOB)
                : m_crtRuleEngine(Aws::Crt::ByteCursorFromArray((const uint8_t*) endpointRulesBLOB.data(), endpointRulesBLOB.size()),
                                  Aws::Crt::ByteCursorFromArray((const uint8_t*) AWSPartitions::PartitionsBlob.data(), AWSPartitions::PartitionsBlobSize))
            {
                if(!m_crtRuleEngine) {
                    AWS_LOGSTREAM_FATAL(DEFAULT_ENDPOINT_PROVIDER_TAG, "Invalid CRT Rule Engine state");
                }
            }

            virtual ~DefaultEndpointProvider()
            {
            }

            using ResolveEndpointOutcome = typename EndpointProviderBase::ResolveEndpointOutcome;

            /**
             * The core of the endpoint provider interface. Implement ResolveEndpointImpl in Derived
             */
            ResolveEndpointOutcome ResolveEndpoint(const EndpointParameters& endpointParameters) const
            {
                const DerivedT& derived = static_cast<const DerivedT&>(*this);
                return derived.ResolveEndpointImpl(endpointParameters);
            };

            const ClientContextParametersT& GetClientContextParameters() const
            {
                return m_clientContextParameters;
            }
            ClientContextParametersT& AccessClientContextParameters()
            {
                return m_clientContextParameters;
            }

            const BuiltInParametersT& GetBuiltInParameters() const
            {
                return m_clientContextParameters;
            }
            BuiltInParametersT& AccessBuiltInParameters()
            {
                return m_clientContextParameters;
            }

        protected:
            /* Crt RuleEngine evaluator built using the service's Rule engine */
            Aws::Crt::Endpoints::RuleEngine m_crtRuleEngine;

            /* Also known as a configurable parameters defined by the AWS Service in their c2j/smithy model definition */
            ClientContextParametersT m_clientContextParameters;

            /* Also known as parameters on the ClientConfiguration in this SDK */
            BuiltInParametersT m_builtInParameters;
        };


        template<typename DerivedT>
        typename DefaultEndpointProvider<DerivedT>::ResolveEndpointOutcome
        ResolveEndpointDefaultImpl(const Aws::Crt::Endpoints::RuleEngine& ruleEngine,
                                   const EndpointProviderBase::EndpointParameters& builtInParameters,
                                   const EndpointProviderBase::EndpointParameters& clientContextParameters,
                                   const EndpointProviderBase::EndpointParameters& endpointParameters)
        {
            if(!ruleEngine) {
                AWS_LOGSTREAM_FATAL(DEFAULT_ENDPOINT_PROVIDER_TAG, "Invalid CRT Rule Engine state");
                return typename DefaultEndpointProvider<DerivedT>::ResolveEndpointOutcome(
                        Aws::Client::AWSError<Aws::Client::CoreErrors>(
                                Aws::Client::CoreErrors::INTERNAL_FAILURE,
                                "",
                                "CRT Endpoint rule engine is not initialized",
                                false/*retryable*/));
            }

            Aws::Crt::Endpoints::RequestContext crtRequestCtx;

            const Aws::Vector<std::reference_wrapper<const EndpointProviderBase::EndpointParameters>> allParameters
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
                        return typename DefaultEndpointProvider<DerivedT>::ResolveEndpointOutcome(
                                Aws::Client::AWSError<Aws::Client::CoreErrors>(
                                        Aws::Client::CoreErrors::INVALID_QUERY_PARAMETER,
                                        "",
                                        "Invalid endpoint parameter type for parameter " + parameter.GetName(),
                                        false/*retryable*/));
                    }
                }
            }

            auto resolved = ruleEngine.resolve(crtRequestCtx);

            if(resolved.has_value())
            {
                if(resolved->IsError())
                {
                    auto crtError = resolved->getError();
                    Aws::String sdkCrtError = crtError ? Aws::String(crtError->begin(), crtError->end()) :
                            "CRT Rule engine resolution resulted in an unknown error";
                    return typename DefaultEndpointProvider<DerivedT>::ResolveEndpointOutcome(
                            Aws::Client::AWSError<Aws::Client::CoreErrors>(
                                    Aws::Client::CoreErrors::INVALID_PARAMETER_COMBINATION,
                                    "",
                                    sdkCrtError,
                                    false/*retryable*/));
                }
                else if(resolved->IsEndpoint() && resolved->getUrl())
                {
                    Aws::Endpoint::AWSEndpoint endpoint;
                    const auto crtUrl = resolved->getUrl();
                    Aws::String sdkCrtUrl = Aws::String(crtUrl->begin(), crtUrl->end());
                    endpoint.SetURL(sdkCrtUrl);

                    // Transform attributes
                    // Each attribute consist of properties, hence converting CRT properties to SDK attributes
                    const auto crtProps = resolved->getProperties();
                    if (crtProps) {
                        Aws::String sdkCrtProps = crtProps ? Aws::String(crtProps->begin(), crtProps->end()) : "";

                        Internal::Endpoint::EndpointAttributes epAttributes = Internal::Endpoint::EndpointAttributes::BuildEndpointAttributesFromJson(
                                sdkCrtProps);

                        endpoint.SetAttributes(std::move(epAttributes));
                    }

                    // transform headers
                    const auto crtHeaders = resolved->getHeaders();
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

                    return typename DefaultEndpointProvider<DerivedT>::ResolveEndpointOutcome(std::move(endpoint));
                }
                else
                {
                    return typename DefaultEndpointProvider<DerivedT>::ResolveEndpointOutcome(
                            Aws::Client::AWSError<Aws::Client::CoreErrors>(
                                    Aws::Client::CoreErrors::INVALID_QUERY_PARAMETER,
                                    "",
                                    "Invalid AWS CRT RuleEngine state",
                                    false/*retryable*/));
                }
            }
            return typename DefaultEndpointProvider<DerivedT>::ResolveEndpointOutcome(
                    Aws::Client::AWSError<Aws::Client::CoreErrors>(
                            Aws::Client::CoreErrors::INVALID_QUERY_PARAMETER,
                            "",
                            "Failed to evaluate the endpoint: null output from AWS CRT RuleEngine",
                            false/*retryable*/));

        }
    } // namespace Auth
} // namespace Aws
