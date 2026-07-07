/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AuthCodeEntityType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {
namespace AuthCodeEntityTypeMapper {

static const int CUSTOMER_PROFILE_HASH = HashingUtils::HashString("CUSTOMER_PROFILE");

AuthCodeEntityType GetAuthCodeEntityTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_PROFILE_HASH) {
    return AuthCodeEntityType::CUSTOMER_PROFILE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AuthCodeEntityType>(hashCode);
  }

  return AuthCodeEntityType::NOT_SET;
}

Aws::String GetNameForAuthCodeEntityType(AuthCodeEntityType enumValue) {
  switch (enumValue) {
    case AuthCodeEntityType::NOT_SET:
      return {};
    case AuthCodeEntityType::CUSTOMER_PROFILE:
      return "CUSTOMER_PROFILE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AuthCodeEntityTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
