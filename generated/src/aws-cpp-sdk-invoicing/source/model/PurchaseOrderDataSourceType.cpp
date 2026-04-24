/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/PurchaseOrderDataSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace PurchaseOrderDataSourceTypeMapper {

static const int ASSOCIATED_PURCHASE_ORDER_REQUIRED_HASH = HashingUtils::HashString("ASSOCIATED_PURCHASE_ORDER_REQUIRED");
static const int PURCHASE_ORDER_NOT_REQUIRED_HASH = HashingUtils::HashString("PURCHASE_ORDER_NOT_REQUIRED");

PurchaseOrderDataSourceType GetPurchaseOrderDataSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ASSOCIATED_PURCHASE_ORDER_REQUIRED_HASH) {
    return PurchaseOrderDataSourceType::ASSOCIATED_PURCHASE_ORDER_REQUIRED;
  } else if (hashCode == PURCHASE_ORDER_NOT_REQUIRED_HASH) {
    return PurchaseOrderDataSourceType::PURCHASE_ORDER_NOT_REQUIRED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PurchaseOrderDataSourceType>(hashCode);
  }

  return PurchaseOrderDataSourceType::NOT_SET;
}

Aws::String GetNameForPurchaseOrderDataSourceType(PurchaseOrderDataSourceType enumValue) {
  switch (enumValue) {
    case PurchaseOrderDataSourceType::NOT_SET:
      return {};
    case PurchaseOrderDataSourceType::ASSOCIATED_PURCHASE_ORDER_REQUIRED:
      return "ASSOCIATED_PURCHASE_ORDER_REQUIRED";
    case PurchaseOrderDataSourceType::PURCHASE_ORDER_NOT_REQUIRED:
      return "PURCHASE_ORDER_NOT_REQUIRED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PurchaseOrderDataSourceTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
