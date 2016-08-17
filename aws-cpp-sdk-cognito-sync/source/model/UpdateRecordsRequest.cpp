/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> recordPatchesJsonList(m_recordPatches.size());
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRecordsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientContextHasBeenSet)
  {
    ss << m_clientContext;
    headers.insert(Aws::Http::HeaderValuePair("x-amz-client-context", ss.str()));
    ss.str("");
  }

  return headers;

}



