/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/elasticmapreduce/EMREndpointRules.h>


namespace Aws
{
namespace EMR
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using EMRClientContextParameters = Aws::Endpoint::ClientContextParameters;
using EMRBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class EMREndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<EMREndpointProvider,
                                                                        EMRBuiltInParameters,
                                                                        EMRClientContextParameters>;


class EMREndpointProvider : public DefaultEndpointProviderT
{
public:
    using EMRResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    EMREndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::EMR::EMREndpointRules::Rules),
        clientConfiguration(config)
    {}

    EMRResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<EMREndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~EMREndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace EMR
} // namespace Aws
