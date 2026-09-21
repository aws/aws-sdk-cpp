/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/UpdateBillingTransferPreferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBillingTransferPreferenceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_responsibilityTransferArnHasBeenSet) {
    payload.WithString("ResponsibilityTransferArn", m_responsibilityTransferArn);
  }

  if (m_autoBillingTransferBillingGroupCreationHasBeenSet) {
    payload.WithObject("AutoBillingTransferBillingGroupCreation", m_autoBillingTransferBillingGroupCreation.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBillingTransferPreferenceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    headers.emplace("x-amzn-client-token", ss.str());
    ss.str("");
  }

  return headers;
}
