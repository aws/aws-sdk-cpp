/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/interconnect/model/RemoteAccountIdentifierType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Interconnect {
namespace Model {
namespace RemoteAccountIdentifierTypeMapper {

static const int account_HASH = HashingUtils::HashString("account");
static const int email_HASH = HashingUtils::HashString("email");

RemoteAccountIdentifierType GetRemoteAccountIdentifierTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == account_HASH) {
    return RemoteAccountIdentifierType::account;
  } else if (hashCode == email_HASH) {
    return RemoteAccountIdentifierType::email;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RemoteAccountIdentifierType>(hashCode);
  }

  return RemoteAccountIdentifierType::NOT_SET;
}

Aws::String GetNameForRemoteAccountIdentifierType(RemoteAccountIdentifierType enumValue) {
  switch (enumValue) {
    case RemoteAccountIdentifierType::NOT_SET:
      return {};
    case RemoteAccountIdentifierType::account:
      return "account";
    case RemoteAccountIdentifierType::email:
      return "email";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RemoteAccountIdentifierTypeMapper
}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
