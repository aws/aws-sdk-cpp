/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/detective/DetectiveEndpointRules.h>


namespace Aws
{
namespace Detective
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using DetectiveClientContextParameters = Aws::Endpoint::ClientContextParameters;
using DetectiveBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class DetectiveEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<DetectiveEndpointProvider,
                                                                        DetectiveBuiltInParameters,
                                                                        DetectiveClientContextParameters>;


class DetectiveEndpointProvider : public DefaultEndpointProviderT
{
public:
    using DetectiveResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    DetectiveEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::Detective::DetectiveEndpointRules::Rules),
        clientConfiguration(config)
    {}

    DetectiveResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<DetectiveEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~DetectiveEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace Detective
} // namespace Aws
