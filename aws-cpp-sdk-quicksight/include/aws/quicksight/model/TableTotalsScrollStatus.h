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
  enum class TableTotalsScrollStatus
  {
    NOT_SET,
    PINNED,
    SCROLLED
  };

namespace TableTotalsScrollStatusMapper
{
AWS_QUICKSIGHT_API TableTotalsScrollStatus GetTableTotalsScrollStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForTableTotalsScrollStatus(TableTotalsScrollStatus value);
} // namespace TableTotalsScrollStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
