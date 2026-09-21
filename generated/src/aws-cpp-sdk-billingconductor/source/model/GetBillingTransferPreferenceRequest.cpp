/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/GetBillingTransferPreferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BillingConductor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetBillingTransferPreferenceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_responsibilityTransferArnHasBeenSet) {
    payload.WithString("ResponsibilityTransferArn", m_responsibilityTransferArn);
  }

  return payload.View().WriteReadable();
}
