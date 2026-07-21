/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/VerifyProcurementPortalValidationRequest.h>

#include <utility>

using namespace Aws::Invoicing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String VerifyProcurementPortalValidationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_procurementPortalPreferenceArnHasBeenSet) {
    payload.WithString("ProcurementPortalPreferenceArn", m_procurementPortalPreferenceArn);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", m_code);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection VerifyProcurementPortalValidationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Invoicing.VerifyProcurementPortalValidation"));
  return headers;
}
