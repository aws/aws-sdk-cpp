/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/GetEnterpriseSupportChargeSummaryResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEnterpriseSupportChargeSummaryResult::GetEnterpriseSupportChargeSummaryResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetEnterpriseSupportChargeSummaryResult& GetEnterpriseSupportChargeSummaryResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("payerAccountId")) {
    m_payerAccountId = jsonValue.GetString("payerAccountId");
    m_payerAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingMonth")) {
    m_billingMonth = jsonValue.GetString("billingMonth");
    m_billingMonthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingPeriodStartDate")) {
    m_billingPeriodStartDate = jsonValue.GetDouble("billingPeriodStartDate");
    m_billingPeriodStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billingPeriodEndDate")) {
    m_billingPeriodEndDate = jsonValue.GetDouble("billingPeriodEndDate");
    m_billingPeriodEndDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isEstimated")) {
    m_isEstimated = jsonValue.GetBool("isEstimated");
    m_isEstimatedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("billDate")) {
    m_billDate = jsonValue.GetDouble("billDate");
    m_billDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportCharge")) {
    m_supportCharge = jsonValue.GetString("supportCharge");
    m_supportChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportCharge")) {
    m_totalSupportCharge = jsonValue.GetString("totalSupportCharge");
    m_totalSupportChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportDiscount")) {
    m_supportDiscount = jsonValue.GetString("supportDiscount");
    m_supportDiscountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleSpend")) {
    m_totalSupportEligibleSpend = jsonValue.GetString("totalSupportEligibleSpend");
    m_totalSupportEligibleSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleUsageSpend")) {
    m_totalSupportEligibleUsageSpend = jsonValue.GetString("totalSupportEligibleUsageSpend");
    m_totalSupportEligibleUsageSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleReservedInstanceSpend")) {
    m_totalSupportEligibleReservedInstanceSpend = jsonValue.GetString("totalSupportEligibleReservedInstanceSpend");
    m_totalSupportEligibleReservedInstanceSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalSupportEligibleSavingsPlanSpend")) {
    m_totalSupportEligibleSavingsPlanSpend = jsonValue.GetString("totalSupportEligibleSavingsPlanSpend");
    m_totalSupportEligibleSavingsPlanSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportChargePercentage")) {
    m_supportChargePercentage = jsonValue.GetString("supportChargePercentage");
    m_supportChargePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportEffectivePricingPlan")) {
    m_supportEffectivePricingPlan = jsonValue.GetObject("supportEffectivePricingPlan");
    m_supportEffectivePricingPlanHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
