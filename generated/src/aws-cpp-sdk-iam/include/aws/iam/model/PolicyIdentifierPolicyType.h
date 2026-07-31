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
enum class PolicyIdentifierPolicyType { NOT_SET, inline_, aws_managed, user_managed, permission_boundary, scp, rcp };

namespace PolicyIdentifierPolicyTypeMapper {
AWS_IAM_API PolicyIdentifierPolicyType GetPolicyIdentifierPolicyTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForPolicyIdentifierPolicyType(PolicyIdentifierPolicyType value);
}  // namespace PolicyIdentifierPolicyTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
