/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker-runtime/SageMakerRuntimeEndpointRules.h>


namespace Aws
{
namespace SageMakerRuntime
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SageMakerRuntimeClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SageMakerRuntimeBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SageMakerRuntimeEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SageMakerRuntimeEndpointProvider,
                                                                        SageMakerRuntimeBuiltInParameters,
                                                                        SageMakerRuntimeClientContextParameters>;


class SageMakerRuntimeEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SageMakerRuntimeResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SageMakerRuntimeEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SageMakerRuntime::SageMakerRuntimeEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SageMakerRuntimeResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SageMakerRuntimeEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SageMakerRuntimeEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SageMakerRuntime
} // namespace Aws
