/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationObjectStorageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLocationObjectStorageRequest::CreateLocationObjectStorageRequest() : 
    m_serverHostnameHasBeenSet(false),
    m_serverPort(0),
    m_serverPortHasBeenSet(false),
    m_serverProtocol(ObjectStorageServerProtocol::NOT_SET),
    m_serverProtocolHasBeenSet(false),
    m_subdirectoryHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_agentArnsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_serverCertificateHasBeenSet(false)
{
}

Aws::String CreateLocationObjectStorageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverHostnameHasBeenSet)
  {
   payload.WithString("ServerHostname", m_serverHostname);

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

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("BucketName", m_bucketName);

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
   Aws::Utils::Array<JsonValue> agentArnsJsonList(m_agentArns.size());
   for(unsigned agentArnsIndex = 0; agentArnsIndex < agentArnsJsonList.GetLength(); ++agentArnsIndex)
   {
     agentArnsJsonList[agentArnsIndex].AsString(m_agentArns[agentArnsIndex]);
   }
   payload.WithArray("AgentArns", std::move(agentArnsJsonList));

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

  if(m_serverCertificateHasBeenSet)
  {
   payload.WithString("ServerCertificate", HashingUtils::Base64Encode(m_serverCertificate));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLocationObjectStorageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationObjectStorage"));
  return headers;

}




