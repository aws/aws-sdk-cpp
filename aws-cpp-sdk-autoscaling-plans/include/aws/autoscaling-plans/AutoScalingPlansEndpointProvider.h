/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/autoscaling-plans/AutoScalingPlansEndpointRules.h>


namespace Aws
{
namespace AutoScalingPlans
{
namespace Endpoint
{
using EndpointParameters = Aws::Vector<Aws::Endpoint::EndpointParameter>;

using AutoScalingPlansClientContextParameters = Aws::Endpoint::ClientContextParameters;
using AutoScalingPlansBuiltInParameters = Aws::Endpoint::ClientContextParameters;
class AutoScalingPlansEndpointProvider;
using DefaultEndpointProviderT = Aws::Endpoint::DefaultEndpointProvider<AutoScalingPlansEndpointProvider,
                                                                        AutoScalingPlansBuiltInParameters,
                                                                        AutoScalingPlansClientContextParameters>;


class AutoScalingPlansEndpointProvider : public DefaultEndpointProviderT
{
public:
    using AutoScalingPlansResolveEndpointOutcome = typename DefaultEndpointProviderT::ResolveEndpointOutcome;

    AutoScalingPlansEndpointProvider(const Client::ClientConfiguration& config = Client::ClientConfiguration())
      : DefaultEndpointProviderT(Aws::AutoScalingPlans::AutoScalingPlansEndpointRules::Rules),
        clientConfiguration(config)
    {}

    AutoScalingPlansResolveEndpointOutcome ResolveEndpointImpl(const EndpointParameters& epParams) const
    {
        auto ResolveEndpointDefaultImpl =
            Aws::Endpoint::ResolveEndpointDefaultImpl<AutoScalingPlansEndpointProvider>;

        return ResolveEndpointDefaultImpl(m_crtRuleEngine, m_builtInParameters.GetAllParameters(), m_clientContextParameters.GetAllParameters(), epParams);
    }

    ~AutoScalingPlansEndpointProvider()
    {
    }
protected:
    Client::ClientConfiguration clientConfiguration;
};
} // namespace Endpoint
} // namespace AutoScalingPlans
} // namespace Aws
