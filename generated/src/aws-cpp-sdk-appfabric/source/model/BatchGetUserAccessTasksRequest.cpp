/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/BatchGetUserAccessTasksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetUserAccessTasksRequest::BatchGetUserAccessTasksRequest() : 
    m_appBundleIdentifierHasBeenSet(false),
    m_taskIdListHasBeenSet(false)
{
}

Aws::String BatchGetUserAccessTasksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appBundleIdentifierHasBeenSet)
  {
   payload.WithString("appBundleIdentifier", m_appBundleIdentifier);

  }

  if(m_taskIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> taskIdListJsonList(m_taskIdList.size());
   for(unsigned taskIdListIndex = 0; taskIdListIndex < taskIdListJsonList.GetLength(); ++taskIdListIndex)
   {
     taskIdListJsonList[taskIdListIndex].AsString(m_taskIdList[taskIdListIndex]);
   }
   payload.WithArray("taskIdList", std::move(taskIdListJsonList));

  }

  return payload.View().WriteReadable();
}




