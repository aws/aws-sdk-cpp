/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect-contact-lens/ConnectContactLens_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/connect-contact-lens/ConnectContactLensEndpointRules.h>


namespace Aws
{
namespace ConnectContactLens
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ConnectContactLensClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ConnectContactLensBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ConnectContactLensEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ConnectContactLensEndpointProvider,
                                                                        ConnectContactLensBuiltInParameters,
                                                                        ConnectContactLensClientContextParameters>;


class ConnectContactLensEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ConnectContactLensResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ConnectContactLensEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ConnectContactLens::ConnectContactLensEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ConnectContactLensResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ConnectContactLensEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ConnectContactLensEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ConnectContactLens
} // namespace Aws
