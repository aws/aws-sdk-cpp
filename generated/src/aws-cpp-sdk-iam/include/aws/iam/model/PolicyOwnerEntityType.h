/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class PolicyOwnerEntityType { NOT_SET, USER, ROLE, GROUP };

namespace PolicyOwnerEntityTypeMapper {
AWS_IAM_API PolicyOwnerEntityType GetPolicyOwnerEntityTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForPolicyOwnerEntityType(PolicyOwnerEntityType value);
}  // namespace PolicyOwnerEntityTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
