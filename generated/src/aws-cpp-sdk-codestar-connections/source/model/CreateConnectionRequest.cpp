/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/CreateConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateConnectionRequest::CreateConnectionRequest() : 
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_connectionNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_hostArnHasBeenSet(false)
{
}

Aws::String CreateConnectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_connectionNameHasBeenSet)
  {
   payload.WithString("ConnectionName", m_connectionName);

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

  if(m_hostArnHasBeenSet)
  {
   payload.WithString("HostArn", m_hostArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateConnectionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codestar.connections.CodeStar_connections_20191201.CreateConnection"));
  return headers;

}




