/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/iam/IAMEndpointRules.h>


namespace Aws
{
namespace IAM
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using IAMClientContextParameters = Aws::Endpoint::ClientContextParameters;
using IAMBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class IAMEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<IAMEndpointProvider,
                                                                        IAMBuiltInParameters,
                                                                        IAMClientContextParameters>;


class IAMEndpointProvider : public DefaultEndpointProviderT
{
public:
    using IAMResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    IAMEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::IAM::IAMEndpointRules::Rules),
        clientConfiguration(config)
    {}

    IAMResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<IAMEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~IAMEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace IAM
} // namespace Aws
