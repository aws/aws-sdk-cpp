/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/invoicing/model/EinvoiceDeliveryDocumentType.h>

using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {
namespace EinvoiceDeliveryDocumentTypeMapper {

static const int AWS_CLOUD_INVOICE_HASH = HashingUtils::HashString("AWS_CLOUD_INVOICE");
static const int AWS_CLOUD_CREDIT_MEMO_HASH = HashingUtils::HashString("AWS_CLOUD_CREDIT_MEMO");
static const int AWS_MARKETPLACE_INVOICE_HASH = HashingUtils::HashString("AWS_MARKETPLACE_INVOICE");
static const int AWS_MARKETPLACE_CREDIT_MEMO_HASH = HashingUtils::HashString("AWS_MARKETPLACE_CREDIT_MEMO");
static const int AWS_REQUEST_FOR_PAYMENT_HASH = HashingUtils::HashString("AWS_REQUEST_FOR_PAYMENT");

EinvoiceDeliveryDocumentType GetEinvoiceDeliveryDocumentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_CLOUD_INVOICE_HASH) {
    return EinvoiceDeliveryDocumentType::AWS_CLOUD_INVOICE;
  } else if (hashCode == AWS_CLOUD_CREDIT_MEMO_HASH) {
    return EinvoiceDeliveryDocumentType::AWS_CLOUD_CREDIT_MEMO;
  } else if (hashCode == AWS_MARKETPLACE_INVOICE_HASH) {
    return EinvoiceDeliveryDocumentType::AWS_MARKETPLACE_INVOICE;
  } else if (hashCode == AWS_MARKETPLACE_CREDIT_MEMO_HASH) {
    return EinvoiceDeliveryDocumentType::AWS_MARKETPLACE_CREDIT_MEMO;
  } else if (hashCode == AWS_REQUEST_FOR_PAYMENT_HASH) {
    return EinvoiceDeliveryDocumentType::AWS_REQUEST_FOR_PAYMENT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<EinvoiceDeliveryDocumentType>(hashCode);
  }

  return EinvoiceDeliveryDocumentType::NOT_SET;
}

Aws::String GetNameForEinvoiceDeliveryDocumentType(EinvoiceDeliveryDocumentType enumValue) {
  switch (enumValue) {
    case EinvoiceDeliveryDocumentType::NOT_SET:
      return {};
    case EinvoiceDeliveryDocumentType::AWS_CLOUD_INVOICE:
      return "AWS_CLOUD_INVOICE";
    case EinvoiceDeliveryDocumentType::AWS_CLOUD_CREDIT_MEMO:
      return "AWS_CLOUD_CREDIT_MEMO";
    case EinvoiceDeliveryDocumentType::AWS_MARKETPLACE_INVOICE:
      return "AWS_MARKETPLACE_INVOICE";
    case EinvoiceDeliveryDocumentType::AWS_MARKETPLACE_CREDIT_MEMO:
      return "AWS_MARKETPLACE_CREDIT_MEMO";
    case EinvoiceDeliveryDocumentType::AWS_REQUEST_FOR_PAYMENT:
      return "AWS_REQUEST_FOR_PAYMENT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace EinvoiceDeliveryDocumentTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
