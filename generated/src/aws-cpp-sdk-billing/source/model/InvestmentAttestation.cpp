/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/InvestmentAttestation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

InvestmentAttestation::InvestmentAttestation(JsonView jsonValue) { *this = jsonValue; }

InvestmentAttestation& InvestmentAttestation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attestationId")) {
    m_attestationId = jsonValue.GetString("attestationId");
    m_attestationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentName")) {
    m_investmentName = jsonValue.GetString("investmentName");
    m_investmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outcomeDescription")) {
    m_outcomeDescription = jsonValue.GetString("outcomeDescription");
    m_outcomeDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentSummaryId")) {
    m_investmentSummaryId = jsonValue.GetString("investmentSummaryId");
    m_investmentSummaryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentId")) {
    m_investmentId = jsonValue.GetString("investmentId");
    m_investmentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestedAt")) {
    m_attestedAt = jsonValue.GetDouble("attestedAt");
    m_attestedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestationStatus")) {
    m_attestationStatus =
        InvestmentAttestationStatusMapper::GetInvestmentAttestationStatusForName(jsonValue.GetString("attestationStatus"));
    m_attestationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentDisbursedAt")) {
    m_investmentDisbursedAt = jsonValue.GetDouble("investmentDisbursedAt");
    m_investmentDisbursedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attestedValue")) {
    m_attestedValue = jsonValue.GetObject("attestedValue");
    m_attestedValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("investmentDistributions")) {
    Aws::Utils::Array<JsonView> investmentDistributionsJsonList = jsonValue.GetArray("investmentDistributions");
    for (unsigned investmentDistributionsIndex = 0; investmentDistributionsIndex < investmentDistributionsJsonList.GetLength();
         ++investmentDistributionsIndex) {
      m_investmentDistributions.push_back(investmentDistributionsJsonList[investmentDistributionsIndex].AsObject());
    }
    m_investmentDistributionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rejectionReasons")) {
    Aws::Utils::Array<JsonView> rejectionReasonsJsonList = jsonValue.GetArray("rejectionReasons");
    for (unsigned rejectionReasonsIndex = 0; rejectionReasonsIndex < rejectionReasonsJsonList.GetLength(); ++rejectionReasonsIndex) {
      m_rejectionReasons.push_back(rejectionReasonsJsonList[rejectionReasonsIndex].AsString());
    }
    m_rejectionReasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isCancellable")) {
    m_isCancellable = jsonValue.GetBool("isCancellable");
    m_isCancellableHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestmentAttestation::Jsonize() const {
  JsonValue payload;

  if (m_attestationIdHasBeenSet) {
    payload.WithString("attestationId", m_attestationId);
  }

  if (m_investmentNameHasBeenSet) {
    payload.WithString("investmentName", m_investmentName);
  }

  if (m_outcomeDescriptionHasBeenSet) {
    payload.WithString("outcomeDescription", m_outcomeDescription);
  }

  if (m_investmentSummaryIdHasBeenSet) {
    payload.WithString("investmentSummaryId", m_investmentSummaryId);
  }

  if (m_investmentIdHasBeenSet) {
    payload.WithString("investmentId", m_investmentId);
  }

  if (m_attestedAtHasBeenSet) {
    payload.WithDouble("attestedAt", m_attestedAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_attestationStatusHasBeenSet) {
    payload.WithString("attestationStatus", InvestmentAttestationStatusMapper::GetNameForInvestmentAttestationStatus(m_attestationStatus));
  }

  if (m_investmentDisbursedAtHasBeenSet) {
    payload.WithDouble("investmentDisbursedAt", m_investmentDisbursedAt.SecondsWithMSPrecision());
  }

  if (m_attestedValueHasBeenSet) {
    payload.WithObject("attestedValue", m_attestedValue.Jsonize());
  }

  if (m_investmentDistributionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> investmentDistributionsJsonList(m_investmentDistributions.size());
    for (unsigned investmentDistributionsIndex = 0; investmentDistributionsIndex < investmentDistributionsJsonList.GetLength();
         ++investmentDistributionsIndex) {
      investmentDistributionsJsonList[investmentDistributionsIndex].AsObject(
          m_investmentDistributions[investmentDistributionsIndex].Jsonize());
    }
    payload.WithArray("investmentDistributions", std::move(investmentDistributionsJsonList));
  }

  if (m_rejectionReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> rejectionReasonsJsonList(m_rejectionReasons.size());
    for (unsigned rejectionReasonsIndex = 0; rejectionReasonsIndex < rejectionReasonsJsonList.GetLength(); ++rejectionReasonsIndex) {
      rejectionReasonsJsonList[rejectionReasonsIndex].AsString(m_rejectionReasons[rejectionReasonsIndex]);
    }
    payload.WithArray("rejectionReasons", std::move(rejectionReasonsJsonList));
  }

  if (m_isCancellableHasBeenSet) {
    payload.WithBool("isCancellable", m_isCancellable);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
