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
enum class EinvoiceDeliveryStatus { NOT_SET, DELIVERED, NOT_DELIVERED };

namespace EinvoiceDeliveryStatusMapper {
AWS_INVOICING_API EinvoiceDeliveryStatus GetEinvoiceDeliveryStatusForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForEinvoiceDeliveryStatus(EinvoiceDeliveryStatus value);
}  // namespace EinvoiceDeliveryStatusMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
