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
  enum class HookInvocationPoint
  {
    NOT_SET,
    PRE_PROVISION
  };

namespace HookInvocationPointMapper
{
AWS_CLOUDFORMATION_API HookInvocationPoint GetHookInvocationPointForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForHookInvocationPoint(HookInvocationPoint value);
} // namespace HookInvocationPointMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
