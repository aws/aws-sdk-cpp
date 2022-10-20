/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeEndpointRules.h>


namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AugmentedAIRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AugmentedAIRuntimeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AugmentedAIRuntimeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AugmentedAIRuntimeEndpointProvider,
                                                                        AugmentedAIRuntimeBuiltInParameters,
                                                                        AugmentedAIRuntimeClientContextParameters>;


class AugmentedAIRuntimeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AugmentedAIRuntimeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AugmentedAIRuntimeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AugmentedAIRuntime::AugmentedAIRuntimeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AugmentedAIRuntimeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AugmentedAIRuntimeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AugmentedAIRuntimeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AugmentedAIRuntime
} // namespace Aws
