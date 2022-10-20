/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/support/SupportEndpointRules.h>


namespace Aws
{
namespace Support
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SupportClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SupportBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SupportEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SupportEndpointProvider,
                                                                        SupportBuiltInParameters,
                                                                        SupportClientContextParameters>;


class SupportEndpointProvider : public DefaultEndpointProviderT
{
public:
    using SupportResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SupportEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Support::SupportEndpointRules::Rules),
        clientConfiguration(config)
    {}

    SupportResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SupportEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SupportEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Support
} // namespace Aws
