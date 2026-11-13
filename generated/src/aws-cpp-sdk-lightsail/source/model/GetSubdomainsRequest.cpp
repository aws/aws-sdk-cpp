/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/GetSubdomainsRequest.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetSubdomainsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_subdomainNameHasBeenSet) {
    payload.WithString("subdomainName", m_subdomainName);
  }

  if (m_pageTokenHasBeenSet) {
    payload.WithString("pageToken", m_pageToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetSubdomainsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetSubdomains"));
  return headers;
}
