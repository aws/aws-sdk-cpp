/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/BuyerDomain.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace BuyerDomainMapper {

static const int NetworkID_HASH = HashingUtils::HashString("NetworkID");

BuyerDomain GetBuyerDomainForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NetworkID_HASH) {
    return BuyerDomain::NetworkID;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BuyerDomain>(hashCode);
  }

  return BuyerDomain::NOT_SET;
}

Aws::String GetNameForBuyerDomain(BuyerDomain enumValue) {
  switch (enumValue) {
    case BuyerDomain::NOT_SET:
      return {};
    case BuyerDomain::NetworkID:
      return "NetworkID";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BuyerDomainMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
