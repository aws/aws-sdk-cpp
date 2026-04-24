/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BillingConductor {
namespace Model {
enum class SearchOption { NOT_SET, STARTS_WITH };

namespace SearchOptionMapper {
AWS_BILLINGCONDUCTOR_API SearchOption GetSearchOptionForName(const Aws::String& name);

AWS_BILLINGCONDUCTOR_API Aws::String GetNameForSearchOption(SearchOption value);
}  // namespace SearchOptionMapper
}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
