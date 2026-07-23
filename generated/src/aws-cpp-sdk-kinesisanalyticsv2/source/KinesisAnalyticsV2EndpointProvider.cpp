/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2EndpointProvider.h>
#include <aws/kinesisanalyticsv2/internal/KinesisAnalyticsV2EndpointRules.h>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Endpoint {
KinesisAnalyticsV2EndpointProvider::KinesisAnalyticsV2EndpointProvider()
    : KinesisAnalyticsV2DefaultEpProviderBase(Aws::KinesisAnalyticsV2::KinesisAnalyticsV2EndpointRules::GetRulesBlob(),
                                              Aws::KinesisAnalyticsV2::KinesisAnalyticsV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
