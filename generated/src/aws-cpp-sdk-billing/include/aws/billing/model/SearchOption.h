/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Billing {
namespace Model {
enum class SearchOption { NOT_SET, STARTS_WITH };

namespace SearchOptionMapper {
AWS_BILLING_API SearchOption GetSearchOptionForName(const Aws::String& name);

AWS_BILLING_API Aws::String GetNameForSearchOption(SearchOption value);
}  // namespace SearchOptionMapper
}  // namespace Model
}  // namespace Billing
}  // namespace Aws
