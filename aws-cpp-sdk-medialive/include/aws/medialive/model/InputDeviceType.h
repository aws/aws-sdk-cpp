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
  enum class InputDeviceType
  {
    NOT_SET,
    HD,
    UHD
  };

namespace InputDeviceTypeMapper
{
AWS_MEDIALIVE_API InputDeviceType GetInputDeviceTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForInputDeviceType(InputDeviceType value);
} // namespace InputDeviceTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
