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
  enum class AlarmCondition
  {
    NOT_SET,
    red,
    green
  };

namespace AlarmConditionMapper
{
AWS_ARCREGIONSWITCH_API AlarmCondition GetAlarmConditionForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForAlarmCondition(AlarmCondition value);
} // namespace AlarmConditionMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
