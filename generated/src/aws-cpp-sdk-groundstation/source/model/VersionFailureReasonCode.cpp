/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/VersionFailureReasonCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace VersionFailureReasonCodeMapper {

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int INVALID_SATELLITE_ARN_HASH = HashingUtils::HashString("INVALID_SATELLITE_ARN");
static const int INVALID_UPDATE_CONTACT_REQUEST_HASH = HashingUtils::HashString("INVALID_UPDATE_CONTACT_REQUEST");
static const int EPHEMERIS_NOT_FOUND_HASH = HashingUtils::HashString("EPHEMERIS_NOT_FOUND");
static const int EPHEMERIS_TIME_RANGE_INVALID_HASH = HashingUtils::HashString("EPHEMERIS_TIME_RANGE_INVALID");
static const int EPHEMERIS_NOT_ENABLED_HASH = HashingUtils::HashString("EPHEMERIS_NOT_ENABLED");
static const int SATELLITE_DOES_NOT_MATCH_EPHEMERIS_HASH = HashingUtils::HashString("SATELLITE_DOES_NOT_MATCH_EPHEMERIS");
static const int NOT_ONBOARDED_TO_AZEL_EPHEMERIS_HASH = HashingUtils::HashString("NOT_ONBOARDED_TO_AZEL_EPHEMERIS");
static const int AZEL_EPHEMERIS_NOT_FOUND_HASH = HashingUtils::HashString("AZEL_EPHEMERIS_NOT_FOUND");
static const int AZEL_EPHEMERIS_WRONG_GROUND_STATION_HASH = HashingUtils::HashString("AZEL_EPHEMERIS_WRONG_GROUND_STATION");
static const int AZEL_EPHEMERIS_INVALID_STATUS_HASH = HashingUtils::HashString("AZEL_EPHEMERIS_INVALID_STATUS");
static const int AZEL_EPHEMERIS_TIME_RANGE_INVALID_HASH = HashingUtils::HashString("AZEL_EPHEMERIS_TIME_RANGE_INVALID");

VersionFailureReasonCode GetVersionFailureReasonCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERNAL_ERROR_HASH) {
    return VersionFailureReasonCode::INTERNAL_ERROR;
  } else if (hashCode == INVALID_SATELLITE_ARN_HASH) {
    return VersionFailureReasonCode::INVALID_SATELLITE_ARN;
  } else if (hashCode == INVALID_UPDATE_CONTACT_REQUEST_HASH) {
    return VersionFailureReasonCode::INVALID_UPDATE_CONTACT_REQUEST;
  } else if (hashCode == EPHEMERIS_NOT_FOUND_HASH) {
    return VersionFailureReasonCode::EPHEMERIS_NOT_FOUND;
  } else if (hashCode == EPHEMERIS_TIME_RANGE_INVALID_HASH) {
    return VersionFailureReasonCode::EPHEMERIS_TIME_RANGE_INVALID;
  } else if (hashCode == EPHEMERIS_NOT_ENABLED_HASH) {
    return VersionFailureReasonCode::EPHEMERIS_NOT_ENABLED;
  } else if (hashCode == SATELLITE_DOES_NOT_MATCH_EPHEMERIS_HASH) {
    return VersionFailureReasonCode::SATELLITE_DOES_NOT_MATCH_EPHEMERIS;
  } else if (hashCode == NOT_ONBOARDED_TO_AZEL_EPHEMERIS_HASH) {
    return VersionFailureReasonCode::NOT_ONBOARDED_TO_AZEL_EPHEMERIS;
  } else if (hashCode == AZEL_EPHEMERIS_NOT_FOUND_HASH) {
    return VersionFailureReasonCode::AZEL_EPHEMERIS_NOT_FOUND;
  } else if (hashCode == AZEL_EPHEMERIS_WRONG_GROUND_STATION_HASH) {
    return VersionFailureReasonCode::AZEL_EPHEMERIS_WRONG_GROUND_STATION;
  } else if (hashCode == AZEL_EPHEMERIS_INVALID_STATUS_HASH) {
    return VersionFailureReasonCode::AZEL_EPHEMERIS_INVALID_STATUS;
  } else if (hashCode == AZEL_EPHEMERIS_TIME_RANGE_INVALID_HASH) {
    return VersionFailureReasonCode::AZEL_EPHEMERIS_TIME_RANGE_INVALID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<VersionFailureReasonCode>(hashCode);
  }

  return VersionFailureReasonCode::NOT_SET;
}

Aws::String GetNameForVersionFailureReasonCode(VersionFailureReasonCode enumValue) {
  switch (enumValue) {
    case VersionFailureReasonCode::NOT_SET:
      return {};
    case VersionFailureReasonCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case VersionFailureReasonCode::INVALID_SATELLITE_ARN:
      return "INVALID_SATELLITE_ARN";
    case VersionFailureReasonCode::INVALID_UPDATE_CONTACT_REQUEST:
      return "INVALID_UPDATE_CONTACT_REQUEST";
    case VersionFailureReasonCode::EPHEMERIS_NOT_FOUND:
      return "EPHEMERIS_NOT_FOUND";
    case VersionFailureReasonCode::EPHEMERIS_TIME_RANGE_INVALID:
      return "EPHEMERIS_TIME_RANGE_INVALID";
    case VersionFailureReasonCode::EPHEMERIS_NOT_ENABLED:
      return "EPHEMERIS_NOT_ENABLED";
    case VersionFailureReasonCode::SATELLITE_DOES_NOT_MATCH_EPHEMERIS:
      return "SATELLITE_DOES_NOT_MATCH_EPHEMERIS";
    case VersionFailureReasonCode::NOT_ONBOARDED_TO_AZEL_EPHEMERIS:
      return "NOT_ONBOARDED_TO_AZEL_EPHEMERIS";
    case VersionFailureReasonCode::AZEL_EPHEMERIS_NOT_FOUND:
      return "AZEL_EPHEMERIS_NOT_FOUND";
    case VersionFailureReasonCode::AZEL_EPHEMERIS_WRONG_GROUND_STATION:
      return "AZEL_EPHEMERIS_WRONG_GROUND_STATION";
    case VersionFailureReasonCode::AZEL_EPHEMERIS_INVALID_STATUS:
      return "AZEL_EPHEMERIS_INVALID_STATUS";
    case VersionFailureReasonCode::AZEL_EPHEMERIS_TIME_RANGE_INVALID:
      return "AZEL_EPHEMERIS_TIME_RANGE_INVALID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace VersionFailureReasonCodeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
