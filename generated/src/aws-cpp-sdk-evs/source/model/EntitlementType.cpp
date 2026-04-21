/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/evs/model/EntitlementType.h>

using namespace Aws::Utils;

namespace Aws {
namespace EVS {
namespace Model {
namespace EntitlementTypeMapper {

static const int WINDOWS_SERVER_HASH = HashingUtils::HashString("WINDOWS_SERVER");

EntitlementType GetEntitlementTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == WINDOWS_SERVER_HASH) {
    return EntitlementType::WINDOWS_SERVER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EntitlementType>(hashCode);
  }

  return EntitlementType::NOT_SET;
}

Aws::String GetNameForEntitlementType(EntitlementType enumValue) {
  switch (enumValue) {
    case EntitlementType::NOT_SET:
      return {};
    case EntitlementType::WINDOWS_SERVER:
      return "WINDOWS_SERVER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EntitlementTypeMapper
}  // namespace Model
}  // namespace EVS
}  // namespace Aws
