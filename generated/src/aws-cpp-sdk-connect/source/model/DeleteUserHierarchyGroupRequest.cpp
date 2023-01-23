/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteUserHierarchyGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUserHierarchyGroupRequest::DeleteUserHierarchyGroupRequest() : 
    m_hierarchyGroupIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String DeleteUserHierarchyGroupRequest::SerializePayload() const
{
  return {};
}




