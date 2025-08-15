/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ModifyIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ModifyIntegrationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_integrationIdentifierHasBeenSet)
  {
   payload.WithString("IntegrationIdentifier", m_integrationIdentifier);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dataFilterHasBeenSet)
  {
   payload.WithString("DataFilter", m_dataFilter);

  }

  if(m_integrationConfigHasBeenSet)
  {
   payload.WithObject("IntegrationConfig", m_integrationConfig.Jsonize());

  }

  if(m_integrationNameHasBeenSet)
  {
   payload.WithString("IntegrationName", m_integrationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyIntegrationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ModifyIntegration"));
  return headers;

}




