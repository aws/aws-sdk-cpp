/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ListIntegrationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListIntegrationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationNamePrefixHasBeenSet)
  {
   payload.WithString("integrationNamePrefix", m_integrationNamePrefix);

  }

  if(m_integrationTypeHasBeenSet)
  {
   payload.WithString("integrationType", IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType));
  }

  if(m_integrationStatusHasBeenSet)
  {
   payload.WithString("integrationStatus", IntegrationStatusMapper::GetNameForIntegrationStatus(m_integrationStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListIntegrationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.ListIntegrations"));
  return headers;

}




