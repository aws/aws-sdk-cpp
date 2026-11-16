/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PeriodontalReviewReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {
namespace PeriodontalReviewReasonMapper {

static const int SITE_NOT_CHARTED_HASH = HashingUtils::HashString("SITE_NOT_CHARTED");
static const int VALUE_NOT_CHARTED_HASH = HashingUtils::HashString("VALUE_NOT_CHARTED");
static const int READING_COUNT_MISMATCH_HASH = HashingUtils::HashString("READING_COUNT_MISMATCH");
static const int LINE_UNCLEAR_HASH = HashingUtils::HashString("LINE_UNCLEAR");
static const int TOOTH_UNCLEAR_HASH = HashingUtils::HashString("TOOTH_UNCLEAR");
static const int MISSING_TOOTH_CONFLICT_HASH = HashingUtils::HashString("MISSING_TOOTH_CONFLICT");
static const int MEASUREMENT_NOT_CHARTED_HASH = HashingUtils::HashString("MEASUREMENT_NOT_CHARTED");
static const int SESSION_ISSUE_HASH = HashingUtils::HashString("SESSION_ISSUE");

PeriodontalReviewReason GetPeriodontalReviewReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SITE_NOT_CHARTED_HASH) {
    return PeriodontalReviewReason::SITE_NOT_CHARTED;
  } else if (hashCode == VALUE_NOT_CHARTED_HASH) {
    return PeriodontalReviewReason::VALUE_NOT_CHARTED;
  } else if (hashCode == READING_COUNT_MISMATCH_HASH) {
    return PeriodontalReviewReason::READING_COUNT_MISMATCH;
  } else if (hashCode == LINE_UNCLEAR_HASH) {
    return PeriodontalReviewReason::LINE_UNCLEAR;
  } else if (hashCode == TOOTH_UNCLEAR_HASH) {
    return PeriodontalReviewReason::TOOTH_UNCLEAR;
  } else if (hashCode == MISSING_TOOTH_CONFLICT_HASH) {
    return PeriodontalReviewReason::MISSING_TOOTH_CONFLICT;
  } else if (hashCode == MEASUREMENT_NOT_CHARTED_HASH) {
    return PeriodontalReviewReason::MEASUREMENT_NOT_CHARTED;
  } else if (hashCode == SESSION_ISSUE_HASH) {
    return PeriodontalReviewReason::SESSION_ISSUE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PeriodontalReviewReason>(hashCode);
  }

  return PeriodontalReviewReason::NOT_SET;
}

Aws::String GetNameForPeriodontalReviewReason(PeriodontalReviewReason enumValue) {
  switch (enumValue) {
    case PeriodontalReviewReason::NOT_SET:
      return {};
    case PeriodontalReviewReason::SITE_NOT_CHARTED:
      return "SITE_NOT_CHARTED";
    case PeriodontalReviewReason::VALUE_NOT_CHARTED:
      return "VALUE_NOT_CHARTED";
    case PeriodontalReviewReason::READING_COUNT_MISMATCH:
      return "READING_COUNT_MISMATCH";
    case PeriodontalReviewReason::LINE_UNCLEAR:
      return "LINE_UNCLEAR";
    case PeriodontalReviewReason::TOOTH_UNCLEAR:
      return "TOOTH_UNCLEAR";
    case PeriodontalReviewReason::MISSING_TOOTH_CONFLICT:
      return "MISSING_TOOTH_CONFLICT";
    case PeriodontalReviewReason::MEASUREMENT_NOT_CHARTED:
      return "MEASUREMENT_NOT_CHARTED";
    case PeriodontalReviewReason::SESSION_ISSUE:
      return "SESSION_ISSUE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PeriodontalReviewReasonMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
