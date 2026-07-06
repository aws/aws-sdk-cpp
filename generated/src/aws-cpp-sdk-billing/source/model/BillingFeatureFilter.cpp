/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingFeatureFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BillingFeatureFilter::BillingFeatureFilter(JsonView jsonValue) { *this = jsonValue; }

BillingFeatureFilter& BillingFeatureFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = BillingFeatureFilterNameMapper::GetBillingFeatureFilterNameForName(jsonValue.GetString("name"));
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    Aws::Utils::Array<JsonView> valueJsonList = jsonValue.GetArray("value");
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      m_value.push_back(valueJsonList[valueIndex].AsString());
    }
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue BillingFeatureFilter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", BillingFeatureFilterNameMapper::GetNameForBillingFeatureFilterName(m_name));
  }

  if (m_valueHasBeenSet) {
    Aws::Utils::Array<JsonValue> valueJsonList(m_value.size());
    for (unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex) {
      valueJsonList[valueIndex].AsString(m_value[valueIndex]);
    }
    payload.WithArray("value", std::move(valueJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
