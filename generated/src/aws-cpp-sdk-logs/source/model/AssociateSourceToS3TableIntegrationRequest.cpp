/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/AssociateSourceToS3TableIntegrationRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateSourceToS3TableIntegrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_integrationArnHasBeenSet) {
    payload.WithString("integrationArn", m_integrationArn);
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("dataSource", m_dataSource.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateSourceToS3TableIntegrationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.AssociateSourceToS3TableIntegration"));
  return headers;
}
