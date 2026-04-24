/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class Currency { NOT_SET, USD };

namespace CurrencyMapper {
AWS_INSPECTOR2_API Currency GetCurrencyForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForCurrency(Currency value);
}  // namespace CurrencyMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
