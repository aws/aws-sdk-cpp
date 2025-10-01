/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
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
AWS_CLEANROOMSML_API AutoRefreshMode GetAutoRefreshModeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForAutoRefreshMode(AutoRefreshMode value);
} // namespace AutoRefreshModeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
