/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/macie2/Macie2EndpointRules.h>


namespace Aws
{
namespace Macie2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using Macie2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using Macie2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class Macie2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<Macie2EndpointProvider,
                                                                        Macie2BuiltInParameters,
                                                                        Macie2ClientContextParameters>;


class Macie2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using Macie2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    Macie2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Macie2::Macie2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    Macie2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<Macie2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~Macie2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Macie2
} // namespace Aws
