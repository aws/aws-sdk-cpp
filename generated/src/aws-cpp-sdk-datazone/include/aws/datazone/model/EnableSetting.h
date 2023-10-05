/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class EnableSetting
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace EnableSettingMapper
{
AWS_DATAZONE_API EnableSetting GetEnableSettingForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForEnableSetting(EnableSetting value);
} // namespace EnableSettingMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
