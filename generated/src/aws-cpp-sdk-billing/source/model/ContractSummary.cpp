/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ContractSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

ContractSummary::ContractSummary(JsonView jsonValue) { *this = jsonValue; }

ContractSummary& ContractSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contractArn")) {
    m_contractArn = jsonValue.GetString("contractArn");
    m_contractArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractTerm")) {
    m_contractTerm = jsonValue.GetObject("contractTerm");
    m_contractTermHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contractType")) {
    m_contractType = ContractTypeMapper::GetContractTypeForName(jsonValue.GetString("contractType"));
    m_contractTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("associationStatus")) {
    m_associationStatus = AssociationStatusMapper::GetAssociationStatusForName(jsonValue.GetString("associationStatus"));
    m_associationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ContractSummary::Jsonize() const {
  JsonValue payload;

  if (m_contractArnHasBeenSet) {
    payload.WithString("contractArn", m_contractArn);
  }

  if (m_contractTermHasBeenSet) {
    payload.WithObject("contractTerm", m_contractTerm.Jsonize());
  }

  if (m_contractTypeHasBeenSet) {
    payload.WithString("contractType", ContractTypeMapper::GetNameForContractType(m_contractType));
  }

  if (m_associationStatusHasBeenSet) {
    payload.WithString("associationStatus", AssociationStatusMapper::GetNameForAssociationStatus(m_associationStatus));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
