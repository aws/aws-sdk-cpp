/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class AutoRefreshMode
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace AutoRefreshModeMapper
{
AWS_CLEANROOMS_API AutoRefreshMode GetAutoRefreshModeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAutoRefreshMode(AutoRefreshMode value);
} // namespace AutoRefreshModeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
