/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BusinessSupportServiceSpend.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

BusinessSupportServiceSpend::BusinessSupportServiceSpend(JsonView jsonValue) { *this = jsonValue; }

BusinessSupportServiceSpend& BusinessSupportServiceSpend::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contributingService")) {
    m_contributingService = jsonValue.GetString("contributingService");
    m_contributingServiceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("itemType")) {
    m_itemType = jsonValue.GetString("itemType");
    m_itemTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargeAmount")) {
    m_chargeAmount = jsonValue.GetString("chargeAmount");
    m_chargeAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currency")) {
    m_currency = jsonValue.GetString("currency");
    m_currencyHasBeenSet = true;
  }
  return *this;
}

JsonValue BusinessSupportServiceSpend::Jsonize() const {
  JsonValue payload;

  if (m_contributingServiceHasBeenSet) {
    payload.WithString("contributingService", m_contributingService);
  }

  if (m_itemTypeHasBeenSet) {
    payload.WithString("itemType", m_itemType);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_chargeAmountHasBeenSet) {
    payload.WithString("chargeAmount", m_chargeAmount);
  }

  if (m_currencyHasBeenSet) {
    payload.WithString("currency", m_currency);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
