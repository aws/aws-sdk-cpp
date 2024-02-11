/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateStorageSystemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateStorageSystemRequest::UpdateStorageSystemRequest() : 
    m_storageSystemArnHasBeenSet(false),
    m_serverConfigurationHasBeenSet(false),
    m_agentArnsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_credentialsHasBeenSet(false)
{
}

Aws::String UpdateStorageSystemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_storageSystemArnHasBeenSet)
  {
   payload.WithString("StorageSystemArn", m_storageSystemArn);

  }

  if(m_serverConfigurationHasBeenSet)
  {
   payload.WithObject("ServerConfiguration", m_serverConfiguration.Jsonize());

  }

  if(m_agentArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  if(m_credentialsHasBeenSet)
  {
   payload.WithObject("Credentials", m_credentials.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStorageSystemRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateStorageSystem"));
  return headers;

}




