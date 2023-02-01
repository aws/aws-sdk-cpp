/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/PutPermissionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPermissionRequest::PutPermissionRequest() : 
    m_actionGroup(ActionGroup::NOT_SET),
    m_actionGroupHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_profilingGroupNameHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

Aws::String PutPermissionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsString(m_principals[principalsIndex]);
   }
   payload.WithArray("principals", std::move(principalsJsonList));

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  return payload.View().WriteReadable();
}




