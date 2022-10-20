/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/appstream/AppStreamEndpointRules.h>


namespace Aws
{
namespace AppStream
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AppStreamClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AppStreamBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AppStreamEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AppStreamEndpointProvider,
                                                                        AppStreamBuiltInParameters,
                                                                        AppStreamClientContextParameters>;


class AppStreamEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AppStreamResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AppStreamEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AppStream::AppStreamEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AppStreamResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AppStreamEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AppStreamEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AppStream
} // namespace Aws
