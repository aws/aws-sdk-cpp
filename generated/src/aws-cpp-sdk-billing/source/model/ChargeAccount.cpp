/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ChargeAccount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

ChargeAccount::ChargeAccount(JsonView jsonValue) { *this = jsonValue; }

ChargeAccount& ChargeAccount::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargePercentage")) {
    m_chargePercentage = jsonValue.GetString("chargePercentage");
    m_chargePercentageHasBeenSet = true;
  }
  return *this;
}

JsonValue ChargeAccount::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_chargePercentageHasBeenSet) {
    payload.WithString("chargePercentage", m_chargePercentage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
