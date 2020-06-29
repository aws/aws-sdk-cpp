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
  enum class InputDeviceConnectionState
  {
    NOT_SET,
    DISCONNECTED,
    CONNECTED
  };

namespace InputDeviceConnectionStateMapper
{
AWS_MEDIALIVE_API InputDeviceConnectionState GetInputDeviceConnectionStateForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceConnectionState(InputDeviceConnectionState value);
} // namespace InputDeviceConnectionStateMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
