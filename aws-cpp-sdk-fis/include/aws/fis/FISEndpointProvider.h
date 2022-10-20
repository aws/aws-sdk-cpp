/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/fis/FISEndpointRules.h>


namespace Aws
{
namespace FIS
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using FISClientContextParameters = Aws::Endpoint::ClientContextParameters;
using FISBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class FISEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<FISEndpointProvider,
                                                                        FISBuiltInParameters,
                                                                        FISClientContextParameters>;


class FISEndpointProvider : public DefaultEndpointProviderT
{
public:
    using FISResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    FISEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::FIS::FISEndpointRules::Rules),
        clientConfiguration(config)
    {}

    FISResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<FISEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~FISEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace FIS
} // namespace Aws
