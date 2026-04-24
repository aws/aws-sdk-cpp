/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/EinvoiceDeliveryAttachmentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace EinvoiceDeliveryAttachmentTypeMapper {

static const int INVOICE_PDF_HASH = HashingUtils::HashString("INVOICE_PDF");
static const int RFP_PDF_HASH = HashingUtils::HashString("RFP_PDF");

EinvoiceDeliveryAttachmentType GetEinvoiceDeliveryAttachmentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVOICE_PDF_HASH) {
    return EinvoiceDeliveryAttachmentType::INVOICE_PDF;
  } else if (hashCode == RFP_PDF_HASH) {
    return EinvoiceDeliveryAttachmentType::RFP_PDF;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EinvoiceDeliveryAttachmentType>(hashCode);
  }

  return EinvoiceDeliveryAttachmentType::NOT_SET;
}

Aws::String GetNameForEinvoiceDeliveryAttachmentType(EinvoiceDeliveryAttachmentType enumValue) {
  switch (enumValue) {
    case EinvoiceDeliveryAttachmentType::NOT_SET:
      return {};
    case EinvoiceDeliveryAttachmentType::INVOICE_PDF:
      return "INVOICE_PDF";
    case EinvoiceDeliveryAttachmentType::RFP_PDF:
      return "RFP_PDF";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EinvoiceDeliveryAttachmentTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
