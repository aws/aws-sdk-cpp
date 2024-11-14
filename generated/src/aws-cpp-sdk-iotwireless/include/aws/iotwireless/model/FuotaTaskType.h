/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class FuotaTaskType
  {
    NOT_SET,
    LoRaWAN
  };

namespace FuotaTaskTypeMapper
{
AWS_IOTWIRELESS_API FuotaTaskType GetFuotaTaskTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForFuotaTaskType(FuotaTaskType value);
} // namespace FuotaTaskTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
