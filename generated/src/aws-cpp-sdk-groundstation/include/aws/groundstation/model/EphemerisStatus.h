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
  enum class EphemerisStatus
  {
    NOT_SET,
    VALIDATING,
    INVALID,
    ERROR_,
    ENABLED,
    DISABLED,
    EXPIRED
  };

namespace EphemerisStatusMapper
{
AWS_GROUNDSTATION_API EphemerisStatus GetEphemerisStatusForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForEphemerisStatus(EphemerisStatus value);
} // namespace EphemerisStatusMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
