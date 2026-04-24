/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class Currency { NOT_SET, USD };

namespace CurrencyMapper {
AWS_LIGHTSAIL_API Currency GetCurrencyForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForCurrency(Currency value);
}  // namespace CurrencyMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
