/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/LakeFormationEndpointProvider.h>
#include <aws/lakeformation/internal/LakeFormationEndpointRules.h>

namespace Aws {
namespace LakeFormation {
namespace Endpoint {
LakeFormationEndpointProvider::LakeFormationEndpointProvider()
    : LakeFormationDefaultEpProviderBase(Aws::LakeFormation::LakeFormationEndpointRules::GetRulesBlob(),
                                         Aws::LakeFormation::LakeFormationEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace LakeFormation
}  // namespace Aws
