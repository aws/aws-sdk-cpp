/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mgn/MgnEndpointRules.h>


namespace Aws
{
namespace mgn
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MgnClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MgnBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MgnEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MgnEndpointProvider,
                                                                        MgnBuiltInParameters,
                                                                        MgnClientContextParameters>;


class MgnEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MgnResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MgnEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::mgn::MgnEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MgnResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MgnEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MgnEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace mgn
} // namespace Aws
