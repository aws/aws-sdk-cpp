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
  enum class HookFailureMode
  {
    NOT_SET,
    FAIL,
    WARN
  };

namespace HookFailureModeMapper
{
AWS_CLOUDFORMATION_API HookFailureMode GetHookFailureModeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForHookFailureMode(HookFailureMode value);
} // namespace HookFailureModeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
