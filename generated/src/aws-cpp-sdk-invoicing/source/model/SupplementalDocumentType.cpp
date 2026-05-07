/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/SupplementalDocumentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace SupplementalDocumentTypeMapper {

static const int GOVERNMENT_INVOICE_HASH = HashingUtils::HashString("GOVERNMENT_INVOICE");
static const int TAX_E_INVOICE_HASH = HashingUtils::HashString("TAX_E_INVOICE");
static const int PAYMENT_RECEIPT_HASH = HashingUtils::HashString("PAYMENT_RECEIPT");
static const int SUPPLEMENT_HASH = HashingUtils::HashString("SUPPLEMENT");

SupplementalDocumentType GetSupplementalDocumentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == GOVERNMENT_INVOICE_HASH) {
    return SupplementalDocumentType::GOVERNMENT_INVOICE;
  } else if (hashCode == TAX_E_INVOICE_HASH) {
    return SupplementalDocumentType::TAX_E_INVOICE;
  } else if (hashCode == PAYMENT_RECEIPT_HASH) {
    return SupplementalDocumentType::PAYMENT_RECEIPT;
  } else if (hashCode == SUPPLEMENT_HASH) {
    return SupplementalDocumentType::SUPPLEMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SupplementalDocumentType>(hashCode);
  }

  return SupplementalDocumentType::NOT_SET;
}

Aws::String GetNameForSupplementalDocumentType(SupplementalDocumentType enumValue) {
  switch (enumValue) {
    case SupplementalDocumentType::NOT_SET:
      return {};
    case SupplementalDocumentType::GOVERNMENT_INVOICE:
      return "GOVERNMENT_INVOICE";
    case SupplementalDocumentType::TAX_E_INVOICE:
      return "TAX_E_INVOICE";
    case SupplementalDocumentType::PAYMENT_RECEIPT:
      return "PAYMENT_RECEIPT";
    case SupplementalDocumentType::SUPPLEMENT:
      return "SUPPLEMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SupplementalDocumentTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
