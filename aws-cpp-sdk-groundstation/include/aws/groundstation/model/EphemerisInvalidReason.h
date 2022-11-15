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
  enum class EphemerisInvalidReason
  {
    NOT_SET,
    METADATA_INVALID,
    TIME_RANGE_INVALID,
    TRAJECTORY_INVALID,
    KMS_KEY_INVALID,
    VALIDATION_ERROR
  };

namespace EphemerisInvalidReasonMapper
{
AWS_GROUNDSTATION_API EphemerisInvalidReason GetEphemerisInvalidReasonForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForEphemerisInvalidReason(EphemerisInvalidReason value);
} // namespace EphemerisInvalidReasonMapper
} // namespace Model
} // namespace GroundStation
} // namespace Aws
