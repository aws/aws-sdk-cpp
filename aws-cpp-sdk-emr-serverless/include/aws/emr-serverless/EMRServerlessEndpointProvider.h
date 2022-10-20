/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/emr-serverless/EMRServerlessEndpointRules.h>


namespace Aws
{
namespace EMRServerless
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EMRServerlessClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EMRServerlessBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EMRServerlessEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EMRServerlessEndpointProvider,
                                                                        EMRServerlessBuiltInParameters,
                                                                        EMRServerlessClientContextParameters>;


class EMRServerlessEndpointProvider : public DefaultEndpointProviderT
{
public:
    using EMRServerlessResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EMRServerlessEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EMRServerless::EMRServerlessEndpointRules::Rules),
        clientConfiguration(config)
    {}

    EMRServerlessResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EMRServerlessEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EMRServerlessEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EMRServerless
} // namespace Aws
