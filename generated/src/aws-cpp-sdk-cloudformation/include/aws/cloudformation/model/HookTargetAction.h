/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudFormation {
namespace Model {
enum class HookTargetAction { NOT_SET, CREATE, UPDATE, DELETE_, IMPORT };

namespace HookTargetActionMapper {
AWS_CLOUDFORMATION_API HookTargetAction GetHookTargetActionForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForHookTargetAction(HookTargetAction value);
}  // namespace HookTargetActionMapper
}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
