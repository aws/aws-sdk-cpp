/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/ReceiverRole.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace ReceiverRoleMapper {

static const int SELLER_HASH = HashingUtils::HashString("SELLER");
static const int RESELLER_HASH = HashingUtils::HashString("RESELLER");
static const int BUYER_HASH = HashingUtils::HashString("BUYER");

ReceiverRole GetReceiverRoleForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SELLER_HASH) {
    return ReceiverRole::SELLER;
  } else if (hashCode == RESELLER_HASH) {
    return ReceiverRole::RESELLER;
  } else if (hashCode == BUYER_HASH) {
    return ReceiverRole::BUYER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ReceiverRole>(hashCode);
  }

  return ReceiverRole::NOT_SET;
}

Aws::String GetNameForReceiverRole(ReceiverRole enumValue) {
  switch (enumValue) {
    case ReceiverRole::NOT_SET:
      return {};
    case ReceiverRole::SELLER:
      return "SELLER";
    case ReceiverRole::RESELLER:
      return "RESELLER";
    case ReceiverRole::BUYER:
      return "BUYER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ReceiverRoleMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
