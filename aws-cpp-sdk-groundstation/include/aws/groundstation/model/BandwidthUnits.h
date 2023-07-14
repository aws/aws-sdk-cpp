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
  enum class BandwidthUnits
  {
    NOT_SET,
    GHz,
    MHz,
    kHz
  };

namespace BandwidthUnitsMapper
{
AWS_GROUNDSTATION_API BandwidthUnits GetBandwidthUnitsForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForBandwidthUnits(BandwidthUnits value);
} // namespace BandwidthUnitsMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
