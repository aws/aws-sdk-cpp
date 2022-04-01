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
  enum class FuotaDeviceStatus
  {
    NOT_SET,
    Initial,
    Package_Not_Supported,
    FragAlgo_unsupported,
    Not_enough_memory,
    FragIndex_unsupported,
    Wrong_descriptor,
    SessionCnt_replay,
    MissingFrag,
    MemoryError,
    MICError,
    Successful
  };

namespace FuotaDeviceStatusMapper
{
AWS_IOTWIRELESS_API FuotaDeviceStatus GetFuotaDeviceStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForFuotaDeviceStatus(FuotaDeviceStatus value);
} // namespace FuotaDeviceStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
