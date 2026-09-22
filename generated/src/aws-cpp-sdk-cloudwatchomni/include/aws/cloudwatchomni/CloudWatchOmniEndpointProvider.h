/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Endpoint {
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudWatchOmniClientContextParameters = Aws::Endpoint::ClientContextParameters;

using CloudWatchOmniClientConfiguration = Aws::Client::GenericClientConfiguration;
using CloudWatchOmniBuiltInParameters = Aws::Endpoint::BuiltInParameters;

/**
 * The type for the CloudWatchOmni Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchOmniEndpointProviderBase =
    EndpointProviderBase<CloudWatchOmniClientConfiguration, CloudWatchOmniBuiltInParameters, CloudWatchOmniClientContextParameters>;

using CloudWatchOmniDefaultEpProviderBase =
    BDDEndpointProvider<CloudWatchOmniClientConfiguration, CloudWatchOmniBuiltInParameters, CloudWatchOmniClientContextParameters>;

/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHOMNI_API CloudWatchOmniEndpointProvider : public CloudWatchOmniDefaultEpProviderBase {
 public:
  using CloudWatchOmniResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudWatchOmniEndpointProvider();

  ~CloudWatchOmniEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudWatchOmni
}  // namespace Aws
