/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/PutSyslogConfigurationRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutSyslogConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_logGroupIdentifierHasBeenSet) {
    payload.WithString("logGroupIdentifier", m_logGroupIdentifier);
  }

  if (m_vpcEndpointIdHasBeenSet) {
    payload.WithString("vpcEndpointId", m_vpcEndpointId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutSyslogConfigurationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.PutSyslogConfiguration"));
  return headers;
}
