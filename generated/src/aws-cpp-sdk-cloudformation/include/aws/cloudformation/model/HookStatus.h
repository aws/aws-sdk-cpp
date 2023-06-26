/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class HookStatus
  {
    NOT_SET,
    HOOK_IN_PROGRESS,
    HOOK_COMPLETE_SUCCEEDED,
    HOOK_COMPLETE_FAILED,
    HOOK_FAILED
  };

namespace HookStatusMapper
{
AWS_CLOUDFORMATION_API HookStatus GetHookStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForHookStatus(HookStatus value);
} // namespace HookStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
