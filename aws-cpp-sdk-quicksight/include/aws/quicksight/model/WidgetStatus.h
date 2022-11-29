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
  enum class WidgetStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace WidgetStatusMapper
{
AWS_QUICKSIGHT_API WidgetStatus GetWidgetStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForWidgetStatus(WidgetStatus value);
} // namespace WidgetStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
