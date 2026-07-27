/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/GreengrassV2EndpointProvider.h>
#include <aws/greengrassv2/internal/GreengrassV2EndpointRules.h>

namespace Aws {
namespace GreengrassV2 {
namespace Endpoint {
GreengrassV2EndpointProvider::GreengrassV2EndpointProvider()
    : GreengrassV2DefaultEpProviderBase(Aws::GreengrassV2::GreengrassV2EndpointRules::GetRulesBlob(),
                                        Aws::GreengrassV2::GreengrassV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace GreengrassV2
}  // namespace Aws
