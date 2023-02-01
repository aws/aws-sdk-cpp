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
  enum class SpoolingMode
  {
    NOT_SET,
    OFF,
    TO_DISK
  };

namespace SpoolingModeMapper
{
AWS_IOTFLEETWISE_API SpoolingMode GetSpoolingModeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForSpoolingMode(SpoolingMode value);
} // namespace SpoolingModeMapper
} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
