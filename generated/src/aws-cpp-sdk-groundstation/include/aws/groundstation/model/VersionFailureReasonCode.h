/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

namespace Aws {
namespace GroundStation {
namespace Model {
enum class VersionFailureReasonCode {
  NOT_SET,
  INTERNAL_ERROR,
  INVALID_SATELLITE_ARN,
  INVALID_UPDATE_CONTACT_REQUEST,
  EPHEMERIS_NOT_FOUND,
  EPHEMERIS_TIME_RANGE_INVALID,
  EPHEMERIS_NOT_ENABLED,
  SATELLITE_DOES_NOT_MATCH_EPHEMERIS,
  NOT_ONBOARDED_TO_AZEL_EPHEMERIS,
  AZEL_EPHEMERIS_NOT_FOUND,
  AZEL_EPHEMERIS_WRONG_GROUND_STATION,
  AZEL_EPHEMERIS_INVALID_STATUS,
  AZEL_EPHEMERIS_TIME_RANGE_INVALID
};

namespace VersionFailureReasonCodeMapper {
AWS_GROUNDSTATION_API VersionFailureReasonCode GetVersionFailureReasonCodeForName(const Aws::String& name);

AWS_GROUNDSTATION_API Aws::String GetNameForVersionFailureReasonCode(VersionFailureReasonCode value);
}  // namespace VersionFailureReasonCodeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
