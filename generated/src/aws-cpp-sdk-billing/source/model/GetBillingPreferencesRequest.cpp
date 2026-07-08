/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/GetBillingPreferencesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetBillingPreferencesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_featuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
    for (unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex) {
      featuresJsonList[featuresIndex].AsString(BillingFeatureMapper::GetNameForBillingFeature(m_features[featuresIndex]));
    }
    payload.WithArray("features", std::move(featuresJsonList));
  }

  if (m_filtersHasBeenSet) {
    Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
    for (unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex) {
      filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
    }
    payload.WithArray("filters", std::move(filtersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetBillingPreferencesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBilling.GetBillingPreferences"));
  return headers;
}
