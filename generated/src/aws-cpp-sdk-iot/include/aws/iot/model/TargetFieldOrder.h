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
  enum class TargetFieldOrder
  {
    NOT_SET,
    LatLon,
    LonLat
  };

namespace TargetFieldOrderMapper
{
AWS_IOT_API TargetFieldOrder GetTargetFieldOrderForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForTargetFieldOrder(TargetFieldOrder value);
} // namespace TargetFieldOrderMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
