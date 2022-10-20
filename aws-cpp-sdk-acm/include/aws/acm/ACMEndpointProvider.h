/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/acm/ACMEndpointRules.h>


namespace Aws
{
namespace ACM
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ACMClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ACMBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ACMEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ACMEndpointProvider,
                                                                        ACMBuiltInParameters,
                                                                        ACMClientContextParameters>;


class ACMEndpointProvider : public DefaultEndpointProviderT
{
public:
    using ACMResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ACMEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ACM::ACMEndpointRules::Rules),
        clientConfiguration(config)
    {}

    ACMResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ACMEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ACMEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ACM
} // namespace Aws
