/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserHierarchyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserHierarchyRequest::UpdateUserHierarchyRequest() : 
    m_hierarchyGroupIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String UpdateUserHierarchyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hierarchyGroupIdHasBeenSet)
  {
   payload.WithString("HierarchyGroupId", m_hierarchyGroupId);

  }

  return payload.View().WriteReadable();
}




