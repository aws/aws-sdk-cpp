/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/sesv2/SESV2EndpointRules.h>


namespace Aws
{
namespace SESV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using SESV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using SESV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class SESV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<SESV2EndpointProvider,
                                                                        SESV2BuiltInParameters,
                                                                        SESV2ClientContextParameters>;


class SESV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using SESV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    SESV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::SESV2::SESV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    SESV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<SESV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~SESV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace SESV2
} // namespace Aws
