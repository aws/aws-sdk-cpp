/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-roborunner/IoTRoboRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{
  enum class DestinationState
  {
    NOT_SET,
    ENABLED,
    DISABLED,
    DECOMMISSIONED
  };

namespace DestinationStateMapper
{
AWS_IOTROBORUNNER_API DestinationState GetDestinationStateForName(const Aws::String& name);

AWS_IOTROBORUNNER_API Aws::String GetNameForDestinationState(DestinationState value);
} // namespace DestinationStateMapper
} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
