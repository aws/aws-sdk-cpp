/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/elasticmapreduce/model/LogType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {
namespace LogTypeMapper {

static const int system_logs_HASH = HashingUtils::HashString("system-logs");
static const int application_logs_HASH = HashingUtils::HashString("application-logs");
static const int persistent_ui_logs_HASH = HashingUtils::HashString("persistent-ui-logs");

LogType GetLogTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == system_logs_HASH) {
    return LogType::system_logs;
  } else if (hashCode == application_logs_HASH) {
    return LogType::application_logs;
  } else if (hashCode == persistent_ui_logs_HASH) {
    return LogType::persistent_ui_logs;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LogType>(hashCode);
  }

  return LogType::NOT_SET;
}

Aws::String GetNameForLogType(LogType enumValue) {
  switch (enumValue) {
    case LogType::NOT_SET:
      return {};
    case LogType::system_logs:
      return "system-logs";
    case LogType::application_logs:
      return "application-logs";
    case LogType::persistent_ui_logs:
      return "persistent-ui-logs";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LogTypeMapper
}  // namespace Model
}  // namespace EMR
}  // namespace Aws
