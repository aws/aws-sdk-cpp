/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/wellarchitected/WellArchitectedEndpointRules.h>


namespace Aws
{
namespace WellArchitected
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using WellArchitectedClientContextParameters = Aws::Endpoint::ClientContextParameters;
using WellArchitectedBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class WellArchitectedEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<WellArchitectedEndpointProvider,
                                                                        WellArchitectedBuiltInParameters,
                                                                        WellArchitectedClientContextParameters>;


class WellArchitectedEndpointProvider : public DefaultEndpointProviderT
{
public:
    using WellArchitectedResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    WellArchitectedEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::WellArchitected::WellArchitectedEndpointRules::Rules),
        clientConfiguration(config)
    {}

    WellArchitectedResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<WellArchitectedEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~WellArchitectedEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace WellArchitected
} // namespace Aws
