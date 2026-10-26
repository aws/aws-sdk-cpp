/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/PrivatePricingAddendum.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

PrivatePricingAddendum::PrivatePricingAddendum(JsonView jsonValue) { *this = jsonValue; }

PrivatePricingAddendum& PrivatePricingAddendum::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contractArn")) {
    m_contractArn = jsonValue.GetString("contractArn");
    m_contractArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractTerm")) {
    m_contractTerm = jsonValue.GetObject("contractTerm");
    m_contractTermHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligiblePayerAccounts")) {
    Aws::Utils::Array<JsonView> eligiblePayerAccountsJsonList = jsonValue.GetArray("eligiblePayerAccounts");
    for (unsigned eligiblePayerAccountsIndex = 0; eligiblePayerAccountsIndex < eligiblePayerAccountsJsonList.GetLength();
         ++eligiblePayerAccountsIndex) {
      m_eligiblePayerAccounts.push_back(eligiblePayerAccountsJsonList[eligiblePayerAccountsIndex].AsString());
    }
    m_eligiblePayerAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentAccounts")) {
    Aws::Utils::Array<JsonView> investmentAccountsJsonList = jsonValue.GetArray("investmentAccounts");
    for (unsigned investmentAccountsIndex = 0; investmentAccountsIndex < investmentAccountsJsonList.GetLength();
         ++investmentAccountsIndex) {
      m_investmentAccounts.push_back(investmentAccountsJsonList[investmentAccountsIndex].AsString());
    }
    m_investmentAccountsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("legalEntities")) {
    Aws::Utils::Array<JsonView> legalEntitiesJsonList = jsonValue.GetArray("legalEntities");
    for (unsigned legalEntitiesIndex = 0; legalEntitiesIndex < legalEntitiesJsonList.GetLength(); ++legalEntitiesIndex) {
      m_legalEntities.push_back(legalEntitiesJsonList[legalEntitiesIndex].AsObject());
    }
    m_legalEntitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractRestrictions")) {
    Aws::Utils::Array<JsonView> contractRestrictionsJsonList = jsonValue.GetArray("contractRestrictions");
    for (unsigned contractRestrictionsIndex = 0; contractRestrictionsIndex < contractRestrictionsJsonList.GetLength();
         ++contractRestrictionsIndex) {
      m_contractRestrictions.push_back(
          ContractRestrictionMapper::GetContractRestrictionForName(contractRestrictionsJsonList[contractRestrictionsIndex].AsString()));
    }
    m_contractRestrictionsHasBeenSet = true;
  }
  return *this;
}

JsonValue PrivatePricingAddendum::Jsonize() const {
  JsonValue payload;

  if (m_contractArnHasBeenSet) {
    payload.WithString("contractArn", m_contractArn);
  }

  if (m_contractTermHasBeenSet) {
    payload.WithObject("contractTerm", m_contractTerm.Jsonize());
  }

  if (m_eligiblePayerAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> eligiblePayerAccountsJsonList(m_eligiblePayerAccounts.size());
    for (unsigned eligiblePayerAccountsIndex = 0; eligiblePayerAccountsIndex < eligiblePayerAccountsJsonList.GetLength();
         ++eligiblePayerAccountsIndex) {
      eligiblePayerAccountsJsonList[eligiblePayerAccountsIndex].AsString(m_eligiblePayerAccounts[eligiblePayerAccountsIndex]);
    }
    payload.WithArray("eligiblePayerAccounts", std::move(eligiblePayerAccountsJsonList));
  }

  if (m_investmentAccountsHasBeenSet) {
    Aws::Utils::Array<JsonValue> investmentAccountsJsonList(m_investmentAccounts.size());
    for (unsigned investmentAccountsIndex = 0; investmentAccountsIndex < investmentAccountsJsonList.GetLength();
         ++investmentAccountsIndex) {
      investmentAccountsJsonList[investmentAccountsIndex].AsString(m_investmentAccounts[investmentAccountsIndex]);
    }
    payload.WithArray("investmentAccounts", std::move(investmentAccountsJsonList));
  }

  if (m_legalEntitiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> legalEntitiesJsonList(m_legalEntities.size());
    for (unsigned legalEntitiesIndex = 0; legalEntitiesIndex < legalEntitiesJsonList.GetLength(); ++legalEntitiesIndex) {
      legalEntitiesJsonList[legalEntitiesIndex].AsObject(m_legalEntities[legalEntitiesIndex].Jsonize());
    }
    payload.WithArray("legalEntities", std::move(legalEntitiesJsonList));
  }

  if (m_contractRestrictionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> contractRestrictionsJsonList(m_contractRestrictions.size());
    for (unsigned contractRestrictionsIndex = 0; contractRestrictionsIndex < contractRestrictionsJsonList.GetLength();
         ++contractRestrictionsIndex) {
      contractRestrictionsJsonList[contractRestrictionsIndex].AsString(
          ContractRestrictionMapper::GetNameForContractRestriction(m_contractRestrictions[contractRestrictionsIndex]));
    }
    payload.WithArray("contractRestrictions", std::move(contractRestrictionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
