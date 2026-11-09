/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/model/AccessType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace AccountAccessRuntime {
namespace Model {
namespace AccessTypeMapper {

static const int PROGRAMMATIC_ACCESS_HASH = HashingUtils::HashString("PROGRAMMATIC_ACCESS");

AccessType GetAccessTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PROGRAMMATIC_ACCESS_HASH) {
    return AccessType::PROGRAMMATIC_ACCESS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccessType>(hashCode);
  }

  return AccessType::NOT_SET;
}

Aws::String GetNameForAccessType(AccessType enumValue) {
  switch (enumValue) {
    case AccessType::NOT_SET:
      return {};
    case AccessType::PROGRAMMATIC_ACCESS:
      return "PROGRAMMATIC_ACCESS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccessTypeMapper
}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
