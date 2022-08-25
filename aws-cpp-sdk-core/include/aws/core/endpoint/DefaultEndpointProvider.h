/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/endpoint/EndpointProviderBase.h>
#include <aws/core/endpoint/EndpointParameter.h>

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>

namespace Aws
{
    namespace Endpoint
    {
        /**
          * Curiously Recurring Template Pattern is used:
          * https://en.cppreference.com/w/cpp/language/crtp
          */
        template<typename DerivedT, typename EndpointParametersT>
        class AWS_CORE_API DefaultEndpointProvider : EndpointProviderBase<EndpointParametersT>
        {
        public:
            DefaultEndpointProvider(const Aws::Vector<char>& endpointRulesBLOB)
            {
                // m_crtRuleEngineCtx = crt_init_rules_engine(endpointRulesBLOB);
            }

            virtual ~DefaultEndpointProvider()
            {
                // crt_free_rules_engine(crtRuleEngineCtx);
                m_crtRuleEngineCtx = nullptr;
            }

            using ResolveEndpointOutcome = typename EndpointProviderBase<EndpointParametersT>::ResolveEndpointOutcome;

            /**
             * The core of the bearer token provider interface. Implement ResolveEndpointImpl in Derived
             */
            ResolveEndpointOutcome ResolveEndpoint(const EndpointParametersT& endpointParameters) const
            {
                DerivedT& derived = static_cast<DerivedT&>(*this);
                return derived.ResolveEndpointImpl(endpointParameters);
            };

        protected:
            void * m_crtRuleEngineCtx = nullptr;
        };


        // non-member function in case DerivedT::EndpointParametersT is not compatible with a default implementation
        template<typename DerivedT, typename EndpointParametersT>
        typename DefaultEndpointProvider<DerivedT, EndpointParametersT>::ResolveEndpointOutcome ResolveEndpointDefaultImpl(const EndpointParametersT& endpointParameters)
        {
            // void* crtRuleEngineEndpointParameters = crt_init_rules_engine_endpoint_parameters();
            for(const auto& parameter : endpointParameters)
            {
                std::cout << "Parameter: " << parameter.GetName();

                if(EndpointParameter::ParameterType::BOOLEAN == parameter.GetStoredType())
                {
                    // crt_init_rules_engine_endpoint_parameters_append_boolean_parameter(crtRuleEngineEndpointParameters, parameter.GetName(), parameter.GetBool());
                }
                else if(EndpointParameter::ParameterType::STRING == parameter.GetStoredType())
                {
                    // crt_init_rules_engine_endpoint_parameters_append_string_parameter(crtRuleEngineEndpointParameters, parameter.GetName(), parameter.GetString());
                }
                else
                {
                    return DefaultEndpointProvider<DerivedT, EndpointParametersT>::ResolveEndpointOutcome(
                            Aws::Client::AWSError<Aws::Client::CoreErrors>(
                                    Aws::Client::CoreErrors::INVALID_QUERY_PARAMETER,
                                    "",
                                    "Invalid endpoint parameter type for parameter " + parameter.GetName(),
                                    false/*retryable*/));
                }
            }

            // crt_resolved_endpoint = crt_resolve_endpoint(m_crtRuleEngineCtx, crtRuleEngineEndpointParameters);

            Aws::Endpoint::AWSEndpoint endpoint;
            endpoint.SetURL("https://aws-sdk-dummy.amazon.com" /*crt_resolved_endpoint.resolved_url*/);

            // transform attributes

            // transform headers

            return DefaultEndpointProvider<DerivedT, EndpointParametersT>::ResolveEndpointOutcome(std::move(endpoint));
        };
    } // namespace Auth
} // namespace Aws
