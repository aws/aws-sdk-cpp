/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/UnprocessedStatusEventFailureReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {
namespace UnprocessedStatusEventFailureReasonMapper {

static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("INTERNAL_ERROR");
static const int VALIDATION_ERROR_HASH = HashingUtils::HashString("VALIDATION_ERROR");

UnprocessedStatusEventFailureReason GetUnprocessedStatusEventFailureReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == THROTTLED_HASH) {
    return UnprocessedStatusEventFailureReason::THROTTLED;
  } else if (hashCode == INTERNAL_ERROR_HASH) {
    return UnprocessedStatusEventFailureReason::INTERNAL_ERROR;
  } else if (hashCode == VALIDATION_ERROR_HASH) {
    return UnprocessedStatusEventFailureReason::VALIDATION_ERROR;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UnprocessedStatusEventFailureReason>(hashCode);
  }

  return UnprocessedStatusEventFailureReason::NOT_SET;
}

Aws::String GetNameForUnprocessedStatusEventFailureReason(UnprocessedStatusEventFailureReason enumValue) {
  switch (enumValue) {
    case UnprocessedStatusEventFailureReason::NOT_SET:
      return {};
    case UnprocessedStatusEventFailureReason::THROTTLED:
      return "THROTTLED";
    case UnprocessedStatusEventFailureReason::INTERNAL_ERROR:
      return "INTERNAL_ERROR";
    case UnprocessedStatusEventFailureReason::VALIDATION_ERROR:
      return "VALIDATION_ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UnprocessedStatusEventFailureReasonMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
