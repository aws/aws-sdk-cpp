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
  enum class FuotaTaskEvent
  {
    NOT_SET,
    Fuota
  };

namespace FuotaTaskEventMapper
{
AWS_IOTWIRELESS_API FuotaTaskEvent GetFuotaTaskEventForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForFuotaTaskEvent(FuotaTaskEvent value);
} // namespace FuotaTaskEventMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
