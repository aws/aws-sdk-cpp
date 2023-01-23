/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/UpdateListenerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateListenerRequest::UpdateListenerRequest() : 
    m_listenerArnHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_clientAffinity(ClientAffinity::NOT_SET),
    m_clientAffinityHasBeenSet(false)
{
}

Aws::String UpdateListenerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_listenerArnHasBeenSet)
  {
   payload.WithString("ListenerArn", m_listenerArn);

  }

  if(m_portRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portRangesJsonList(m_portRanges.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateListenerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.UpdateListener"));
  return headers;

}




