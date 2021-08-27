/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{
  enum class TimeRangeType
  {
    NOT_SET,
    TraceId,
    Event
  };

namespace TimeRangeTypeMapper
{
AWS_XRAY_API TimeRangeType GetTimeRangeTypeForName(const Aws::String& name);

AWS_XRAY_API Aws::String GetNameForTimeRangeType(TimeRangeType value);
} // namespace TimeRangeTypeMapper
} // namespace Model
} // namespace XRay
} // namespace Aws
