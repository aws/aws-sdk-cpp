/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SessionEntityType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace SessionEntityTypeMapper {

static const int USER_HASH = HashingUtils::HashString("USER");

SessionEntityType GetSessionEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == USER_HASH) {
    return SessionEntityType::USER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SessionEntityType>(hashCode);
  }

  return SessionEntityType::NOT_SET;
}

Aws::String GetNameForSessionEntityType(SessionEntityType enumValue) {
  switch (enumValue) {
    case SessionEntityType::NOT_SET:
      return {};
    case SessionEntityType::USER:
      return "USER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SessionEntityTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
