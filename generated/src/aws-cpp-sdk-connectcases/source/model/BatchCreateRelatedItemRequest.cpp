/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchCreateRelatedItemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchCreateRelatedItemRequest::SerializePayload() const {
  JsonValue payload;

  if (m_domainIdHasBeenSet) {
    payload.WithString("domainId", m_domainId);
  }

  if (m_contentHasBeenSet) {
    payload.WithObject("content", m_content.Jsonize());
  }

  if (m_casesHasBeenSet) {
    Aws::Utils::Array<JsonValue> casesJsonList(m_cases.size());
    for (unsigned casesIndex = 0; casesIndex < casesJsonList.GetLength(); ++casesIndex) {
      casesJsonList[casesIndex].AsObject(m_cases[casesIndex].Jsonize());
    }
    payload.WithArray("cases", std::move(casesJsonList));
  }

  if (m_performedByHasBeenSet) {
    payload.WithObject("performedBy", m_performedBy.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
