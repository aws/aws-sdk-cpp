/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ecr-public/ECRPublicEndpointRules.h>


namespace Aws
{
namespace ECRPublic
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ECRPublicClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ECRPublicBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ECRPublicEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ECRPublicEndpointProvider,
                                                                        ECRPublicBuiltInParameters,
                                                                        ECRPublicClientContextParameters>;


class ECRPublicEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ECRPublicResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ECRPublicEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ECRPublic::ECRPublicEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ECRPublicResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ECRPublicEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ECRPublicEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ECRPublic
} // namespace Aws
