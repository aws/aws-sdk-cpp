/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/fsx/FSxEndpointRules.h>


namespace Aws
{
namespace FSx
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using FSxClientContextParameters = Aws::Endpoint::ClientContextParameters;
using FSxBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class FSxEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<FSxEndpointProvider,
                                                                        FSxBuiltInParameters,
                                                                        FSxClientContextParameters>;


class FSxEndpointProvider : public DefaultEndpointProviderT
{
public:
    using FSxResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    FSxEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::FSx::FSxEndpointRules::Rules),
        clientConfiguration(config)
    {}

    FSxResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<FSxEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~FSxEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace FSx
} // namespace Aws
