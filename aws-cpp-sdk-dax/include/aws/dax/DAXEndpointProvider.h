/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/dax/DAXEndpointRules.h>


namespace Aws
{
namespace DAX
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DAXClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DAXBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DAXEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DAXEndpointProvider,
                                                                        DAXBuiltInParameters,
                                                                        DAXClientContextParameters>;


class DAXEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DAXResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DAXEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::DAX::DAXEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DAXResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DAXEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DAXEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace DAX
} // namespace Aws
