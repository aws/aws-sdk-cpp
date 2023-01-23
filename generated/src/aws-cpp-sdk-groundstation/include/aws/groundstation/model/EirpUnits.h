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
  enum class EirpUnits
  {
    NOT_SET,
    dBW
  };

namespace EirpUnitsMapper
{
AWS_GROUNDSTATION_API EirpUnits GetEirpUnitsForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForEirpUnits(EirpUnits value);
} // namespace EirpUnitsMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
