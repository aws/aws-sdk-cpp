/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/LakeFormation_EXPORTS.h>

namespace Aws {
namespace LakeFormation {
namespace Model {
enum class RLSPolicyStatus { NOT_SET, VALID, INVALID };

namespace RLSPolicyStatusMapper {
AWS_LAKEFORMATION_API RLSPolicyStatus GetRLSPolicyStatusForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForRLSPolicyStatus(RLSPolicyStatus value);
}  // namespace RLSPolicyStatusMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
