/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AccessType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AccessTypeMapper {

static const int ALLOW_HASH = HashingUtils::HashString("ALLOW");

AccessType GetAccessTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ALLOW_HASH) {
    return AccessType::ALLOW;
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
    case AccessType::ALLOW:
      return "ALLOW";
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
}  // namespace Connect
}  // namespace Aws
