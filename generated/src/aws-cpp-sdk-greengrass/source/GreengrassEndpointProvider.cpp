/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/GreengrassEndpointProvider.h>
#include <aws/greengrass/internal/GreengrassEndpointRules.h>

namespace Aws {
namespace Greengrass {
namespace Endpoint {
GreengrassEndpointProvider::GreengrassEndpointProvider()
    : GreengrassDefaultEpProviderBase(Aws::Greengrass::GreengrassEndpointRules::GetRulesBlob(),
                                      Aws::Greengrass::GreengrassEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace Greengrass
}  // namespace Aws
