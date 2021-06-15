/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateLocationObjectStorageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLocationObjectStorageRequest::UpdateLocationObjectStorageRequest() : 
    m_locationArnHasBeenSet(false),
    m_serverPort(0),
    m_serverPortHasBeenSet(false),
    m_serverProtocol(ObjectStorageServerProtocol::NOT_SET),
    m_serverProtocolHasBeenSet(false),
    m_subdirectoryHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_agentArnsHasBeenSet(false)
{
}

Aws::String UpdateLocationObjectStorageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_serverPortHasBeenSet)
  {
   payload.WithInteger("ServerPort", m_serverPort);

  }

  if(m_serverProtocolHasBeenSet)
  {
   payload.WithString("ServerProtocol", ObjectStorageServerProtocolMapper::GetNameForObjectStorageServerProtocol(m_serverProtocol));
  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_accessKeyHasBeenSet)
  {
   payload.WithString("AccessKey", m_accessKey);

  }

  if(m_secretKeyHasBeenSet)
  {
   payload.WithString("SecretKey", m_secretKey);

  }

  if(m_agentArnsHasBeenSet)
  {
   Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLocationObjectStorageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateLocationObjectStorage"));
  return headers;

}




