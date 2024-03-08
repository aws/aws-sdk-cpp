/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/BatchGetFlowAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetFlowAssociationRequest::BatchGetFlowAssociationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_resourceType(ListFlowAssociationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String BatchGetFlowAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsString(m_resourceIds[resourceIdsIndex]);
   }
   payload.WithArray("ResourceIds", std::move(resourceIdsJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ListFlowAssociationResourceTypeMapper::GetNameForListFlowAssociationResourceType(m_resourceType));
  }

  return payload.View().WriteReadable();
}




