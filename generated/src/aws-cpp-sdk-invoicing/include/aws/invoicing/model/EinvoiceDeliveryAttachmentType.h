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
enum class EinvoiceDeliveryAttachmentType { NOT_SET, INVOICE_PDF, RFP_PDF };

namespace EinvoiceDeliveryAttachmentTypeMapper {
AWS_INVOICING_API EinvoiceDeliveryAttachmentType GetEinvoiceDeliveryAttachmentTypeForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForEinvoiceDeliveryAttachmentType(EinvoiceDeliveryAttachmentType value);
}  // namespace EinvoiceDeliveryAttachmentTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
