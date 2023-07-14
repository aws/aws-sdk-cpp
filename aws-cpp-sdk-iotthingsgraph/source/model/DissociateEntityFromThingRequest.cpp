/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotthingsgraph/model/DissociateEntityFromThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DissociateEntityFromThingRequest::DissociateEntityFromThingRequest() : 
    m_thingNameHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false)
{
}

Aws::String DissociateEntityFromThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("entityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DissociateEntityFromThingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IotThingsGraphFrontEndService.DissociateEntityFromThing"));
  return headers;

}




