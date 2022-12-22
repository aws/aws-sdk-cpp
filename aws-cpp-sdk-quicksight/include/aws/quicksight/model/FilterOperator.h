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
  enum class FilterOperator
  {
    NOT_SET,
    StringEquals,
    StringLike
  };

namespace FilterOperatorMapper
{
AWS_QUICKSIGHT_API FilterOperator GetFilterOperatorForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFilterOperator(FilterOperator value);
} // namespace FilterOperatorMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
