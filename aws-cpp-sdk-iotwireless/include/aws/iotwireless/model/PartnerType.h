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
  enum class PartnerType
  {
    NOT_SET,
    Sidewalk
  };

namespace PartnerTypeMapper
{
AWS_IOTWIRELESS_API PartnerType GetPartnerTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForPartnerType(PartnerType value);
} // namespace PartnerTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
