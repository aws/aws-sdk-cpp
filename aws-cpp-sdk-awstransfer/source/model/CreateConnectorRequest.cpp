/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CreateConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectorRequest::CreateConnectorRequest() : 
    m_urlHasBeenSet(false),
    m_as2ConfigHasBeenSet(false),
    m_accessRoleHasBeenSet(false),
    m_loggingRoleHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_as2ConfigHasBeenSet)
  {
   payload.WithObject("As2Config", m_as2Config.Jsonize());

  }

  if(m_accessRoleHasBeenSet)
  {
   payload.WithString("AccessRole", m_accessRole);

  }

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConnectorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.CreateConnector"));
  return headers;

}




