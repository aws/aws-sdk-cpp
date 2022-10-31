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
         * Default endpoint provider template used in this SDK.
         *
         * Curiously Recurring Template Pattern is used (mostly for reducing the amount of copy-paste code
         *   static polymorphism is not applicable in the existing design):
         * https://en.cppreference.com/w/cpp/language/crtp
         */
        template<typename DerivedT,  // i.e. S3EndpointProvider
                 typename ClientConfigurationT, // i.e. S3ClientConfiguration
                 typename BuiltInParametersT = Aws::Endpoint::BuiltInParameters,
                 typename ClientContextParametersT = Aws::Endpoint::ClientContextParameters>
        class AWS_CORE_API DefaultEndpointProvider : public EndpointProviderBase<ClientConfigurationT, BuiltInParametersT, ClientContextParametersT>
        {
        public:
            using EndpointProviderBaseT = EndpointProviderBase<ClientConfigurationT, BuiltInParametersT, ClientContextParametersT>;

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

            void InitBuiltInParameters(const ClientConfigurationT& config) override
            {
                m_builtInParameters.SetFromClientConfiguration(config);
            }

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
                return m_builtInParameters;
            }
            BuiltInParametersT& AccessBuiltInParameters()
            {
                return m_builtInParameters;
            }

            void OverrideEndpoint(const Aws::String& endpoint) override
            {
                m_builtInParameters.OverrideEndpoint(endpoint);
            }

        protected:
            /* Crt RuleEngine evaluator built using the service's Rule engine */
            Aws::Crt::Endpoints::RuleEngine m_crtRuleEngine;

            /* Also known as a configurable parameters defined by the AWS Service in their c2j/smithy model definition */
            ClientContextParametersT m_clientContextParameters;

            /* Also known as parameters on the ClientConfiguration in this SDK */
            BuiltInParametersT m_builtInParameters;
        };


        /**
         * Default template implementation for endpoint resolution
         * @param ruleEngine
         * @param builtInParameters
         * @param clientContextParameters
         * @param endpointParameters
         * @return
         */
        ResolveEndpointOutcome
        ResolveEndpointDefaultImpl(const Aws::Crt::Endpoints::RuleEngine& ruleEngine,
                                   const EndpointParameters& builtInParameters,
                                   const EndpointParameters& clientContextParameters,
                                   const EndpointParameters& endpointParameters);
    } // namespace Endpoint
} // namespace Aws
