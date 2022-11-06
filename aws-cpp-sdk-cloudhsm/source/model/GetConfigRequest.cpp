/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/GetConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConfigRequest::GetConfigRequest() : 
    m_clientArnHasBeenSet(false),
    m_clientVersion(ClientVersion::NOT_SET),
    m_clientVersionHasBeenSet(false),
    m_hapgListHasBeenSet(false)
{
}

Aws::String GetConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientArnHasBeenSet)
  {
   payload.WithString("ClientArn", m_clientArn);

  }

  if(m_clientVersionHasBeenSet)
  {
   payload.WithString("ClientVersion", ClientVersionMapper::GetNameForClientVersion(m_clientVersion));
  }

  if(m_hapgListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hapgListJsonList(m_hapgList.size());
   for(unsigned hapgListIndex = 0; hapgListIndex < hapgListJsonList.GetLength(); ++hapgListIndex)
   {
     hapgListJsonList[hapgListIndex].AsString(m_hapgList[hapgListIndex]);
   }
   payload.WithArray("HapgList", std::move(hapgListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.GetConfig"));
  return headers;

}




