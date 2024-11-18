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
  enum class ListHookResultsTargetType
  {
    NOT_SET,
    CHANGE_SET,
    STACK,
    RESOURCE,
    CLOUD_CONTROL
  };

namespace ListHookResultsTargetTypeMapper
{
AWS_CLOUDFORMATION_API ListHookResultsTargetType GetListHookResultsTargetTypeForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForListHookResultsTargetType(ListHookResultsTargetType value);
} // namespace ListHookResultsTargetTypeMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
