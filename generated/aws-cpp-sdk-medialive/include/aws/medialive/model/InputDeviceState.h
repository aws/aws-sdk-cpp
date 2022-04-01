/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class InputDeviceState
  {
    NOT_SET,
    IDLE,
    STREAMING
  };

namespace InputDeviceStateMapper
{
AWS_MEDIALIVE_API InputDeviceState GetInputDeviceStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceState(InputDeviceState value);
} // namespace InputDeviceStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
