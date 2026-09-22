/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/CloudWatchOmniEndpointProvider.h>
#include <aws/cloudwatchomni/internal/CloudWatchOmniEndpointRules.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Endpoint {
CloudWatchOmniEndpointProvider::CloudWatchOmniEndpointProvider()
    : CloudWatchOmniDefaultEpProviderBase(Aws::CloudWatchOmni::CloudWatchOmniEndpointRules::GetRulesBlob(),
                                          Aws::CloudWatchOmni::CloudWatchOmniEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudWatchOmni
}  // namespace Aws
