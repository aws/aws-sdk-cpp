/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/CreditData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

CreditData::CreditData(JsonView jsonValue) { *this = jsonValue; }

CreditData& CreditData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("creditId")) {
    m_creditId = jsonValue.GetString("creditId");
    m_creditIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creditType")) {
    m_creditType = jsonValue.GetString("creditType");
    m_creditTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("initialAmount")) {
    m_initialAmount = jsonValue.GetObject("initialAmount");
    m_initialAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remainingAmount")) {
    m_remainingAmount = jsonValue.GetObject("remainingAmount");
    m_remainingAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedAmount")) {
    m_estimatedAmount = jsonValue.GetObject("estimatedAmount");
    m_estimatedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicableProductNames")) {
    Aws::Utils::Array<JsonView> applicableProductNamesJsonList = jsonValue.GetArray("applicableProductNames");
    for (unsigned applicableProductNamesIndex = 0; applicableProductNamesIndex < applicableProductNamesJsonList.GetLength();
         ++applicableProductNamesIndex) {
      m_applicableProductNames.push_back(applicableProductNamesJsonList[applicableProductNamesIndex].AsString());
    }
    m_applicableProductNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startDate")) {
    m_startDate = jsonValue.GetDouble("startDate");
    m_startDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endDate")) {
    m_endDate = jsonValue.GetDouble("endDate");
    m_endDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exhaustDate")) {
    m_exhaustDate = jsonValue.GetDouble("exhaustDate");
    m_exhaustDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationType")) {
    m_applicationType = ApplicationTypeMapper::GetApplicationTypeForName(jsonValue.GetString("applicationType"));
    m_applicationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shareableAccounts")) {
    Aws::Utils::Array<JsonView> shareableAccountsJsonList = jsonValue.GetArray("shareableAccounts");
    for (unsigned shareableAccountsIndex = 0; shareableAccountsIndex < shareableAccountsJsonList.GetLength(); ++shareableAccountsIndex) {
      m_shareableAccounts.push_back(shareableAccountsJsonList[shareableAccountsIndex].AsString());
    }
    m_shareableAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("accountHasCreditSharingEnabled")) {
    m_accountHasCreditSharingEnabled = jsonValue.GetBool("accountHasCreditSharingEnabled");
    m_accountHasCreditSharingEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creditConsoleVisibility")) {
    m_creditConsoleVisibility = jsonValue.GetString("creditConsoleVisibility");
    m_creditConsoleVisibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creditSharingType")) {
    m_creditSharingType = CreditSharingTypeMapper::GetCreditSharingTypeForName(jsonValue.GetString("creditSharingType"));
    m_creditSharingTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("costCategoryArn")) {
    m_costCategoryArn = jsonValue.GetString("costCategoryArn");
    m_costCategoryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ruleName")) {
    m_ruleName = jsonValue.GetString("ruleName");
    m_ruleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creditStatus")) {
    m_creditStatus = CreditStatusMapper::GetCreditStatusForName(jsonValue.GetString("creditStatus"));
    m_creditStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("purchaseTypeApplications")) {
    Aws::Utils::Array<JsonView> purchaseTypeApplicationsJsonList = jsonValue.GetArray("purchaseTypeApplications");
    for (unsigned purchaseTypeApplicationsIndex = 0; purchaseTypeApplicationsIndex < purchaseTypeApplicationsJsonList.GetLength();
         ++purchaseTypeApplicationsIndex) {
      m_purchaseTypeApplications.push_back(purchaseTypeApplicationsJsonList[purchaseTypeApplicationsIndex].AsString());
    }
    m_purchaseTypeApplicationsHasBeenSet = true;
  }
  return *this;
}

JsonValue CreditData::Jsonize() const {
  JsonValue payload;

  if (m_creditIdHasBeenSet) {
    payload.WithString("creditId", m_creditId);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_creditTypeHasBeenSet) {
    payload.WithString("creditType", m_creditType);
  }

  if (m_initialAmountHasBeenSet) {
    payload.WithObject("initialAmount", m_initialAmount.Jsonize());
  }

  if (m_remainingAmountHasBeenSet) {
    payload.WithObject("remainingAmount", m_remainingAmount.Jsonize());
  }

  if (m_estimatedAmountHasBeenSet) {
    payload.WithObject("estimatedAmount", m_estimatedAmount.Jsonize());
  }

  if (m_applicableProductNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> applicableProductNamesJsonList(m_applicableProductNames.size());
    for (unsigned applicableProductNamesIndex = 0; applicableProductNamesIndex < applicableProductNamesJsonList.GetLength();
         ++applicableProductNamesIndex) {
      applicableProductNamesJsonList[applicableProductNamesIndex].AsString(m_applicableProductNames[applicableProductNamesIndex]);
    }
    payload.WithArray("applicableProductNames", std::move(applicableProductNamesJsonList));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_startDateHasBeenSet) {
    payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if (m_endDateHasBeenSet) {
    payload.WithDouble("endDate", m_endDate.SecondsWithMSPrecision());
  }

  if (m_exhaustDateHasBeenSet) {
    payload.WithDouble("exhaustDate", m_exhaustDate.SecondsWithMSPrecision());
  }

  if (m_applicationTypeHasBeenSet) {
    payload.WithString("applicationType", ApplicationTypeMapper::GetNameForApplicationType(m_applicationType));
  }

  if (m_shareableAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> shareableAccountsJsonList(m_shareableAccounts.size());
    for (unsigned shareableAccountsIndex = 0; shareableAccountsIndex < shareableAccountsJsonList.GetLength(); ++shareableAccountsIndex) {
      shareableAccountsJsonList[shareableAccountsIndex].AsString(m_shareableAccounts[shareableAccountsIndex]);
    }
    payload.WithArray("shareableAccounts", std::move(shareableAccountsJsonList));
  }

  if (m_accountHasCreditSharingEnabledHasBeenSet) {
    payload.WithBool("accountHasCreditSharingEnabled", m_accountHasCreditSharingEnabled);
  }

  if (m_creditConsoleVisibilityHasBeenSet) {
    payload.WithString("creditConsoleVisibility", m_creditConsoleVisibility);
  }

  if (m_creditSharingTypeHasBeenSet) {
    payload.WithString("creditSharingType", CreditSharingTypeMapper::GetNameForCreditSharingType(m_creditSharingType));
  }

  if (m_costCategoryArnHasBeenSet) {
    payload.WithString("costCategoryArn", m_costCategoryArn);
  }

  if (m_ruleNameHasBeenSet) {
    payload.WithString("ruleName", m_ruleName);
  }

  if (m_creditStatusHasBeenSet) {
    payload.WithString("creditStatus", CreditStatusMapper::GetNameForCreditStatus(m_creditStatus));
  }

  if (m_purchaseTypeApplicationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> purchaseTypeApplicationsJsonList(m_purchaseTypeApplications.size());
    for (unsigned purchaseTypeApplicationsIndex = 0; purchaseTypeApplicationsIndex < purchaseTypeApplicationsJsonList.GetLength();
         ++purchaseTypeApplicationsIndex) {
      purchaseTypeApplicationsJsonList[purchaseTypeApplicationsIndex].AsString(m_purchaseTypeApplications[purchaseTypeApplicationsIndex]);
    }
    payload.WithArray("purchaseTypeApplications", std::move(purchaseTypeApplicationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
