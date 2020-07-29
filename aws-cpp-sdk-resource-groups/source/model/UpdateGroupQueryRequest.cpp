/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/UpdateGroupQueryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ResourceGroups::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGroupQueryRequest::UpdateGroupQueryRequest() : 
    m_groupHasBeenSet(false),
    m_resourceQueryHasBeenSet(false)
{
}

Aws::String UpdateGroupQueryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_resourceQueryHasBeenSet)
  {
   payload.WithObject("ResourceQuery", m_resourceQuery.Jsonize());

  }

  return payload.View().WriteReadable();
}




