/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchUpdateCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchUpdateCaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_domainIdHasBeenSet) {
    payload.WithString("domainId", m_domainId);
  }

  if (m_casesHasBeenSet) {
    Aws::Utils::Array<JsonValue> casesJsonList(m_cases.size());
    for (unsigned casesIndex = 0; casesIndex < casesJsonList.GetLength(); ++casesIndex) {
      casesJsonList[casesIndex].AsObject(m_cases[casesIndex].Jsonize());
    }
    payload.WithArray("cases", std::move(casesJsonList));
  }

  if (m_fieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
    for (unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex) {
      fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
    }
    payload.WithArray("fields", std::move(fieldsJsonList));
  }

  if (m_performedByHasBeenSet) {
    payload.WithObject("performedBy", m_performedBy.Jsonize());
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_customerIdHasBeenSet) {
    payload.WithString("customerId", m_customerId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
