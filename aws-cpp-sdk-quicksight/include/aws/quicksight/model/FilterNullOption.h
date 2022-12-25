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
  enum class FilterNullOption
  {
    NOT_SET,
    ALL_VALUES,
    NULLS_ONLY,
    NON_NULLS_ONLY
  };

namespace FilterNullOptionMapper
{
AWS_QUICKSIGHT_API FilterNullOption GetFilterNullOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFilterNullOption(FilterNullOption value);
} // namespace FilterNullOptionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
