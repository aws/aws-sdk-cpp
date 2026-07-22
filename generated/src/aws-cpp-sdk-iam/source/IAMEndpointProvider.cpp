/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/IAMEndpointProvider.h>
#include <aws/iam/internal/IAMEndpointRules.h>

namespace Aws {
namespace IAM {
namespace Endpoint {
IAMEndpointProvider::IAMEndpointProvider()
    : IAMDefaultEpProviderBase(Aws::IAM::IAMEndpointRules::GetRulesBlob(), Aws::IAM::IAMEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace IAM
}  // namespace Aws
