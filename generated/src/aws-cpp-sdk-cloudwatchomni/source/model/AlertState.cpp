/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/AlertState.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace AlertStateMapper {

static const int OK_HASH = HashingUtils::HashString("OK");
static const int WARNING_HASH = HashingUtils::HashString("WARNING");
static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
static const int NODATA_HASH = HashingUtils::HashString("NODATA");

AlertState GetAlertStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OK_HASH) {
    return AlertState::OK;
  } else if (hashCode == WARNING_HASH) {
    return AlertState::WARNING;
  } else if (hashCode == CRITICAL_HASH) {
    return AlertState::CRITICAL;
  } else if (hashCode == NODATA_HASH) {
    return AlertState::NODATA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AlertState>(hashCode);
  }

  return AlertState::NOT_SET;
}

Aws::String GetNameForAlertState(AlertState enumValue) {
  switch (enumValue) {
    case AlertState::NOT_SET:
      return {};
    case AlertState::OK:
      return "OK";
    case AlertState::WARNING:
      return "WARNING";
    case AlertState::CRITICAL:
      return "CRITICAL";
    case AlertState::NODATA:
      return "NODATA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AlertStateMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
