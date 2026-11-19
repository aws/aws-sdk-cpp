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
enum class RLSPolicyStatusReason { NOT_SET, REFERENCED_UDF_DELETED, REFERENCED_LOOKUP_TABLE_DELETED };

namespace RLSPolicyStatusReasonMapper {
AWS_LAKEFORMATION_API RLSPolicyStatusReason GetRLSPolicyStatusReasonForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForRLSPolicyStatusReason(RLSPolicyStatusReason value);
}  // namespace RLSPolicyStatusReasonMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
