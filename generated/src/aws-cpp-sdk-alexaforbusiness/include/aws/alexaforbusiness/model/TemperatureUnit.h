/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class TemperatureUnit
  {
    NOT_SET,
    FAHRENHEIT,
    CELSIUS
  };

namespace TemperatureUnitMapper
{
AWS_ALEXAFORBUSINESS_API TemperatureUnit GetTemperatureUnitForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForTemperatureUnit(TemperatureUnit value);
} // namespace TemperatureUnitMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
