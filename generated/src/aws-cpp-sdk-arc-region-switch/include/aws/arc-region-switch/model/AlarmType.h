/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class AlarmType
  {
    NOT_SET,
    applicationHealth,
    trigger
  };

namespace AlarmTypeMapper
{
AWS_ARCREGIONSWITCH_API AlarmType GetAlarmTypeForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForAlarmType(AlarmType value);
} // namespace AlarmTypeMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
