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
#include <aws/storagegateway/model/DescribeTapesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTapesRequest::DescribeTapesRequest() : 
    m_gatewayARNHasBeenSet(false),
    m_tapeARNsHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeTapesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_tapeARNsHasBeenSet)
  {
   Array<JsonValue> tapeARNsJsonList(m_tapeARNs.size());
   for(unsigned tapeARNsIndex = 0; tapeARNsIndex < tapeARNsJsonList.GetLength(); ++tapeARNsIndex)
   {
     tapeARNsJsonList[tapeARNsIndex].AsString(m_tapeARNs[tapeARNsIndex]);
   }
   payload.WithArray("TapeARNs", std::move(tapeARNsJsonList));

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTapesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StorageGateway_20130630.DescribeTapes"));
  return headers;

}



