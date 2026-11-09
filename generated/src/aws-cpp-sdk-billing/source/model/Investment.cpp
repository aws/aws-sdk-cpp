/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/Investment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

Investment::Investment(JsonView jsonValue) { *this = jsonValue; }

Investment& Investment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("milestoneBasedInvestment")) {
    m_milestoneBasedInvestment = jsonValue.GetObject("milestoneBasedInvestment");
    m_milestoneBasedInvestmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outcomeBasedInvestment")) {
    m_outcomeBasedInvestment = jsonValue.GetObject("outcomeBasedInvestment");
    m_outcomeBasedInvestmentHasBeenSet = true;
  }
  return *this;
}

JsonValue Investment::Jsonize() const {
  JsonValue payload;

  if (m_milestoneBasedInvestmentHasBeenSet) {
    payload.WithObject("milestoneBasedInvestment", m_milestoneBasedInvestment.Jsonize());
  }

  if (m_outcomeBasedInvestmentHasBeenSet) {
    payload.WithObject("outcomeBasedInvestment", m_outcomeBasedInvestment.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
