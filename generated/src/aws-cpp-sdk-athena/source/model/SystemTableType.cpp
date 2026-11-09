/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/SystemTableType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Athena {
namespace Model {
namespace SystemTableTypeMapper {

static const int QUERY_EXECUTIONS_HASH = HashingUtils::HashString("QUERY_EXECUTIONS");

SystemTableType GetSystemTableTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUERY_EXECUTIONS_HASH) {
    return SystemTableType::QUERY_EXECUTIONS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SystemTableType>(hashCode);
  }

  return SystemTableType::NOT_SET;
}

Aws::String GetNameForSystemTableType(SystemTableType enumValue) {
  switch (enumValue) {
    case SystemTableType::NOT_SET:
      return {};
    case SystemTableType::QUERY_EXECUTIONS:
      return "QUERY_EXECUTIONS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SystemTableTypeMapper
}  // namespace Model
}  // namespace Athena
}  // namespace Aws
