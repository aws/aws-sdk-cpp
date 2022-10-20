/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/ecr/ECREndpointRules.h>


namespace Aws
{
namespace ECR
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using ECRClientContextParameters = Aws::Endpoint::ClientContextParameters;
using ECRBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class ECREndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<ECREndpointProvider,
                                                                        ECRBuiltInParameters,
                                                                        ECRClientContextParameters>;


class ECREndpointProvider : public DefaultEndpointProviderT
{
public:
    using ECRResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    ECREndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::ECR::ECREndpointRules::Rules),
        clientConfiguration(config)
    {}

    ECRResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<ECREndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~ECREndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace ECR
} // namespace Aws
