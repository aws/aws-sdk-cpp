/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/SystemTableName.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Athena {
namespace Model {
namespace SystemTableNameMapper {

static const int ALL_HASH = HashingUtils::HashString("ALL");

SystemTableName GetSystemTableNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALL_HASH) {
    return SystemTableName::ALL;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SystemTableName>(hashCode);
  }

  return SystemTableName::NOT_SET;
}

Aws::String GetNameForSystemTableName(SystemTableName enumValue) {
  switch (enumValue) {
    case SystemTableName::NOT_SET:
      return {};
    case SystemTableName::ALL:
      return "ALL";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SystemTableNameMapper
}  // namespace Model
}  // namespace Athena
}  // namespace Aws
