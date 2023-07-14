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
  enum class HookTargetType
  {
    NOT_SET,
    RESOURCE
  };

namespace HookTargetTypeMapper
{
AWS_CLOUDFORMATION_API HookTargetType GetHookTargetTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForHookTargetType(HookTargetType value);
} // namespace HookTargetTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
