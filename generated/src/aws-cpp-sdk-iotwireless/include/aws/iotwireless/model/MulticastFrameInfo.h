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
  enum class MulticastFrameInfo
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace MulticastFrameInfoMapper
{
AWS_IOTWIRELESS_API MulticastFrameInfo GetMulticastFrameInfoForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForMulticastFrameInfo(MulticastFrameInfo value);
} // namespace MulticastFrameInfoMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
