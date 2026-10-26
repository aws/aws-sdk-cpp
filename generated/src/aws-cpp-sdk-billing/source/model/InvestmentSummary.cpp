/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/InvestmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

InvestmentSummary::InvestmentSummary(JsonView jsonValue) { *this = jsonValue; }

InvestmentSummary& InvestmentSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("investmentSummaryId")) {
    m_investmentSummaryId = jsonValue.GetString("investmentSummaryId");
    m_investmentSummaryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentName")) {
    m_investmentName = jsonValue.GetString("investmentName");
    m_investmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentType")) {
    m_investmentType = InvestmentTypeMapper::GetInvestmentTypeForName(jsonValue.GetString("investmentType"));
    m_investmentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxAllowedInvestmentDisbursementValue")) {
    m_maxAllowedInvestmentDisbursementValue = jsonValue.GetObject("maxAllowedInvestmentDisbursementValue");
    m_maxAllowedInvestmentDisbursementValueHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestmentSummary::Jsonize() const {
  JsonValue payload;

  if (m_investmentSummaryIdHasBeenSet) {
    payload.WithString("investmentSummaryId", m_investmentSummaryId);
  }

  if (m_investmentNameHasBeenSet) {
    payload.WithString("investmentName", m_investmentName);
  }

  if (m_investmentTypeHasBeenSet) {
    payload.WithString("investmentType", InvestmentTypeMapper::GetNameForInvestmentType(m_investmentType));
  }

  if (m_maxAllowedInvestmentDisbursementValueHasBeenSet) {
    payload.WithObject("maxAllowedInvestmentDisbursementValue", m_maxAllowedInvestmentDisbursementValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
