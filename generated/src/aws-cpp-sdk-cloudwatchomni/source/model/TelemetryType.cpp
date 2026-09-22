/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudwatchomni/model/TelemetryType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
namespace TelemetryTypeMapper {

static const int LOGS_HASH = HashingUtils::HashString("LOGS");
static const int TRACES_HASH = HashingUtils::HashString("TRACES");

TelemetryType GetTelemetryTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == LOGS_HASH) {
    return TelemetryType::LOGS;
  } else if (hashCode == TRACES_HASH) {
    return TelemetryType::TRACES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TelemetryType>(hashCode);
  }

  return TelemetryType::NOT_SET;
}

Aws::String GetNameForTelemetryType(TelemetryType enumValue) {
  switch (enumValue) {
    case TelemetryType::NOT_SET:
      return {};
    case TelemetryType::LOGS:
      return "LOGS";
    case TelemetryType::TRACES:
      return "TRACES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TelemetryTypeMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
