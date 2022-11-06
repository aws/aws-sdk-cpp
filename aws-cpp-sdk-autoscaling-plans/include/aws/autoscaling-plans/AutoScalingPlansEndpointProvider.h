/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
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
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AutoScalingPlansClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AutoScalingPlansClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AutoScalingPlansBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AutoScalingPlans Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AutoScalingPlansEndpointProviderBase =
    EndpointProviderBase<AutoScalingPlansClientConfiguration, AutoScalingPlansBuiltInParameters, AutoScalingPlansClientContextParameters>;

using AutoScalingPlansDefaultEpProviderBase =
    DefaultEndpointProvider<AutoScalingPlansClientConfiguration, AutoScalingPlansBuiltInParameters, AutoScalingPlansClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AUTOSCALINGPLANS_API AutoScalingPlansEndpointProvider : public AutoScalingPlansDefaultEpProviderBase
{
public:
    using AutoScalingPlansResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AutoScalingPlansEndpointProvider()
      : AutoScalingPlansDefaultEpProviderBase(Aws::AutoScalingPlans::AutoScalingPlansEndpointRules::Rules)
    {}

    ~AutoScalingPlansEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AutoScalingPlans
} // namespace Aws
