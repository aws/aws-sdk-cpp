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

#include <aws/globalaccelerator/model/CreateListenerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateListenerRequest::CreateListenerRequest() : 
    m_acceleratorArnHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_clientAffinity(ClientAffinity::NOT_SET),
    m_clientAffinityHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true)
{
}

Aws::String CreateListenerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_acceleratorArnHasBeenSet)
  {
   payload.WithString("AcceleratorArn", m_acceleratorArn);

  }

  if(m_portRangesHasBeenSet)
  {
   Array<JsonValue> portRangesJsonList(m_portRanges.size());
   for(unsigned portRangesIndex = 0; portRangesIndex < portRangesJsonList.GetLength(); ++portRangesIndex)
   {
     portRangesJsonList[portRangesIndex].AsObject(m_portRanges[portRangesIndex].Jsonize());
   }
   payload.WithArray("PortRanges", std::move(portRangesJsonList));

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("Protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_clientAffinityHasBeenSet)
  {
   payload.WithString("ClientAffinity", ClientAffinityMapper::GetNameForClientAffinity(m_clientAffinity));
  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateListenerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.CreateListener"));
  return headers;

}




