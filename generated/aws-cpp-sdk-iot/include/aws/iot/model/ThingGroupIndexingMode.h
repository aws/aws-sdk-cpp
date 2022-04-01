/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ThingGroupIndexingMode
  {
    NOT_SET,
    OFF,
    ON
  };

namespace ThingGroupIndexingModeMapper
{
AWS_IOT_API ThingGroupIndexingMode GetThingGroupIndexingModeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForThingGroupIndexingMode(ThingGroupIndexingMode value);
} // namespace ThingGroupIndexingModeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
