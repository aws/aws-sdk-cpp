/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/lookoutvision/LookoutforVisionEndpointRules.h>


namespace Aws
{
namespace LookoutforVision
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using LookoutforVisionClientContextParameters = Aws::Endpoint::ClientContextParameters;
using LookoutforVisionBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class LookoutforVisionEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<LookoutforVisionEndpointProvider,
                                                                        LookoutforVisionBuiltInParameters,
                                                                        LookoutforVisionClientContextParameters>;


class LookoutforVisionEndpointProvider : public DefaultEndpointProviderT
{
public:
    using LookoutforVisionResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    LookoutforVisionEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::LookoutforVision::LookoutforVisionEndpointRules::Rules),
        clientConfiguration(config)
    {}

    LookoutforVisionResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<LookoutforVisionEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~LookoutforVisionEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace LookoutforVision
} // namespace Aws
