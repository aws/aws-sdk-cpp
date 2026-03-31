/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/devops-agent/model/MonitorAccountType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {
namespace MonitorAccountTypeMapper {

static const int monitor_HASH = HashingUtils::HashString("monitor");

MonitorAccountType GetMonitorAccountTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == monitor_HASH) {
    return MonitorAccountType::monitor;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MonitorAccountType>(hashCode);
  }

  return MonitorAccountType::NOT_SET;
}

Aws::String GetNameForMonitorAccountType(MonitorAccountType enumValue) {
  switch (enumValue) {
    case MonitorAccountType::NOT_SET:
      return {};
    case MonitorAccountType::monitor:
      return "monitor";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MonitorAccountTypeMapper
}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
