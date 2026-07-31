/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/AdditionalCharge.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

AdditionalCharge::AdditionalCharge(JsonView jsonValue) { *this = jsonValue; }

AdditionalCharge& AdditionalCharge::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetString("amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeType")) {
    m_chargeType = jsonValue.GetString("chargeType");
    m_chargeTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalCharge::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_amountHasBeenSet) {
    payload.WithString("amount", m_amount);
  }

  if (m_chargeTypeHasBeenSet) {
    payload.WithString("chargeType", m_chargeType);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
