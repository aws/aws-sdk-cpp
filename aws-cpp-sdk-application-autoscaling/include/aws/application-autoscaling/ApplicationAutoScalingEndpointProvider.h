/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/application-autoscaling/ApplicationAutoScalingEndpointRules.h>


namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using ApplicationAutoScalingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using ApplicationAutoScalingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using ApplicationAutoScalingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the ApplicationAutoScaling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using ApplicationAutoScalingEndpointProviderBase =
    EndpointProviderBase<ApplicationAutoScalingClientConfiguration, ApplicationAutoScalingBuiltInParameters, ApplicationAutoScalingClientContextParameters>;

using ApplicationAutoScalingDefaultEpProviderBase =
    DefaultEndpointProvider<ApplicationAutoScalingClientConfiguration, ApplicationAutoScalingBuiltInParameters, ApplicationAutoScalingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_APPLICATIONAUTOSCALING_API ApplicationAutoScalingEndpointProvider : public ApplicationAutoScalingDefaultEpProviderBase
{
public:
    using ApplicationAutoScalingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    ApplicationAutoScalingEndpointProvider()
      : ApplicationAutoScalingDefaultEpProviderBase(Aws::ApplicationAutoScaling::ApplicationAutoScalingEndpointRules::Rules)
    {}

    ~ApplicationAutoScalingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace ApplicationAutoScaling
} // namespace Aws
