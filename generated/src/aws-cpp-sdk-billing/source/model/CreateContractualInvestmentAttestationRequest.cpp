/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/CreateContractualInvestmentAttestationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateContractualInvestmentAttestationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_contractArnHasBeenSet) {
    payload.WithString("contractArn", m_contractArn);
  }

  if (m_investmentSummaryIdHasBeenSet) {
    payload.WithString("investmentSummaryId", m_investmentSummaryId);
  }

  if (m_investmentIdHasBeenSet) {
    payload.WithString("investmentId", m_investmentId);
  }

  if (m_contractDocumentIdHasBeenSet) {
    payload.WithString("contractDocumentId", m_contractDocumentId);
  }

  if (m_approverDetailsHasBeenSet) {
    payload.WithObject("approverDetails", m_approverDetails.Jsonize());
  }

  if (m_investmentDisbursedAtHasBeenSet) {
    payload.WithDouble("investmentDisbursedAt", m_investmentDisbursedAt.SecondsWithMSPrecision());
  }

  if (m_attestationDetailsHasBeenSet) {
    payload.WithObject("attestationDetails", m_attestationDetails.Jsonize());
  }

  if (m_additionalRecipientsHasBeenSet) {
    Aws::Utils::Array<JsonValue> additionalRecipientsJsonList(m_additionalRecipients.size());
    for (unsigned additionalRecipientsIndex = 0; additionalRecipientsIndex < additionalRecipientsJsonList.GetLength();
         ++additionalRecipientsIndex) {
      additionalRecipientsJsonList[additionalRecipientsIndex].AsObject(m_additionalRecipients[additionalRecipientsIndex].Jsonize());
    }
    payload.WithArray("additionalRecipients", std::move(additionalRecipientsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateContractualInvestmentAttestationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.CreateContractualInvestmentAttestation"));
  return headers;
}
