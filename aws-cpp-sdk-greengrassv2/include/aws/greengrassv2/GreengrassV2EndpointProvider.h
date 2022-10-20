/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/greengrassv2/GreengrassV2EndpointRules.h>


namespace Aws
{
namespace GreengrassV2
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using GreengrassV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;
using GreengrassV2BuiltInParameters = Aws::Endpoint::ClientContextParameters;
class GreengrassV2EndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<GreengrassV2EndpointProvider,
                                                                        GreengrassV2BuiltInParameters,
                                                                        GreengrassV2ClientContextParameters>;


class GreengrassV2EndpointProvider : public DefaultEndpointProviderT
{
public:
    using GreengrassV2ResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    GreengrassV2EndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::GreengrassV2::GreengrassV2EndpointRules::Rules),
        clientConfiguration(config)
    {}

    GreengrassV2ResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<GreengrassV2EndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~GreengrassV2EndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace GreengrassV2
} // namespace Aws
