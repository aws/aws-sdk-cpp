/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/EinvoiceDeliveryStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace EinvoiceDeliveryStatusMapper {

static const int DELIVERED_HASH = HashingUtils::HashString("DELIVERED");
static const int NOT_DELIVERED_HASH = HashingUtils::HashString("NOT_DELIVERED");

EinvoiceDeliveryStatus GetEinvoiceDeliveryStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DELIVERED_HASH) {
    return EinvoiceDeliveryStatus::DELIVERED;
  } else if (hashCode == NOT_DELIVERED_HASH) {
    return EinvoiceDeliveryStatus::NOT_DELIVERED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EinvoiceDeliveryStatus>(hashCode);
  }

  return EinvoiceDeliveryStatus::NOT_SET;
}

Aws::String GetNameForEinvoiceDeliveryStatus(EinvoiceDeliveryStatus enumValue) {
  switch (enumValue) {
    case EinvoiceDeliveryStatus::NOT_SET:
      return {};
    case EinvoiceDeliveryStatus::DELIVERED:
      return "DELIVERED";
    case EinvoiceDeliveryStatus::NOT_DELIVERED:
      return "NOT_DELIVERED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EinvoiceDeliveryStatusMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
