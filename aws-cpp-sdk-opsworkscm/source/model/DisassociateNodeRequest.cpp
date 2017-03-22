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
#include <aws/opsworkscm/model/DisassociateNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorksCM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateNodeRequest::DisassociateNodeRequest() : 
    m_serverNameHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_engineAttributesHasBeenSet(false)
{
}

Aws::String DisassociateNodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serverNameHasBeenSet)
  {
   payload.WithString("ServerName", m_serverName);

  }

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("NodeName", m_nodeName);

  }

  if(m_engineAttributesHasBeenSet)
  {
   Array<JsonValue> engineAttributesJsonList(m_engineAttributes.size());
   for(unsigned engineAttributesIndex = 0; engineAttributesIndex < engineAttributesJsonList.GetLength(); ++engineAttributesIndex)
   {
     engineAttributesJsonList[engineAttributesIndex].AsObject(m_engineAttributes[engineAttributesIndex].Jsonize());
   }
   payload.WithArray("EngineAttributes", std::move(engineAttributesJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateNodeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorksCM_V2016_11_01.DisassociateNode"));
  return headers;

}




