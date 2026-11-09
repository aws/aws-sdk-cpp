/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/MilestoneBasedInvestment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

MilestoneBasedInvestment::MilestoneBasedInvestment(JsonView jsonValue) { *this = jsonValue; }

MilestoneBasedInvestment& MilestoneBasedInvestment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("investmentId")) {
    m_investmentId = jsonValue.GetString("investmentId");
    m_investmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentValue")) {
    m_investmentValue = jsonValue.GetObject("investmentValue");
    m_investmentValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentDisbursedAt")) {
    m_investmentDisbursedAt = jsonValue.GetDouble("investmentDisbursedAt");
    m_investmentDisbursedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue MilestoneBasedInvestment::Jsonize() const {
  JsonValue payload;

  if (m_investmentIdHasBeenSet) {
    payload.WithString("investmentId", m_investmentId);
  }

  if (m_investmentValueHasBeenSet) {
    payload.WithObject("investmentValue", m_investmentValue.Jsonize());
  }

  if (m_investmentDisbursedAtHasBeenSet) {
    payload.WithDouble("investmentDisbursedAt", m_investmentDisbursedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
