﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ListFindingAggregationsRequest.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListFindingAggregationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_aggregationTypeHasBeenSet) {
    payload.WithString("aggregationType", AggregationTypeMapper::GetNameForAggregationType(m_aggregationType));
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_accountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
    for (unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex) {
      accountIdsJsonList[accountIdsIndex].AsObject(m_accountIds[accountIdsIndex].Jsonize());
    }
    payload.WithArray("accountIds", std::move(accountIdsJsonList));
  }

  if (m_aggregationRequestHasBeenSet) {
    payload.WithObject("aggregationRequest", m_aggregationRequest.Jsonize());
  }

  return payload.View().WriteReadable();
}
