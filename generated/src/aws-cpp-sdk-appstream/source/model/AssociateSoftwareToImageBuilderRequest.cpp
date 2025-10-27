/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AssociateSoftwareToImageBuilderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateSoftwareToImageBuilderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_imageBuilderNameHasBeenSet) {
    payload.WithString("ImageBuilderName", m_imageBuilderName);
  }

  if (m_softwareNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> softwareNamesJsonList(m_softwareNames.size());
    for (unsigned softwareNamesIndex = 0; softwareNamesIndex < softwareNamesJsonList.GetLength(); ++softwareNamesIndex) {
      softwareNamesJsonList[softwareNamesIndex].AsString(m_softwareNames[softwareNamesIndex]);
    }
    payload.WithArray("SoftwareNames", std::move(softwareNamesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateSoftwareToImageBuilderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.AssociateSoftwareToImageBuilder"));
  return headers;
}
