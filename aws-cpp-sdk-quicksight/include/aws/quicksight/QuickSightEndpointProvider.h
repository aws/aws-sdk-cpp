/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/quicksight/QuickSightEndpointRules.h>


namespace Aws
{
namespace QuickSight
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using QuickSightClientContextParameters = Aws::Endpoint::ClientContextParameters;
using QuickSightBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class QuickSightEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<QuickSightEndpointProvider,
                                                                        QuickSightBuiltInParameters,
                                                                        QuickSightClientContextParameters>;


class QuickSightEndpointProvider : public DefaultEndpointProviderT
{
public:
    using QuickSightResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    QuickSightEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::QuickSight::QuickSightEndpointRules::Rules),
        clientConfiguration(config)
    {}

    QuickSightResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<QuickSightEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~QuickSightEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace QuickSight
} // namespace Aws
