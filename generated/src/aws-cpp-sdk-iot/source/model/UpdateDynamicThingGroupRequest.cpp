/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateDynamicThingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDynamicThingGroupRequest::UpdateDynamicThingGroupRequest() : 
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupPropertiesHasBeenSet(false),
    m_expectedVersion(0),
    m_expectedVersionHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_queryStringHasBeenSet(false),
    m_queryVersionHasBeenSet(false)
{
}

Aws::String UpdateDynamicThingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingGroupPropertiesHasBeenSet)
  {
   payload.WithObject("thingGroupProperties", m_thingGroupProperties.Jsonize());

  }

  if(m_expectedVersionHasBeenSet)
  {
   payload.WithInt64("expectedVersion", m_expectedVersion);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("indexName", m_indexName);

  }

  if(m_queryStringHasBeenSet)
  {
   payload.WithString("queryString", m_queryString);

  }

  if(m_queryVersionHasBeenSet)
  {
   payload.WithString("queryVersion", m_queryVersion);

  }

  return payload.View().WriteReadable();
}




