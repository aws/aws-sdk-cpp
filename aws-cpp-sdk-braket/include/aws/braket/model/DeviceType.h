/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Braket
{
namespace Model
{
  enum class DeviceType
  {
    NOT_SET,
    QPU,
    SIMULATOR
  };

namespace DeviceTypeMapper
{
AWS_BRAKET_API DeviceType GetDeviceTypeForName(const Aws::String& name);

AWS_BRAKET_API Aws::String GetNameForDeviceType(DeviceType value);
} // namespace DeviceTypeMapper
} // namespace Model
} // namespace Braket
} // namespace Aws
