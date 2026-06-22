/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/logs/model/SyslogSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {
namespace SyslogSourceTypeMapper {

static const int VPCE_HASH = HashingUtils::HashString("VPCE");

SyslogSourceType GetSyslogSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == VPCE_HASH) {
    return SyslogSourceType::VPCE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SyslogSourceType>(hashCode);
  }

  return SyslogSourceType::NOT_SET;
}

Aws::String GetNameForSyslogSourceType(SyslogSourceType enumValue) {
  switch (enumValue) {
    case SyslogSourceType::NOT_SET:
      return {};
    case SyslogSourceType::VPCE:
      return "VPCE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SyslogSourceTypeMapper
}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
