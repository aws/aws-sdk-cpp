/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/CancelContractualInvestmentAttestationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelContractualInvestmentAttestationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_attestationIdHasBeenSet) {
    payload.WithString("attestationId", m_attestationId);
  }

  if (m_contractArnHasBeenSet) {
    payload.WithString("contractArn", m_contractArn);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelContractualInvestmentAttestationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.CancelContractualInvestmentAttestation"));
  return headers;
}
