/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateThingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateThingRequest::UpdateThingRequest() : 
    m_thingNameHasBeenSet(false),
    m_thingTypeNameHasBeenSet(false),
    m_attributePayloadHasBeenSet(false),
    m_expectedVersion(0),
    m_expectedVersionHasBeenSet(false),
    m_removeThingType(false),
    m_removeThingTypeHasBeenSet(false)
{
}

Aws::String UpdateThingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingTypeNameHasBeenSet)
  {
   payload.WithString("thingTypeName", m_thingTypeName);

  }

  if(m_attributePayloadHasBeenSet)
  {
   payload.WithObject("attributePayload", m_attributePayload.Jsonize());

  }

  if(m_expectedVersionHasBeenSet)
  {
   payload.WithInt64("expectedVersion", m_expectedVersion);

  }

  if(m_removeThingTypeHasBeenSet)
  {
   payload.WithBool("removeThingType", m_removeThingType);

  }

  return payload.View().WriteReadable();
}




