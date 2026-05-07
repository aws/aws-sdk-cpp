/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/InvoiceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace InvoiceTypeMapper {

static const int INVOICE_HASH = HashingUtils::HashString("INVOICE");
static const int CREDIT_MEMO_HASH = HashingUtils::HashString("CREDIT_MEMO");
static const int PAYMENT_RECEIPT_HASH = HashingUtils::HashString("PAYMENT_RECEIPT");

InvoiceType GetInvoiceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVOICE_HASH) {
    return InvoiceType::INVOICE;
  } else if (hashCode == CREDIT_MEMO_HASH) {
    return InvoiceType::CREDIT_MEMO;
  } else if (hashCode == PAYMENT_RECEIPT_HASH) {
    return InvoiceType::PAYMENT_RECEIPT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<InvoiceType>(hashCode);
  }

  return InvoiceType::NOT_SET;
}

Aws::String GetNameForInvoiceType(InvoiceType enumValue) {
  switch (enumValue) {
    case InvoiceType::NOT_SET:
      return {};
    case InvoiceType::INVOICE:
      return "INVOICE";
    case InvoiceType::CREDIT_MEMO:
      return "CREDIT_MEMO";
    case InvoiceType::PAYMENT_RECEIPT:
      return "PAYMENT_RECEIPT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace InvoiceTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
