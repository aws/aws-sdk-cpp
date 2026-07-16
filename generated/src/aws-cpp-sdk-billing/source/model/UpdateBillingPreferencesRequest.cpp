/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/UpdateBillingPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBillingPreferencesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_featureHasBeenSet) {
    payload.WithString("feature", BillingFeatureMapper::GetNameForBillingFeature(m_feature));
  }

  if (m_billingPreferencesPerKeyHasBeenSet) {
    Aws::Utils::Array<JsonValue> billingPreferencesPerKeyJsonList(m_billingPreferencesPerKey.size());
    for (unsigned billingPreferencesPerKeyIndex = 0; billingPreferencesPerKeyIndex < billingPreferencesPerKeyJsonList.GetLength();
         ++billingPreferencesPerKeyIndex) {
      billingPreferencesPerKeyJsonList[billingPreferencesPerKeyIndex].AsObject(
          m_billingPreferencesPerKey[billingPreferencesPerKeyIndex].Jsonize());
    }
    payload.WithArray("billingPreferencesPerKey", std::move(billingPreferencesPerKeyJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateBillingPreferencesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.UpdateBillingPreferences"));
  return headers;
}
