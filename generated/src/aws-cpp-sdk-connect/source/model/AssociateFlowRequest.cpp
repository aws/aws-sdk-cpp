/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateFlowRequest::AssociateFlowRequest() : 
    m_instanceIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_resourceType(FlowAssociationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String AssociateFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_flowIdHasBeenSet)
  {
   payload.WithString("FlowId", m_flowId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", FlowAssociationResourceTypeMapper::GetNameForFlowAssociationResourceType(m_resourceType));
  }

  return payload.View().WriteReadable();
}




