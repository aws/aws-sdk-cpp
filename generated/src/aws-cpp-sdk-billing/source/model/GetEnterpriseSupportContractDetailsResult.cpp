/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/GetEnterpriseSupportContractDetailsResult.h>
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

GetEnterpriseSupportContractDetailsResult::GetEnterpriseSupportContractDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetEnterpriseSupportContractDetailsResult& GetEnterpriseSupportContractDetailsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("isContractActive")) {
    m_isContractActive = jsonValue.GetBool("isContractActive");
    m_isContractActiveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportAllocationMethod")) {
    m_supportAllocationMethod = jsonValue.GetString("supportAllocationMethod");
    m_supportAllocationMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportReservedInstanceAmortizationStartDate")) {
    m_supportReservedInstanceAmortizationStartDate = jsonValue.GetDouble("supportReservedInstanceAmortizationStartDate");
    m_supportReservedInstanceAmortizationStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportReservedInstanceTreatmentMethod")) {
    m_supportReservedInstanceTreatmentMethod = jsonValue.GetString("supportReservedInstanceTreatmentMethod");
    m_supportReservedInstanceTreatmentMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportSavingsPlansAmortizationStartDate")) {
    m_supportSavingsPlansAmortizationStartDate = jsonValue.GetDouble("supportSavingsPlansAmortizationStartDate");
    m_supportSavingsPlansAmortizationStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportSavingsPlansTreatmentMethod")) {
    m_supportSavingsPlansTreatmentMethod = jsonValue.GetString("supportSavingsPlansTreatmentMethod");
    m_supportSavingsPlansTreatmentMethodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("supportProrateStartDate")) {
    m_supportProrateStartDate = jsonValue.GetDouble("supportProrateStartDate");
    m_supportProrateStartDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractPayerAccountIds")) {
    Aws::Utils::Array<JsonView> contractPayerAccountIdsJsonList = jsonValue.GetArray("contractPayerAccountIds");
    for (unsigned contractPayerAccountIdsIndex = 0; contractPayerAccountIdsIndex < contractPayerAccountIdsJsonList.GetLength();
         ++contractPayerAccountIdsIndex) {
      m_contractPayerAccountIds.push_back(contractPayerAccountIdsJsonList[contractPayerAccountIdsIndex].AsObject());
    }
    m_contractPayerAccountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("chargedPayerAccountIds")) {
    Aws::Utils::Array<JsonView> chargedPayerAccountIdsJsonList = jsonValue.GetArray("chargedPayerAccountIds");
    for (unsigned chargedPayerAccountIdsIndex = 0; chargedPayerAccountIdsIndex < chargedPayerAccountIdsJsonList.GetLength();
         ++chargedPayerAccountIdsIndex) {
      m_chargedPayerAccountIds.push_back(chargedPayerAccountIdsJsonList[chargedPayerAccountIdsIndex].AsObject());
    }
    m_chargedPayerAccountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalSupportCharge")) {
    Aws::Utils::Array<JsonView> additionalSupportChargeJsonList = jsonValue.GetArray("additionalSupportCharge");
    for (unsigned additionalSupportChargeIndex = 0; additionalSupportChargeIndex < additionalSupportChargeJsonList.GetLength();
         ++additionalSupportChargeIndex) {
      m_additionalSupportCharge.push_back(additionalSupportChargeJsonList[additionalSupportChargeIndex].AsObject());
    }
    m_additionalSupportChargeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("additionalSupportEligibleUsageSpend")) {
    Aws::Utils::Array<JsonView> additionalSupportEligibleUsageSpendJsonList = jsonValue.GetArray("additionalSupportEligibleUsageSpend");
    for (unsigned additionalSupportEligibleUsageSpendIndex = 0;
         additionalSupportEligibleUsageSpendIndex < additionalSupportEligibleUsageSpendJsonList.GetLength();
         ++additionalSupportEligibleUsageSpendIndex) {
      m_additionalSupportEligibleUsageSpend.push_back(
          additionalSupportEligibleUsageSpendJsonList[additionalSupportEligibleUsageSpendIndex].AsObject());
    }
    m_additionalSupportEligibleUsageSpendHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pricingPlans")) {
    Aws::Utils::Array<JsonView> pricingPlansJsonList = jsonValue.GetArray("pricingPlans");
    for (unsigned pricingPlansIndex = 0; pricingPlansIndex < pricingPlansJsonList.GetLength(); ++pricingPlansIndex) {
      m_pricingPlans.push_back(pricingPlansJsonList[pricingPlansIndex].AsObject());
    }
    m_pricingPlansHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
