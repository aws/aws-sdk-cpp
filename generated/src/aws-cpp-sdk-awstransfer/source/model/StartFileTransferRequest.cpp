/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/StartFileTransferRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartFileTransferRequest::StartFileTransferRequest() : 
    m_connectorIdHasBeenSet(false),
    m_sendFilePathsHasBeenSet(false),
    m_retrieveFilePathsHasBeenSet(false),
    m_localDirectoryPathHasBeenSet(false),
    m_remoteDirectoryPathHasBeenSet(false)
{
}

Aws::String StartFileTransferRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_connectorIdHasBeenSet)
  {
   payload.WithString("ConnectorId", m_connectorId);

  }

  if(m_sendFilePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sendFilePathsJsonList(m_sendFilePaths.size());
   for(unsigned sendFilePathsIndex = 0; sendFilePathsIndex < sendFilePathsJsonList.GetLength(); ++sendFilePathsIndex)
   {
     sendFilePathsJsonList[sendFilePathsIndex].AsString(m_sendFilePaths[sendFilePathsIndex]);
   }
   payload.WithArray("SendFilePaths", std::move(sendFilePathsJsonList));

  }

  if(m_retrieveFilePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> retrieveFilePathsJsonList(m_retrieveFilePaths.size());
   for(unsigned retrieveFilePathsIndex = 0; retrieveFilePathsIndex < retrieveFilePathsJsonList.GetLength(); ++retrieveFilePathsIndex)
   {
     retrieveFilePathsJsonList[retrieveFilePathsIndex].AsString(m_retrieveFilePaths[retrieveFilePathsIndex]);
   }
   payload.WithArray("RetrieveFilePaths", std::move(retrieveFilePathsJsonList));

  }

  if(m_localDirectoryPathHasBeenSet)
  {
   payload.WithString("LocalDirectoryPath", m_localDirectoryPath);

  }

  if(m_remoteDirectoryPathHasBeenSet)
  {
   payload.WithString("RemoteDirectoryPath", m_remoteDirectoryPath);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartFileTransferRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TransferService.StartFileTransfer"));
  return headers;

}




