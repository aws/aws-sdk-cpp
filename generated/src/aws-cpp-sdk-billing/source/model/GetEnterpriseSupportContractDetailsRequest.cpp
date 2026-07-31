/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/GetEnterpriseSupportContractDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetEnterpriseSupportContractDetailsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_billingMonthHasBeenSet) {
    payload.WithString("billingMonth", m_billingMonth);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEnterpriseSupportContractDetailsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.GetEnterpriseSupportContractDetails"));
  return headers;
}
