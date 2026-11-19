/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/logs/CloudWatchLogsClientConfiguration.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Endpoint {
using CloudWatchLogsClientConfiguration = Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using CloudWatchLogsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_CLOUDWATCHLOGS_API CloudWatchLogsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~CloudWatchLogsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const CloudWatchLogsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const CloudWatchLogsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const CloudWatchLogsClientConfiguration& config);
};

/**
 * The type for the CloudWatchLogs Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using CloudWatchLogsEndpointProviderBase =
    EndpointProviderBase<CloudWatchLogsClientConfiguration, CloudWatchLogsBuiltInParameters, CloudWatchLogsClientContextParameters>;

using CloudWatchLogsDefaultEpProviderBase =
    BDDEndpointProvider<CloudWatchLogsClientConfiguration, CloudWatchLogsBuiltInParameters, CloudWatchLogsClientContextParameters>;

}  // namespace Endpoint
}  // namespace CloudWatchLogs

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_CLOUDWATCHLOGS_EXTERN template class AWS_CLOUDWATCHLOGS_API Aws::Endpoint::EndpointProviderBase<
    CloudWatchLogs::Endpoint::CloudWatchLogsClientConfiguration, CloudWatchLogs::Endpoint::CloudWatchLogsBuiltInParameters,
    CloudWatchLogs::Endpoint::CloudWatchLogsClientContextParameters>;

AWS_CLOUDWATCHLOGS_EXTERN template class AWS_CLOUDWATCHLOGS_API Aws::Endpoint::BDDEndpointProvider<
    CloudWatchLogs::Endpoint::CloudWatchLogsClientConfiguration, CloudWatchLogs::Endpoint::CloudWatchLogsBuiltInParameters,
    CloudWatchLogs::Endpoint::CloudWatchLogsClientContextParameters>;
}  // namespace Endpoint

namespace CloudWatchLogs {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_CLOUDWATCHLOGS_API CloudWatchLogsEndpointProvider : public CloudWatchLogsDefaultEpProviderBase {
 public:
  using CloudWatchLogsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  CloudWatchLogsEndpointProvider();

  ~CloudWatchLogsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace CloudWatchLogs
}  // namespace Aws
