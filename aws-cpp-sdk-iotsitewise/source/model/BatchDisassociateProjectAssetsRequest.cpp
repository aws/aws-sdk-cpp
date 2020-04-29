/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iotsitewise/model/BatchDisassociateProjectAssetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDisassociateProjectAssetsRequest::BatchDisassociateProjectAssetsRequest() : 
    m_projectIdHasBeenSet(false),
    m_assetIdsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String BatchDisassociateProjectAssetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assetIdsHasBeenSet)
  {
   Array<JsonValue> assetIdsJsonList(m_assetIds.size());
   for(unsigned assetIdsIndex = 0; assetIdsIndex < assetIdsJsonList.GetLength(); ++assetIdsIndex)
   {
     assetIdsJsonList[assetIdsIndex].AsString(m_assetIds[assetIdsIndex]);
   }
   payload.WithArray("assetIds", std::move(assetIdsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




