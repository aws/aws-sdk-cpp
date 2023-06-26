/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GroundStation
{
namespace Model
{
  enum class FrequencyUnits
  {
    NOT_SET,
    GHz,
    MHz,
    kHz
  };

namespace FrequencyUnitsMapper
{
AWS_GROUNDSTATION_API FrequencyUnits GetFrequencyUnitsForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForFrequencyUnits(FrequencyUnits value);
} // namespace FrequencyUnitsMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
