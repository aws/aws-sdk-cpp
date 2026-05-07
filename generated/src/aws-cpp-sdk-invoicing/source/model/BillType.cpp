/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/BillType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace BillTypeMapper {

static const int ANNIVERSARY_HASH = HashingUtils::HashString("ANNIVERSARY");
static const int PURCHASE_HASH = HashingUtils::HashString("PURCHASE");
static const int REFUND_HASH = HashingUtils::HashString("REFUND");

BillType GetBillTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ANNIVERSARY_HASH) {
    return BillType::ANNIVERSARY;
  } else if (hashCode == PURCHASE_HASH) {
    return BillType::PURCHASE;
  } else if (hashCode == REFUND_HASH) {
    return BillType::REFUND;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BillType>(hashCode);
  }

  return BillType::NOT_SET;
}

Aws::String GetNameForBillType(BillType enumValue) {
  switch (enumValue) {
    case BillType::NOT_SET:
      return {};
    case BillType::ANNIVERSARY:
      return "ANNIVERSARY";
    case BillType::PURCHASE:
      return "PURCHASE";
    case BillType::REFUND:
      return "REFUND";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BillTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
