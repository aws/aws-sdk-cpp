/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateUserHierarchyGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUserHierarchyGroupRequest::CreateUserHierarchyGroupRequest() : 
    m_nameHasBeenSet(false),
    m_parentGroupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String CreateUserHierarchyGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_parentGroupIdHasBeenSet)
  {
   payload.WithString("ParentGroupId", m_parentGroupId);

  }

  return payload.View().WriteReadable();
}




