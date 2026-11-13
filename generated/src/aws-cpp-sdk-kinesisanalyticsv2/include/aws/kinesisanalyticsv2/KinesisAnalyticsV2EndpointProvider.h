/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/endpoint/BDDEndpointProvider.h>
#include <aws/core/endpoint/EndpointParameter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ClientConfiguration.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Endpoint {
using KinesisAnalyticsV2ClientConfiguration = Aws::KinesisAnalyticsV2::KinesisAnalyticsV2ClientConfiguration;
using EndpointParameters = Aws::Endpoint::EndpointParameters;
using Aws::Endpoint::BDDEndpointProvider;
using Aws::Endpoint::EndpointProviderBase;

using KinesisAnalyticsV2ClientContextParameters = Aws::Endpoint::ClientContextParameters;

class AWS_KINESISANALYTICSV2_API KinesisAnalyticsV2BuiltInParameters : public Aws::Endpoint::BuiltInParameters {
 public:
  virtual ~KinesisAnalyticsV2BuiltInParameters() {};
  using Aws::Endpoint::BuiltInParameters::SetFromClientConfiguration;
  virtual void SetFromClientConfiguration(const KinesisAnalyticsV2ClientConfiguration& config);
  virtual void SetFromClientConfiguration(const KinesisAnalyticsV2ClientConfiguration& config, const Aws::String& serviceName);

 private:
  void SetServiceSpecificParameters(const KinesisAnalyticsV2ClientConfiguration& config);
};

/**
 * The type for the KinesisAnalyticsV2 Client Endpoint Provider.
 * Inherit from this Base class / "Interface" should you want to provide a custom endpoint provider.
 * The SDK must use service-specific type for each service per specification.
 */
using KinesisAnalyticsV2EndpointProviderBase =
    EndpointProviderBase<KinesisAnalyticsV2ClientConfiguration, KinesisAnalyticsV2BuiltInParameters,
                         KinesisAnalyticsV2ClientContextParameters>;

using KinesisAnalyticsV2DefaultEpProviderBase =
    BDDEndpointProvider<KinesisAnalyticsV2ClientConfiguration, KinesisAnalyticsV2BuiltInParameters,
                        KinesisAnalyticsV2ClientContextParameters>;

}  // namespace Endpoint
}  // namespace KinesisAnalyticsV2

namespace Endpoint {
/**
 * Export endpoint provider symbols for Windows DLL, otherwise declare as extern
 */
AWS_KINESISANALYTICSV2_EXTERN template class AWS_KINESISANALYTICSV2_API Aws::Endpoint::EndpointProviderBase<
    KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientConfiguration, KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2BuiltInParameters,
    KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientContextParameters>;

AWS_KINESISANALYTICSV2_EXTERN template class AWS_KINESISANALYTICSV2_API Aws::Endpoint::BDDEndpointProvider<
    KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientConfiguration, KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2BuiltInParameters,
    KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientContextParameters>;
}  // namespace Endpoint

namespace KinesisAnalyticsV2 {
namespace Endpoint {
/**
 * Default endpoint provider used for this service
 */
class AWS_KINESISANALYTICSV2_API KinesisAnalyticsV2EndpointProvider : public KinesisAnalyticsV2DefaultEpProviderBase {
 public:
  using KinesisAnalyticsV2ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

  KinesisAnalyticsV2EndpointProvider();

  ~KinesisAnalyticsV2EndpointProvider() {}
};
}  // namespace Endpoint
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
