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
  enum class SupportedRfRegion
  {
    NOT_SET,
    EU868,
    US915,
    AU915,
    AS923_1,
    AS923_2,
    AS923_3,
    AS923_4,
    EU433,
    CN470,
    CN779,
    RU864,
    KR920,
    IN865
  };

namespace SupportedRfRegionMapper
{
AWS_IOTWIRELESS_API SupportedRfRegion GetSupportedRfRegionForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForSupportedRfRegion(SupportedRfRegion value);
} // namespace SupportedRfRegionMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
