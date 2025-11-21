/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>

namespace Aws {
namespace Invoicing {
namespace Model {
enum class EinvoiceDeliveryDocumentType {
  NOT_SET,
  AWS_CLOUD_INVOICE,
  AWS_CLOUD_CREDIT_MEMO,
  AWS_MARKETPLACE_INVOICE,
  AWS_MARKETPLACE_CREDIT_MEMO,
  AWS_REQUEST_FOR_PAYMENT
};

namespace EinvoiceDeliveryDocumentTypeMapper {
AWS_INVOICING_API EinvoiceDeliveryDocumentType GetEinvoiceDeliveryDocumentTypeForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForEinvoiceDeliveryDocumentType(EinvoiceDeliveryDocumentType value);
}  // namespace EinvoiceDeliveryDocumentTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
