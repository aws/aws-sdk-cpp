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

#include <aws/iotthingsgraph/model/AssociateEntityToThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateEntityToThingRequest::AssociateEntityToThingRequest() : 
    m_thingNameHasBeenSet(false),
    m_entityIdHasBeenSet(false),
    m_namespaceVersion(0),
    m_namespaceVersionHasBeenSet(false)
{
}

Aws::String AssociateEntityToThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  if(m_namespaceVersionHasBeenSet)
  {
   payload.WithInt64("namespaceVersion", m_namespaceVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateEntityToThingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.AssociateEntityToThing"));
  return headers;

}




