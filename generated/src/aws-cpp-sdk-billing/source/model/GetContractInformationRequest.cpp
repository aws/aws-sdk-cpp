/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/GetContractInformationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetContractInformationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_contractArnHasBeenSet) {
    payload.WithString("contractArn", m_contractArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetContractInformationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.GetContractInformation"));
  return headers;
}
