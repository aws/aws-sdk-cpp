﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DeleteIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationNameHasBeenSet)
  {
   payload.WithString("integrationName", m_integrationName);

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteIntegrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DeleteIntegration"));
  return headers;

}




