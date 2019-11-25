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

#include <aws/iotsecuretunneling/model/CloseTunnelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSecureTunneling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CloseTunnelRequest::CloseTunnelRequest() : 
    m_tunnelIdHasBeenSet(false),
    m_delete(false),
    m_deleteHasBeenSet(false)
{
}

Aws::String CloseTunnelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tunnelIdHasBeenSet)
  {
   payload.WithString("tunnelId", m_tunnelId);

  }

  if(m_deleteHasBeenSet)
  {
   payload.WithBool("delete", m_delete);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CloseTunnelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTSecuredTunneling.CloseTunnel"));
  return headers;

}




