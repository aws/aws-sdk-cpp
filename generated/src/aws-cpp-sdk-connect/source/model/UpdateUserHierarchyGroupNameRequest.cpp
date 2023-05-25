/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateUserHierarchyGroupNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateUserHierarchyGroupNameRequest::UpdateUserHierarchyGroupNameRequest() : 
    m_nameHasBeenSet(false),
    m_hierarchyGroupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String UpdateUserHierarchyGroupNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}




