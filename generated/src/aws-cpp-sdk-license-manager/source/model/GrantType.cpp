/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/license-manager/model/GrantType.h>

using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {
namespace GrantTypeMapper {

static const int BuyerGrant_HASH = HashingUtils::HashString("BuyerGrant");
static const int DelegateGrant_HASH = HashingUtils::HashString("DelegateGrant");

GrantType GetGrantTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BuyerGrant_HASH) {
    return GrantType::BuyerGrant;
  } else if (hashCode == DelegateGrant_HASH) {
    return GrantType::DelegateGrant;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<GrantType>(hashCode);
  }

  return GrantType::NOT_SET;
}

Aws::String GetNameForGrantType(GrantType enumValue) {
  switch (enumValue) {
    case GrantType::NOT_SET:
      return {};
    case GrantType::BuyerGrant:
      return "BuyerGrant";
    case GrantType::DelegateGrant:
      return "DelegateGrant";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace GrantTypeMapper
}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
