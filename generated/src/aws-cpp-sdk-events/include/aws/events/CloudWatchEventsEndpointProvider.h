/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/CloudWatchEventsClientConfiguration.h>
#include <aws/events/CloudWatchEvents_EXPORTS.h>

namespace Aws {
namespace CloudWatchEvents {
namespace Endpoint {
using CloudWatchEventsClientConfiguration = Aws::CloudWatchEvents::CloudWatchEventsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudWatchEventsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDWATCHEVENTS_API CloudWatchEventsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudWatchEventsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudWatchEventsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudWatchEventsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudWatchEventsClientConfiguration& config);
};

/**
 * The type for the CloudWatchEvents Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchEventsEndpointProviderBase =
    EndpointProviderBase<CloudWatchEventsClientConfiguration, CloudWatchEventsBuiltInParameters, CloudWatchEventsClientContextParameters>;

using CloudWatchEventsDefaultEpProviderBase =
    BDDEndpointProvider<CloudWatchEventsClientConfiguration, CloudWatchEventsBuiltInParameters, CloudWatchEventsClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudWatchEvents

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDWATCHEVENTS_EXTERN template class AWS_CLOUDWATCHEVENTS_API Aws::Endpoint::EndpointProviderBase<
    CloudWatchEvents::Endpoint::CloudWatchEventsClientConfiguration, CloudWatchEvents::Endpoint::CloudWatchEventsBuiltInParameters,
    CloudWatchEvents::Endpoint::CloudWatchEventsClientContextParameters>;

AWS_CLOUDWATCHEVENTS_EXTERN template class AWS_CLOUDWATCHEVENTS_API Aws::Endpoint::BDDEndpointProvider<
    CloudWatchEvents::Endpoint::CloudWatchEventsClientConfiguration, CloudWatchEvents::Endpoint::CloudWatchEventsBuiltInParameters,
    CloudWatchEvents::Endpoint::CloudWatchEventsClientContextParameters>;
}  // namespace Endpoint

namespace CloudWatchEvents {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHEVENTS_API CloudWatchEventsEndpointProvider : public CloudWatchEventsDefaultEpProviderBase {
 public:
  using CloudWatchEventsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudWatchEventsEndpointProvider();

  ~CloudWatchEventsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudWatchEvents
}  // namespace Aws
