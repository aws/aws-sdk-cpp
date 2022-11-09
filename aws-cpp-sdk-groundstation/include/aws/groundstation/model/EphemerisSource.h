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
  enum class EphemerisSource
  {
    NOT_SET,
    CUSTOMER_PROVIDED,
    SPACE_TRACK
  };

namespace EphemerisSourceMapper
{
AWS_GROUNDSTATION_API EphemerisSource GetEphemerisSourceForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForEphemerisSource(EphemerisSource value);
} // namespace EphemerisSourceMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
