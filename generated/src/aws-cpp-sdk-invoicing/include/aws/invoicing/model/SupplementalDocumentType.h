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
enum class SupplementalDocumentType { NOT_SET, GOVERNMENT_INVOICE, TAX_E_INVOICE, PAYMENT_RECEIPT, SUPPLEMENT };

namespace SupplementalDocumentTypeMapper {
AWS_INVOICING_API SupplementalDocumentType GetSupplementalDocumentTypeForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForSupplementalDocumentType(SupplementalDocumentType value);
}  // namespace SupplementalDocumentTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
