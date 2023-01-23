/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserHierarchyStructureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserHierarchyStructureRequest::UpdateUserHierarchyStructureRequest() : 
    m_hierarchyStructureHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String UpdateUserHierarchyStructureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hierarchyStructureHasBeenSet)
  {
   payload.WithObject("HierarchyStructure", m_hierarchyStructure.Jsonize());

  }

  return payload.View().WriteReadable();
}




