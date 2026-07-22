/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/KinesisAnalyticsEndpointProvider.h>
#include <aws/kinesisanalytics/internal/KinesisAnalyticsEndpointRules.h>

namespace Aws {
namespace KinesisAnalytics {
namespace Endpoint {
KinesisAnalyticsEndpointProvider::KinesisAnalyticsEndpointProvider()
    : KinesisAnalyticsDefaultEpProviderBase(Aws::KinesisAnalytics::KinesisAnalyticsEndpointRules::GetRulesBlob(),
                                            Aws::KinesisAnalytics::KinesisAnalyticsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KinesisAnalytics
}  // namespace Aws
