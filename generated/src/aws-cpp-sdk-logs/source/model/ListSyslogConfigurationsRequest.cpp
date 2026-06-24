/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ListSyslogConfigurationsRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListSyslogConfigurationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_logGroupIdentifierHasBeenSet) {
    payload.WithString("logGroupIdentifier", m_logGroupIdentifier);
  }

  if (m_vpcEndpointIdHasBeenSet) {
    payload.WithString("vpcEndpointId", m_vpcEndpointId);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListSyslogConfigurationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.ListSyslogConfigurations"));
  return headers;
}
