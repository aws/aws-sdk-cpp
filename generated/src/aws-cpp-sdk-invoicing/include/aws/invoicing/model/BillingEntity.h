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
enum class BillingEntity { NOT_SET, AWS, AWS_MARKETPLACE };

namespace BillingEntityMapper {
AWS_INVOICING_API BillingEntity GetBillingEntityForName(const Aws::String& name);

AWS_INVOICING_API Aws::String GetNameForBillingEntity(BillingEntity value);
}  // namespace BillingEntityMapper
}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
