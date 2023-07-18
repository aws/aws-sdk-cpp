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
  enum class FuotaTaskStatus
  {
    NOT_SET,
    Pending,
    FuotaSession_Waiting,
    In_FuotaSession,
    FuotaDone,
    Delete_Waiting
  };

namespace FuotaTaskStatusMapper
{
AWS_IOTWIRELESS_API FuotaTaskStatus GetFuotaTaskStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForFuotaTaskStatus(FuotaTaskStatus value);
} // namespace FuotaTaskStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
