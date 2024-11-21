/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{
  enum class TimeUnit
  {
    NOT_SET,
    MILLISECOND,
    SECOND,
    MINUTE,
    HOUR
  };

namespace TimeUnitMapper
{
AWS_IOTFLEETWISE_API TimeUnit GetTimeUnitForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForTimeUnit(TimeUnit value);
} // namespace TimeUnitMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
