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
  enum class ApplicationConfigType
  {
    NOT_SET,
    SemtechGeolocation
  };

namespace ApplicationConfigTypeMapper
{
AWS_IOTWIRELESS_API ApplicationConfigType GetApplicationConfigTypeForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForApplicationConfigType(ApplicationConfigType value);
} // namespace ApplicationConfigTypeMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
