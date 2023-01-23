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
  enum class ThingConnectivityIndexingMode
  {
    NOT_SET,
    OFF,
    STATUS
  };

namespace ThingConnectivityIndexingModeMapper
{
AWS_IOT_API ThingConnectivityIndexingMode GetThingConnectivityIndexingModeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForThingConnectivityIndexingMode(ThingConnectivityIndexingMode value);
} // namespace ThingConnectivityIndexingModeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
