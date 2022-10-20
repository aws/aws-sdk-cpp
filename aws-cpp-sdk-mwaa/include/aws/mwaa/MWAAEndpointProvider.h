/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/mwaa/MWAAEndpointRules.h>


namespace Aws
{
namespace MWAA
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MWAAClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MWAABuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MWAAEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MWAAEndpointProvider,
                                                                        MWAABuiltInParameters,
                                                                        MWAAClientContextParameters>;


class MWAAEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MWAAResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MWAAEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::MWAA::MWAAEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MWAAResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MWAAEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MWAAEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace MWAA
} // namespace Aws
