/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ivs/IVSEndpointRules.h>


namespace Aws
{
namespace IVS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IVSClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IVSBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IVSEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IVSEndpointProvider,
                                                                        IVSBuiltInParameters,
                                                                        IVSClientContextParameters>;


class IVSEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IVSResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IVSEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IVS::IVSEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IVSResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IVSEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IVSEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IVS
} // namespace Aws
