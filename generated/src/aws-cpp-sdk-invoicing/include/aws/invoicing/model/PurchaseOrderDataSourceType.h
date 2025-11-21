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
enum class PurchaseOrderDataSourceType { NOT_SET, ASSOCIATED_PURCHASE_ORDER_REQUIRED, PURCHASE_ORDER_NOT_REQUIRED };

namespace PurchaseOrderDataSourceTypeMapper {
AWS_INVOICING_API PurchaseOrderDataSourceType GetPurchaseOrderDataSourceTypeForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForPurchaseOrderDataSourceType(PurchaseOrderDataSourceType value);
}  // namespace PurchaseOrderDataSourceTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
