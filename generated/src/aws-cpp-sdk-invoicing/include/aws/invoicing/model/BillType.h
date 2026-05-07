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
enum class BillType { NOT_SET, ANNIVERSARY, PURCHASE, REFUND };

namespace BillTypeMapper {
AWS_INVOICING_API BillType GetBillTypeForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForBillType(BillType value);
}  // namespace BillTypeMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
