/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/UpdateRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRecordsRequest::UpdateRecordsRequest() : 
    m_identityPoolIdHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_recordPatchesHasBeenSet(false),
    m_syncSessionTokenHasBeenSet(false),
    m_clientContextHasBeenSet(false)
{
}

Aws::String UpdateRecordsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceIdHasBeenSet)
  {
   payload.WithString("DeviceId", m_deviceId);

  }

  if(m_recordPatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordPatchesJsonList(m_recordPatches.size());
   for(unsigned recordPatchesIndex = 0; recordPatchesIndex < recordPatchesJsonList.GetLength(); ++recordPatchesIndex)
   {
     recordPatchesJsonList[recordPatchesIndex].AsObject(m_recordPatches[recordPatchesIndex].Jsonize());
   }
   payload.WithArray("RecordPatches", std::move(recordPatchesJsonList));

  }

  if(m_syncSessionTokenHasBeenSet)
  {
   payload.WithString("SyncSessionToken", m_syncSessionToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRecordsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientContextHasBeenSet)
  {
    ss << m_clientContext;
    headers.emplace("x-amz-client-context",  ss.str());
    ss.str("");
  }

  return headers;

}




