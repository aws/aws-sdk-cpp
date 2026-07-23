/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail-data/CloudTrailDataEndpointProvider.h>
#include <aws/cloudtrail-data/internal/CloudTrailDataEndpointRules.h>

namespace Aws {
namespace CloudTrailData {
namespace Endpoint {
CloudTrailDataEndpointProvider::CloudTrailDataEndpointProvider()
    : CloudTrailDataDefaultEpProviderBase(Aws::CloudTrailData::CloudTrailDataEndpointRules::GetRulesBlob(),
                                          Aws::CloudTrailData::CloudTrailDataEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudTrailData
}  // namespace Aws
