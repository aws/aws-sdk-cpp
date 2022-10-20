/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sagemaker/SageMakerEndpointRules.h>


namespace Aws
{
namespace SageMaker
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SageMakerClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SageMakerBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SageMakerEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SageMakerEndpointProvider,
                                                                        SageMakerBuiltInParameters,
                                                                        SageMakerClientContextParameters>;


class SageMakerEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SageMakerResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SageMakerEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SageMaker::SageMakerEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SageMakerResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SageMakerEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SageMakerEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SageMaker
} // namespace Aws
