/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/InvestmentRestriction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

InvestmentRestriction::InvestmentRestriction(JsonView jsonValue) { *this = jsonValue; }

InvestmentRestriction& InvestmentRestriction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amount")) {
    m_amount = jsonValue.GetObject("amount");
    m_amountHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestmentRestriction::Jsonize() const {
  JsonValue payload;

  if (m_amountHasBeenSet) {
    payload.WithObject("amount", m_amount.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
