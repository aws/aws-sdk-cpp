﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticmapreduce/model/SetVisibleToAllUsersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMR::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetVisibleToAllUsersRequest::SetVisibleToAllUsersRequest() : 
    m_jobFlowIdsHasBeenSet(false),
    m_visibleToAllUsers(false),
    m_visibleToAllUsersHasBeenSet(false)
{
}

Aws::String SetVisibleToAllUsersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobFlowIdsHasBeenSet)
  {
   Array<JsonValue> jobFlowIdsJsonList(m_jobFlowIds.size());
   for(unsigned jobFlowIdsIndex = 0; jobFlowIdsIndex < jobFlowIdsJsonList.GetLength(); ++jobFlowIdsIndex)
   {
     jobFlowIdsJsonList[jobFlowIdsIndex].AsString(m_jobFlowIds[jobFlowIdsIndex]);
   }
   payload.WithArray("JobFlowIds", std::move(jobFlowIdsJsonList));

  }

  if(m_visibleToAllUsersHasBeenSet)
  {
   payload.WithBool("VisibleToAllUsers", m_visibleToAllUsers);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SetVisibleToAllUsersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "ElasticMapReduce.SetVisibleToAllUsers"));
  return headers;

}



