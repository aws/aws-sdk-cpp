/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2EndpointProvider.h>
#include <aws/kinesisanalyticsv2/internal/KinesisAnalyticsV2EndpointRules.h>

namespace Aws {
#ifndef AWS_KINESISANALYTICSV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientConfiguration,
                                                   KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2BuiltInParameters,
                                                   KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientConfiguration,
                                                  KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2BuiltInParameters,
                                                  KinesisAnalyticsV2::Endpoint::KinesisAnalyticsV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KinesisAnalyticsV2 {
namespace Endpoint {
KinesisAnalyticsV2EndpointProvider::KinesisAnalyticsV2EndpointProvider()
    : KinesisAnalyticsV2DefaultEpProviderBase(Aws::KinesisAnalyticsV2::KinesisAnalyticsV2EndpointRules::GetRulesBlob(),
                                              Aws::KinesisAnalyticsV2::KinesisAnalyticsV2EndpointRules::RulesBlobSize) {}

void KinesisAnalyticsV2BuiltInParameters::SetFromClientConfiguration(const KinesisAnalyticsV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisAnalyticsV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KinesisAnalyticsV2BuiltInParameters::SetFromClientConfiguration(const KinesisAnalyticsV2ClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KinesisAnalyticsV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KinesisAnalyticsV2BuiltInParameters::SetServiceSpecificParameters(const KinesisAnalyticsV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
