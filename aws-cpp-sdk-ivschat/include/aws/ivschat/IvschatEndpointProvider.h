/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ivschat/IvschatEndpointRules.h>


namespace Aws
{
namespace ivschat
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IvschatClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IvschatBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IvschatEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IvschatEndpointProvider,
                                                                        IvschatBuiltInParameters,
                                                                        IvschatClientContextParameters>;


class IvschatEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IvschatResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IvschatEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ivschat::IvschatEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IvschatResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IvschatEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IvschatEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ivschat
} // namespace Aws
