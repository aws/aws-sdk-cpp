/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/DeleteSubdomainRequest.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteSubdomainRequest::SerializePayload() const {
  JsonValue payload;

  if (m_subdomainNameHasBeenSet) {
    payload.WithString("subdomainName", m_subdomainName);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteSubdomainRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DeleteSubdomain"));
  return headers;
}
