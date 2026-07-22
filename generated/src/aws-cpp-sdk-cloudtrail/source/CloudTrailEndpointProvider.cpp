/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/CloudTrailEndpointProvider.h>
#include <aws/cloudtrail/internal/CloudTrailEndpointRules.h>

namespace Aws {
namespace CloudTrail {
namespace Endpoint {
CloudTrailEndpointProvider::CloudTrailEndpointProvider()
    : CloudTrailDefaultEpProviderBase(Aws::CloudTrail::CloudTrailEndpointRules::GetRulesBlob(),
                                      Aws::CloudTrail::CloudTrailEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudTrail
}  // namespace Aws
