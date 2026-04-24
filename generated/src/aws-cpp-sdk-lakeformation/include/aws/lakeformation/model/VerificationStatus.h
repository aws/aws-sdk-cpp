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
enum class VerificationStatus { NOT_SET, VERIFIED, VERIFICATION_FAILED, NOT_VERIFIED };

namespace VerificationStatusMapper {
AWS_LAKEFORMATION_API VerificationStatus GetVerificationStatusForName(const Aws::String& name);

AWS_LAKEFORMATION_API Aws::String GetNameForVerificationStatus(VerificationStatus value);
}  // namespace VerificationStatusMapper
}  // namespace Model
}  // namespace LakeFormation
}  // namespace Aws
