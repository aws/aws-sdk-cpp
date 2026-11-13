/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/KinesisAnalyticsEndpointProvider.h>
#include <aws/kinesisanalytics/internal/KinesisAnalyticsEndpointRules.h>

namespace Aws {
#ifndef AWS_KINESISANALYTICS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<KinesisAnalytics::Endpoint::KinesisAnalyticsClientConfiguration,
                                                   KinesisAnalytics::Endpoint::KinesisAnalyticsBuiltInParameters,
                                                   KinesisAnalytics::Endpoint::KinesisAnalyticsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<KinesisAnalytics::Endpoint::KinesisAnalyticsClientConfiguration,
                                                  KinesisAnalytics::Endpoint::KinesisAnalyticsBuiltInParameters,
                                                  KinesisAnalytics::Endpoint::KinesisAnalyticsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace KinesisAnalytics {
namespace Endpoint {
KinesisAnalyticsEndpointProvider::KinesisAnalyticsEndpointProvider()
    : KinesisAnalyticsDefaultEpProviderBase(Aws::KinesisAnalytics::KinesisAnalyticsEndpointRules::GetRulesBlob(),
                                            Aws::KinesisAnalytics::KinesisAnalyticsEndpointRules::RulesBlobSize) {}

void KinesisAnalyticsBuiltInParameters::SetFromClientConfiguration(const KinesisAnalyticsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const KinesisAnalyticsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void KinesisAnalyticsBuiltInParameters::SetFromClientConfiguration(const KinesisAnalyticsClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const KinesisAnalyticsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void KinesisAnalyticsBuiltInParameters::SetServiceSpecificParameters(const KinesisAnalyticsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace KinesisAnalytics
}  // namespace Aws
