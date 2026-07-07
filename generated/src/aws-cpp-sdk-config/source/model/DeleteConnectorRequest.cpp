/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DeleteConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteConnectorRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DeleteConnector"));
  return headers;
}
