/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/pinpoint-email/PinpointEmailEndpointRules.h>


namespace Aws
{
namespace PinpointEmail
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using PinpointEmailClientContextParameters = Aws::Endpoint::ClientContextParameters;
using PinpointEmailBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class PinpointEmailEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<PinpointEmailEndpointProvider,
                                                                        PinpointEmailBuiltInParameters,
                                                                        PinpointEmailClientContextParameters>;


class PinpointEmailEndpointProvider : public DefaultEndpointProviderT
{
public:
    using PinpointEmailResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    PinpointEmailEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::PinpointEmail::PinpointEmailEndpointRules::Rules),
        clientConfiguration(config)
    {}

    PinpointEmailResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<PinpointEmailEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~PinpointEmailEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace PinpointEmail
} // namespace Aws
