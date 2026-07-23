/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/DetectiveEndpointProvider.h>
#include <aws/detective/internal/DetectiveEndpointRules.h>

namespace Aws {
namespace Detective {
namespace Endpoint {
DetectiveEndpointProvider::DetectiveEndpointProvider()
    : DetectiveDefaultEpProviderBase(Aws::Detective::DetectiveEndpointRules::GetRulesBlob(),
                                     Aws::Detective::DetectiveEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Detective
}  // namespace Aws
