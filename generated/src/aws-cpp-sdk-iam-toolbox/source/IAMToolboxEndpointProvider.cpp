/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam-toolbox/IAMToolboxEndpointProvider.h>
#include <aws/iam-toolbox/internal/IAMToolboxEndpointRules.h>

namespace Aws {
namespace IAMToolbox {
namespace Endpoint {
IAMToolboxEndpointProvider::IAMToolboxEndpointProvider()
    : IAMToolboxDefaultEpProviderBase(Aws::IAMToolbox::IAMToolboxEndpointRules::GetRulesBlob(),
                                      Aws::IAMToolbox::IAMToolboxEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IAMToolbox
}  // namespace Aws
