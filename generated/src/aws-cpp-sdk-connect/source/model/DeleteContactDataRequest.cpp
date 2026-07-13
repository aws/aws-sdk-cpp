/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteContactDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteContactDataRequest::SerializePayload() const {
  JsonValue payload;

  if (m_contactFieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> contactFieldsJsonList(m_contactFields.size());
    for (unsigned contactFieldsIndex = 0; contactFieldsIndex < contactFieldsJsonList.GetLength(); ++contactFieldsIndex) {
      contactFieldsJsonList[contactFieldsIndex].AsString(ContactFieldMapper::GetNameForContactField(m_contactFields[contactFieldsIndex]));
    }
    payload.WithArray("ContactFields", std::move(contactFieldsJsonList));
  }

  return payload.View().WriteReadable();
}
