/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/InvestmentDistribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

InvestmentDistribution::InvestmentDistribution(JsonView jsonValue) { *this = jsonValue; }

InvestmentDistribution& InvestmentDistribution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentAmount")) {
    m_investmentAmount = jsonValue.GetObject("investmentAmount");
    m_investmentAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestmentDistribution::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_investmentAmountHasBeenSet) {
    payload.WithObject("investmentAmount", m_investmentAmount.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
