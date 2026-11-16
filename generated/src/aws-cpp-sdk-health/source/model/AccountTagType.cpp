/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/health/model/AccountTagType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Health {
namespace Model {
namespace AccountTagTypeMapper {

static const int ACCOUNT_RESOURCE_TAG_HASH = HashingUtils::HashString("ACCOUNT_RESOURCE_TAG");

AccountTagType GetAccountTagTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACCOUNT_RESOURCE_TAG_HASH) {
    return AccountTagType::ACCOUNT_RESOURCE_TAG;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AccountTagType>(hashCode);
  }

  return AccountTagType::NOT_SET;
}

Aws::String GetNameForAccountTagType(AccountTagType enumValue) {
  switch (enumValue) {
    case AccountTagType::NOT_SET:
      return {};
    case AccountTagType::ACCOUNT_RESOURCE_TAG:
      return "ACCOUNT_RESOURCE_TAG";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AccountTagTypeMapper
}  // namespace Model
}  // namespace Health
}  // namespace Aws
