/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie/Macie_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/macie/MacieEndpointRules.h>


namespace Aws
{
namespace Macie
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using MacieClientContextParameters = Aws::Endpoint::ClientContextParameters;
using MacieBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class MacieEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<MacieEndpointProvider,
                                                                        MacieBuiltInParameters,
                                                                        MacieClientContextParameters>;


class MacieEndpointProvider : public DefaultEndpointProviderT
{
public:
    using MacieResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    MacieEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Macie::MacieEndpointRules::Rules),
        clientConfiguration(config)
    {}

    MacieResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<MacieEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~MacieEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Macie
} // namespace Aws
