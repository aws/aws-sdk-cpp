/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/TimeOffValidationSeverity.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace ConnectScheduling {
namespace Model {
namespace TimeOffValidationSeverityMapper {

static const int WARNING_HASH = HashingUtils::HashString("WARNING");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");

TimeOffValidationSeverity GetTimeOffValidationSeverityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WARNING_HASH) {
    return TimeOffValidationSeverity::WARNING;
  } else if (hashCode == ERROR__HASH) {
    return TimeOffValidationSeverity::ERROR_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TimeOffValidationSeverity>(hashCode);
  }

  return TimeOffValidationSeverity::NOT_SET;
}

Aws::String GetNameForTimeOffValidationSeverity(TimeOffValidationSeverity enumValue) {
  switch (enumValue) {
    case TimeOffValidationSeverity::NOT_SET:
      return {};
    case TimeOffValidationSeverity::WARNING:
      return "WARNING";
    case TimeOffValidationSeverity::ERROR_:
      return "ERROR";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TimeOffValidationSeverityMapper
}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
