/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/BatchGetIterableFormsRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchGetIterableFormsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_assetIdentifierHasBeenSet) {
    payload.WithString("AssetIdentifier", m_assetIdentifier);
  }

  if (m_iterableFormNameHasBeenSet) {
    payload.WithString("IterableFormName", m_iterableFormName);
  }

  if (m_itemIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> itemIdentifiersJsonList(m_itemIdentifiers.size());
    for (unsigned itemIdentifiersIndex = 0; itemIdentifiersIndex < itemIdentifiersJsonList.GetLength(); ++itemIdentifiersIndex) {
      itemIdentifiersJsonList[itemIdentifiersIndex].AsString(m_itemIdentifiers[itemIdentifiersIndex]);
    }
    payload.WithArray("ItemIdentifiers", std::move(itemIdentifiersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetIterableFormsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.BatchGetIterableForms"));
  return headers;
}
