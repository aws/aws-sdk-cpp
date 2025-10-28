/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/groundstation/model/EphemerisErrorCode.h>

using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {
namespace EphemerisErrorCodeMapper {

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int MISMATCHED_SATCAT_ID_HASH = HashingUtils::HashString("MISMATCHED_SATCAT_ID");
static const int OEM_VERSION_UNSUPPORTED_HASH = HashingUtils::HashString("OEM_VERSION_UNSUPPORTED");
static const int ORIGINATOR_MISSING_HASH = HashingUtils::HashString("ORIGINATOR_MISSING");
static const int CREATION_DATE_MISSING_HASH = HashingUtils::HashString("CREATION_DATE_MISSING");
static const int OBJECT_NAME_MISSING_HASH = HashingUtils::HashString("OBJECT_NAME_MISSING");
static const int OBJECT_ID_MISSING_HASH = HashingUtils::HashString("OBJECT_ID_MISSING");
static const int REF_FRAME_UNSUPPORTED_HASH = HashingUtils::HashString("REF_FRAME_UNSUPPORTED");
static const int REF_FRAME_EPOCH_UNSUPPORTED_HASH = HashingUtils::HashString("REF_FRAME_EPOCH_UNSUPPORTED");
static const int TIME_SYSTEM_UNSUPPORTED_HASH = HashingUtils::HashString("TIME_SYSTEM_UNSUPPORTED");
static const int CENTER_BODY_UNSUPPORTED_HASH = HashingUtils::HashString("CENTER_BODY_UNSUPPORTED");
static const int INTERPOLATION_MISSING_HASH = HashingUtils::HashString("INTERPOLATION_MISSING");
static const int INTERPOLATION_DEGREE_INVALID_HASH = HashingUtils::HashString("INTERPOLATION_DEGREE_INVALID");
static const int AZ_EL_SEGMENT_LIST_MISSING_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_LIST_MISSING");
static const int INSUFFICIENT_TIME_AZ_EL_HASH = HashingUtils::HashString("INSUFFICIENT_TIME_AZ_EL");
static const int START_TIME_IN_FUTURE_HASH = HashingUtils::HashString("START_TIME_IN_FUTURE");
static const int END_TIME_IN_PAST_HASH = HashingUtils::HashString("END_TIME_IN_PAST");
static const int EXPIRATION_TIME_TOO_EARLY_HASH = HashingUtils::HashString("EXPIRATION_TIME_TOO_EARLY");
static const int START_TIME_METADATA_TOO_EARLY_HASH = HashingUtils::HashString("START_TIME_METADATA_TOO_EARLY");
static const int STOP_TIME_METADATA_TOO_LATE_HASH = HashingUtils::HashString("STOP_TIME_METADATA_TOO_LATE");
static const int AZ_EL_SEGMENT_END_TIME_BEFORE_START_TIME_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_END_TIME_BEFORE_START_TIME");
static const int AZ_EL_SEGMENT_TIMES_OVERLAP_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_TIMES_OVERLAP");
static const int AZ_EL_SEGMENTS_OUT_OF_ORDER_HASH = HashingUtils::HashString("AZ_EL_SEGMENTS_OUT_OF_ORDER");
static const int TIME_AZ_EL_ITEMS_OUT_OF_ORDER_HASH = HashingUtils::HashString("TIME_AZ_EL_ITEMS_OUT_OF_ORDER");
static const int MEAN_MOTION_INVALID_HASH = HashingUtils::HashString("MEAN_MOTION_INVALID");
static const int TIME_AZ_EL_AZ_RADIAN_RANGE_INVALID_HASH = HashingUtils::HashString("TIME_AZ_EL_AZ_RADIAN_RANGE_INVALID");
static const int TIME_AZ_EL_EL_RADIAN_RANGE_INVALID_HASH = HashingUtils::HashString("TIME_AZ_EL_EL_RADIAN_RANGE_INVALID");
static const int TIME_AZ_EL_AZ_DEGREE_RANGE_INVALID_HASH = HashingUtils::HashString("TIME_AZ_EL_AZ_DEGREE_RANGE_INVALID");
static const int TIME_AZ_EL_EL_DEGREE_RANGE_INVALID_HASH = HashingUtils::HashString("TIME_AZ_EL_EL_DEGREE_RANGE_INVALID");
static const int TIME_AZ_EL_ANGLE_UNITS_INVALID_HASH = HashingUtils::HashString("TIME_AZ_EL_ANGLE_UNITS_INVALID");
static const int INSUFFICIENT_KMS_PERMISSIONS_HASH = HashingUtils::HashString("INSUFFICIENT_KMS_PERMISSIONS");
static const int FILE_FORMAT_INVALID_HASH = HashingUtils::HashString("FILE_FORMAT_INVALID");
static const int AZ_EL_SEGMENT_REFERENCE_EPOCH_INVALID_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_REFERENCE_EPOCH_INVALID");
static const int AZ_EL_SEGMENT_START_TIME_INVALID_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_START_TIME_INVALID");
static const int AZ_EL_SEGMENT_END_TIME_INVALID_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_END_TIME_INVALID");
static const int AZ_EL_SEGMENT_VALID_TIME_RANGE_INVALID_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_VALID_TIME_RANGE_INVALID");
static const int AZ_EL_SEGMENT_END_TIME_TOO_LATE_HASH = HashingUtils::HashString("AZ_EL_SEGMENT_END_TIME_TOO_LATE");
static const int AZ_EL_TOTAL_DURATION_EXCEEDED_HASH = HashingUtils::HashString("AZ_EL_TOTAL_DURATION_EXCEEDED");

EphemerisErrorCode GetEphemerisErrorCodeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INTERNAL_ERROR_HASH) {
    return EphemerisErrorCode::INTERNAL_ERROR;
  } else if (hashCode == MISMATCHED_SATCAT_ID_HASH) {
    return EphemerisErrorCode::MISMATCHED_SATCAT_ID;
  } else if (hashCode == OEM_VERSION_UNSUPPORTED_HASH) {
    return EphemerisErrorCode::OEM_VERSION_UNSUPPORTED;
  } else if (hashCode == ORIGINATOR_MISSING_HASH) {
    return EphemerisErrorCode::ORIGINATOR_MISSING;
  } else if (hashCode == CREATION_DATE_MISSING_HASH) {
    return EphemerisErrorCode::CREATION_DATE_MISSING;
  } else if (hashCode == OBJECT_NAME_MISSING_HASH) {
    return EphemerisErrorCode::OBJECT_NAME_MISSING;
  } else if (hashCode == OBJECT_ID_MISSING_HASH) {
    return EphemerisErrorCode::OBJECT_ID_MISSING;
  } else if (hashCode == REF_FRAME_UNSUPPORTED_HASH) {
    return EphemerisErrorCode::REF_FRAME_UNSUPPORTED;
  } else if (hashCode == REF_FRAME_EPOCH_UNSUPPORTED_HASH) {
    return EphemerisErrorCode::REF_FRAME_EPOCH_UNSUPPORTED;
  } else if (hashCode == TIME_SYSTEM_UNSUPPORTED_HASH) {
    return EphemerisErrorCode::TIME_SYSTEM_UNSUPPORTED;
  } else if (hashCode == CENTER_BODY_UNSUPPORTED_HASH) {
    return EphemerisErrorCode::CENTER_BODY_UNSUPPORTED;
  } else if (hashCode == INTERPOLATION_MISSING_HASH) {
    return EphemerisErrorCode::INTERPOLATION_MISSING;
  } else if (hashCode == INTERPOLATION_DEGREE_INVALID_HASH) {
    return EphemerisErrorCode::INTERPOLATION_DEGREE_INVALID;
  } else if (hashCode == AZ_EL_SEGMENT_LIST_MISSING_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_LIST_MISSING;
  } else if (hashCode == INSUFFICIENT_TIME_AZ_EL_HASH) {
    return EphemerisErrorCode::INSUFFICIENT_TIME_AZ_EL;
  } else if (hashCode == START_TIME_IN_FUTURE_HASH) {
    return EphemerisErrorCode::START_TIME_IN_FUTURE;
  } else if (hashCode == END_TIME_IN_PAST_HASH) {
    return EphemerisErrorCode::END_TIME_IN_PAST;
  } else if (hashCode == EXPIRATION_TIME_TOO_EARLY_HASH) {
    return EphemerisErrorCode::EXPIRATION_TIME_TOO_EARLY;
  } else if (hashCode == START_TIME_METADATA_TOO_EARLY_HASH) {
    return EphemerisErrorCode::START_TIME_METADATA_TOO_EARLY;
  } else if (hashCode == STOP_TIME_METADATA_TOO_LATE_HASH) {
    return EphemerisErrorCode::STOP_TIME_METADATA_TOO_LATE;
  } else if (hashCode == AZ_EL_SEGMENT_END_TIME_BEFORE_START_TIME_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_END_TIME_BEFORE_START_TIME;
  } else if (hashCode == AZ_EL_SEGMENT_TIMES_OVERLAP_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_TIMES_OVERLAP;
  } else if (hashCode == AZ_EL_SEGMENTS_OUT_OF_ORDER_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENTS_OUT_OF_ORDER;
  } else if (hashCode == TIME_AZ_EL_ITEMS_OUT_OF_ORDER_HASH) {
    return EphemerisErrorCode::TIME_AZ_EL_ITEMS_OUT_OF_ORDER;
  } else if (hashCode == MEAN_MOTION_INVALID_HASH) {
    return EphemerisErrorCode::MEAN_MOTION_INVALID;
  } else if (hashCode == TIME_AZ_EL_AZ_RADIAN_RANGE_INVALID_HASH) {
    return EphemerisErrorCode::TIME_AZ_EL_AZ_RADIAN_RANGE_INVALID;
  } else if (hashCode == TIME_AZ_EL_EL_RADIAN_RANGE_INVALID_HASH) {
    return EphemerisErrorCode::TIME_AZ_EL_EL_RADIAN_RANGE_INVALID;
  } else if (hashCode == TIME_AZ_EL_AZ_DEGREE_RANGE_INVALID_HASH) {
    return EphemerisErrorCode::TIME_AZ_EL_AZ_DEGREE_RANGE_INVALID;
  } else if (hashCode == TIME_AZ_EL_EL_DEGREE_RANGE_INVALID_HASH) {
    return EphemerisErrorCode::TIME_AZ_EL_EL_DEGREE_RANGE_INVALID;
  } else if (hashCode == TIME_AZ_EL_ANGLE_UNITS_INVALID_HASH) {
    return EphemerisErrorCode::TIME_AZ_EL_ANGLE_UNITS_INVALID;
  } else if (hashCode == INSUFFICIENT_KMS_PERMISSIONS_HASH) {
    return EphemerisErrorCode::INSUFFICIENT_KMS_PERMISSIONS;
  } else if (hashCode == FILE_FORMAT_INVALID_HASH) {
    return EphemerisErrorCode::FILE_FORMAT_INVALID;
  } else if (hashCode == AZ_EL_SEGMENT_REFERENCE_EPOCH_INVALID_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_REFERENCE_EPOCH_INVALID;
  } else if (hashCode == AZ_EL_SEGMENT_START_TIME_INVALID_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_START_TIME_INVALID;
  } else if (hashCode == AZ_EL_SEGMENT_END_TIME_INVALID_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_END_TIME_INVALID;
  } else if (hashCode == AZ_EL_SEGMENT_VALID_TIME_RANGE_INVALID_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_VALID_TIME_RANGE_INVALID;
  } else if (hashCode == AZ_EL_SEGMENT_END_TIME_TOO_LATE_HASH) {
    return EphemerisErrorCode::AZ_EL_SEGMENT_END_TIME_TOO_LATE;
  } else if (hashCode == AZ_EL_TOTAL_DURATION_EXCEEDED_HASH) {
    return EphemerisErrorCode::AZ_EL_TOTAL_DURATION_EXCEEDED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EphemerisErrorCode>(hashCode);
  }

  return EphemerisErrorCode::NOT_SET;
}

Aws::String GetNameForEphemerisErrorCode(EphemerisErrorCode enumValue) {
  switch (enumValue) {
    case EphemerisErrorCode::NOT_SET:
      return {};
    case EphemerisErrorCode::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case EphemerisErrorCode::MISMATCHED_SATCAT_ID:
      return "MISMATCHED_SATCAT_ID";
    case EphemerisErrorCode::OEM_VERSION_UNSUPPORTED:
      return "OEM_VERSION_UNSUPPORTED";
    case EphemerisErrorCode::ORIGINATOR_MISSING:
      return "ORIGINATOR_MISSING";
    case EphemerisErrorCode::CREATION_DATE_MISSING:
      return "CREATION_DATE_MISSING";
    case EphemerisErrorCode::OBJECT_NAME_MISSING:
      return "OBJECT_NAME_MISSING";
    case EphemerisErrorCode::OBJECT_ID_MISSING:
      return "OBJECT_ID_MISSING";
    case EphemerisErrorCode::REF_FRAME_UNSUPPORTED:
      return "REF_FRAME_UNSUPPORTED";
    case EphemerisErrorCode::REF_FRAME_EPOCH_UNSUPPORTED:
      return "REF_FRAME_EPOCH_UNSUPPORTED";
    case EphemerisErrorCode::TIME_SYSTEM_UNSUPPORTED:
      return "TIME_SYSTEM_UNSUPPORTED";
    case EphemerisErrorCode::CENTER_BODY_UNSUPPORTED:
      return "CENTER_BODY_UNSUPPORTED";
    case EphemerisErrorCode::INTERPOLATION_MISSING:
      return "INTERPOLATION_MISSING";
    case EphemerisErrorCode::INTERPOLATION_DEGREE_INVALID:
      return "INTERPOLATION_DEGREE_INVALID";
    case EphemerisErrorCode::AZ_EL_SEGMENT_LIST_MISSING:
      return "AZ_EL_SEGMENT_LIST_MISSING";
    case EphemerisErrorCode::INSUFFICIENT_TIME_AZ_EL:
      return "INSUFFICIENT_TIME_AZ_EL";
    case EphemerisErrorCode::START_TIME_IN_FUTURE:
      return "START_TIME_IN_FUTURE";
    case EphemerisErrorCode::END_TIME_IN_PAST:
      return "END_TIME_IN_PAST";
    case EphemerisErrorCode::EXPIRATION_TIME_TOO_EARLY:
      return "EXPIRATION_TIME_TOO_EARLY";
    case EphemerisErrorCode::START_TIME_METADATA_TOO_EARLY:
      return "START_TIME_METADATA_TOO_EARLY";
    case EphemerisErrorCode::STOP_TIME_METADATA_TOO_LATE:
      return "STOP_TIME_METADATA_TOO_LATE";
    case EphemerisErrorCode::AZ_EL_SEGMENT_END_TIME_BEFORE_START_TIME:
      return "AZ_EL_SEGMENT_END_TIME_BEFORE_START_TIME";
    case EphemerisErrorCode::AZ_EL_SEGMENT_TIMES_OVERLAP:
      return "AZ_EL_SEGMENT_TIMES_OVERLAP";
    case EphemerisErrorCode::AZ_EL_SEGMENTS_OUT_OF_ORDER:
      return "AZ_EL_SEGMENTS_OUT_OF_ORDER";
    case EphemerisErrorCode::TIME_AZ_EL_ITEMS_OUT_OF_ORDER:
      return "TIME_AZ_EL_ITEMS_OUT_OF_ORDER";
    case EphemerisErrorCode::MEAN_MOTION_INVALID:
      return "MEAN_MOTION_INVALID";
    case EphemerisErrorCode::TIME_AZ_EL_AZ_RADIAN_RANGE_INVALID:
      return "TIME_AZ_EL_AZ_RADIAN_RANGE_INVALID";
    case EphemerisErrorCode::TIME_AZ_EL_EL_RADIAN_RANGE_INVALID:
      return "TIME_AZ_EL_EL_RADIAN_RANGE_INVALID";
    case EphemerisErrorCode::TIME_AZ_EL_AZ_DEGREE_RANGE_INVALID:
      return "TIME_AZ_EL_AZ_DEGREE_RANGE_INVALID";
    case EphemerisErrorCode::TIME_AZ_EL_EL_DEGREE_RANGE_INVALID:
      return "TIME_AZ_EL_EL_DEGREE_RANGE_INVALID";
    case EphemerisErrorCode::TIME_AZ_EL_ANGLE_UNITS_INVALID:
      return "TIME_AZ_EL_ANGLE_UNITS_INVALID";
    case EphemerisErrorCode::INSUFFICIENT_KMS_PERMISSIONS:
      return "INSUFFICIENT_KMS_PERMISSIONS";
    case EphemerisErrorCode::FILE_FORMAT_INVALID:
      return "FILE_FORMAT_INVALID";
    case EphemerisErrorCode::AZ_EL_SEGMENT_REFERENCE_EPOCH_INVALID:
      return "AZ_EL_SEGMENT_REFERENCE_EPOCH_INVALID";
    case EphemerisErrorCode::AZ_EL_SEGMENT_START_TIME_INVALID:
      return "AZ_EL_SEGMENT_START_TIME_INVALID";
    case EphemerisErrorCode::AZ_EL_SEGMENT_END_TIME_INVALID:
      return "AZ_EL_SEGMENT_END_TIME_INVALID";
    case EphemerisErrorCode::AZ_EL_SEGMENT_VALID_TIME_RANGE_INVALID:
      return "AZ_EL_SEGMENT_VALID_TIME_RANGE_INVALID";
    case EphemerisErrorCode::AZ_EL_SEGMENT_END_TIME_TOO_LATE:
      return "AZ_EL_SEGMENT_END_TIME_TOO_LATE";
    case EphemerisErrorCode::AZ_EL_TOTAL_DURATION_EXCEEDED:
      return "AZ_EL_TOTAL_DURATION_EXCEEDED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EphemerisErrorCodeMapper
}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
