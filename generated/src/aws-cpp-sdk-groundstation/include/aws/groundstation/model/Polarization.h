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
  enum class Polarization
  {
    NOT_SET,
    LEFT_HAND,
    NONE,
    RIGHT_HAND
  };

namespace PolarizationMapper
{
AWS_GROUNDSTATION_API Polarization GetPolarizationForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForPolarization(Polarization value);
} // namespace PolarizationMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
