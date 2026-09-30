/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BusinessSupportDiscount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BusinessSupportDiscount::BusinessSupportDiscount(JsonView jsonValue) { *this = jsonValue; }

BusinessSupportDiscount& BusinessSupportDiscount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("discountAmount")) {
    m_discountAmount = jsonValue.GetString("discountAmount");
    m_discountAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discountPercentage")) {
    m_discountPercentage = jsonValue.GetString("discountPercentage");
    m_discountPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discountType")) {
    m_discountType = jsonValue.GetString("discountType");
    m_discountTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("discountSource")) {
    m_discountSource = jsonValue.GetString("discountSource");
    m_discountSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessSupportDiscount::Jsonize() const {
  JsonValue payload;

  if (m_discountAmountHasBeenSet) {
    payload.WithString("discountAmount", m_discountAmount);
  }

  if (m_discountPercentageHasBeenSet) {
    payload.WithString("discountPercentage", m_discountPercentage);
  }

  if (m_discountTypeHasBeenSet) {
    payload.WithString("discountType", m_discountType);
  }

  if (m_discountSourceHasBeenSet) {
    payload.WithString("discountSource", m_discountSource);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
