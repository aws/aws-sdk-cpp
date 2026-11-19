/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalytics/KinesisAnalyticsClientConfiguration.h>
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>

namespace Aws {
namespace KinesisAnalytics {
namespace Endpoint {
using KinesisAnalyticsClientConfiguration = Aws::KinesisAnalytics::KinesisAnalyticsClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KinesisAnalyticsClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KINESISANALYTICS_API KinesisAnalyticsBuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KinesisAnalyticsBuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KinesisAnalyticsClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KinesisAnalyticsClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KinesisAnalyticsClientConfiguration& config);
};

/**
 * The type for the KinesisAnalytics Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisAnalyticsEndpointProviderBase =
    EndpointProviderBase<KinesisAnalyticsClientConfiguration, KinesisAnalyticsBuiltInParameters, KinesisAnalyticsClientContextParameters>;

using KinesisAnalyticsDefaultEpProviderBase =
    BDDEndpointProvider<KinesisAnalyticsClientConfiguration, KinesisAnalyticsBuiltInParameters, KinesisAnalyticsClientContextParameters>;

}  // namespace Endpoint
}  // namespace KinesisAnalytics

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KINESISANALYTICS_EXTERN template class AWS_KINESISANALYTICS_API Aws::Endpoint::EndpointProviderBase<
    KinesisAnalytics::Endpoint::KinesisAnalyticsClientConfiguration, KinesisAnalytics::Endpoint::KinesisAnalyticsBuiltInParameters,
    KinesisAnalytics::Endpoint::KinesisAnalyticsClientContextParameters>;

AWS_KINESISANALYTICS_EXTERN template class AWS_KINESISANALYTICS_API Aws::Endpoint::BDDEndpointProvider<
    KinesisAnalytics::Endpoint::KinesisAnalyticsClientConfiguration, KinesisAnalytics::Endpoint::KinesisAnalyticsBuiltInParameters,
    KinesisAnalytics::Endpoint::KinesisAnalyticsClientContextParameters>;
}  // namespace Endpoint

namespace KinesisAnalytics {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISANALYTICS_API KinesisAnalyticsEndpointProvider : public KinesisAnalyticsDefaultEpProviderBase {
 public:
  using KinesisAnalyticsResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KinesisAnalyticsEndpointProvider();

  ~KinesisAnalyticsEndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KinesisAnalytics
}  // namespace Aws
