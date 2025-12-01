/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/PutDomainObjectTypeRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutDomainObjectTypeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_encryptionKeyHasBeenSet) {
    payload.WithString("EncryptionKey", m_encryptionKey);
  }

  if (m_fieldsHasBeenSet) {
    JsonValue fieldsJsonMap;
    for (auto& fieldsItem : m_fields) {
      fieldsJsonMap.WithObject(fieldsItem.first, fieldsItem.second.Jsonize());
    }
    payload.WithObject("Fields", std::move(fieldsJsonMap));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
