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

#include <aws/mediaconnect/model/UpdateFlowOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlowOutputRequest::UpdateFlowOutputRequest() : 
    m_cidrAllowListHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_flowArnHasBeenSet(false),
    m_maxLatency(0),
    m_maxLatencyHasBeenSet(false),
    m_outputArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_protocol(Protocol::NOT_SET),
    m_protocolHasBeenSet(false),
    m_remoteIdHasBeenSet(false),
    m_smoothingLatency(0),
    m_smoothingLatencyHasBeenSet(false),
    m_streamIdHasBeenSet(false)
{
}

Aws::String UpdateFlowOutputRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cidrAllowListHasBeenSet)
  {
   Array<JsonValue> cidrAllowListJsonList(m_cidrAllowList.size());
   for(unsigned cidrAllowListIndex = 0; cidrAllowListIndex < cidrAllowListJsonList.GetLength(); ++cidrAllowListIndex)
   {
     cidrAllowListJsonList[cidrAllowListIndex].AsString(m_cidrAllowList[cidrAllowListIndex]);
   }
   payload.WithArray("cidrAllowList", std::move(cidrAllowListJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_maxLatencyHasBeenSet)
  {
   payload.WithInteger("maxLatency", m_maxLatency);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithString("protocol", ProtocolMapper::GetNameForProtocol(m_protocol));
  }

  if(m_remoteIdHasBeenSet)
  {
   payload.WithString("remoteId", m_remoteId);

  }

  if(m_smoothingLatencyHasBeenSet)
  {
   payload.WithInteger("smoothingLatency", m_smoothingLatency);

  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  return payload.View().WriteReadable();
}




