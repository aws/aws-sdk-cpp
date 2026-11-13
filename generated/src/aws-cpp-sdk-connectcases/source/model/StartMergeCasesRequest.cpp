/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/StartMergeCasesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartMergeCasesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_secondaryCaseIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> secondaryCaseIdsJsonList(m_secondaryCaseIds.size());
    for (unsigned secondaryCaseIdsIndex = 0; secondaryCaseIdsIndex < secondaryCaseIdsJsonList.GetLength(); ++secondaryCaseIdsIndex) {
      secondaryCaseIdsJsonList[secondaryCaseIdsIndex].AsString(m_secondaryCaseIds[secondaryCaseIdsIndex]);
    }
    payload.WithArray("secondaryCaseIds", std::move(secondaryCaseIdsJsonList));
  }

  if (m_fieldsConfigurationHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldsConfigurationJsonList(m_fieldsConfiguration.size());
    for (unsigned fieldsConfigurationIndex = 0; fieldsConfigurationIndex < fieldsConfigurationJsonList.GetLength();
         ++fieldsConfigurationIndex) {
      fieldsConfigurationJsonList[fieldsConfigurationIndex].AsObject(m_fieldsConfiguration[fieldsConfigurationIndex].Jsonize());
    }
    payload.WithArray("fieldsConfiguration", std::move(fieldsConfigurationJsonList));
  }

  if (m_relatedItemsConfigurationHasBeenSet) {
    payload.WithObject("relatedItemsConfiguration", m_relatedItemsConfiguration.Jsonize());
  }

  if (m_performedByHasBeenSet) {
    payload.WithObject("performedBy", m_performedBy.Jsonize());
  }

  return payload.View().WriteReadable();
}
