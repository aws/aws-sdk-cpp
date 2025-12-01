/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace EKS {
namespace Model {
enum class ArgoCdRole { NOT_SET, ADMIN, EDITOR, VIEWER };

namespace ArgoCdRoleMapper {
AWS_EKS_API ArgoCdRole GetArgoCdRoleForName(const Aws::String& name);

AWS_EKS_API Aws::String GetNameForArgoCdRole(ArgoCdRole value);
}  // namespace ArgoCdRoleMapper
}  // namespace Model
}  // namespace EKS
}  // namespace Aws
