/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class GroupFilterAttribute
  {
    NOT_SET,
    GROUP_NAME
  };

namespace GroupFilterAttributeMapper
{
AWS_QUICKSIGHT_API GroupFilterAttribute GetGroupFilterAttributeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForGroupFilterAttribute(GroupFilterAttribute value);
} // namespace GroupFilterAttributeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
