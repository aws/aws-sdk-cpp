/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/proton/ProtonEndpointRules.h>


namespace Aws
{
namespace Proton
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ProtonClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ProtonBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ProtonEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ProtonEndpointProvider,
                                                                        ProtonBuiltInParameters,
                                                                        ProtonClientContextParameters>;


class ProtonEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ProtonResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ProtonEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Proton::ProtonEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ProtonResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ProtonEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ProtonEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Proton
} // namespace Aws
