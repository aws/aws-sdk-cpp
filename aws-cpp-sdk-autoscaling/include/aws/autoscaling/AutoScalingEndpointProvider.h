/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <aws/autoscaling/AutoScalingEndpointRules.h>


namespace Aws
{
namespace AutoScaling
{
namespace Endpoint
{
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::EndpointProviderBase;
using Aws::Endpoint::DefaultEndpointProvider;

using AutoScalingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AutoScalingClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
using AutoScalingBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the AutoScaling Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using AutoScalingEndpointProviderBase =
    EndpointProviderBase<AutoScalingClientConfiguration, AutoScalingBuiltInParameters, AutoScalingClientContextParameters>;

using AutoScalingDefaultEpProviderBase =
    DefaultEndpointProvider<AutoScalingClientConfiguration, AutoScalingBuiltInParameters, AutoScalingClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_AUTOSCALING_API AutoScalingEndpointProvider : public AutoScalingDefaultEpProviderBase
{
public:
    using AutoScalingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

    AutoScalingEndpointProvider()
      : AutoScalingDefaultEpProviderBase(Aws::AutoScaling::AutoScalingEndpointRules::Rules)
    {}

    ~AutoScalingEndpointProvider()
    {
    }
};
} // namespace Endpoint
} // namespace AutoScaling
} // namespace Aws
