﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScalingEndpointRules.h>
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/DefaultEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace AutoScaling {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::DefaultEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using AutoScalingClientContextParameters = Aws::Endpoint::ClientContextParameters;

using AutoScalingClientConfiguration = Aws::Client::GenericClientConfiguration;
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
class AWS_AUTOSCALING_API AutoScalingEndpointProvider : public AutoScalingDefaultEpProviderBase {
 public:
  using AutoScalingResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  AutoScalingEndpointProvider()
      : AutoScalingDefaultEpProviderBase(Aws::AutoScaling::AutoScalingEndpointRules::GetRulesBlob(),
                                         Aws::AutoScaling::AutoScalingEndpointRules::RulesBlobSize) {}

  ~AutoScalingEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace AutoScaling
}  // namespace Aws
