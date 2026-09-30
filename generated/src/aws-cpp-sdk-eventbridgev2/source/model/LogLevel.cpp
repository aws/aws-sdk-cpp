/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/eventbridgev2/model/LogLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {
namespace LogLevelMapper {

static const int OFF_HASH = HashingUtils::HashString("OFF");
static const int ERROR__HASH = HashingUtils::HashString("ERROR");
static const int INFO_HASH = HashingUtils::HashString("INFO");

LogLevel GetLogLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == OFF_HASH) {
    return LogLevel::OFF;
  } else if (hashCode == ERROR__HASH) {
    return LogLevel::ERROR_;
  } else if (hashCode == INFO_HASH) {
    return LogLevel::INFO;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogLevel>(hashCode);
  }

  return LogLevel::NOT_SET;
}

Aws::String GetNameForLogLevel(LogLevel enumValue) {
  switch (enumValue) {
    case LogLevel::NOT_SET:
      return {};
    case LogLevel::OFF:
      return "OFF";
    case LogLevel::ERROR_:
      return "ERROR";
    case LogLevel::INFO:
      return "INFO";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogLevelMapper
}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
