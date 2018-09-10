﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/workspaces/model/RevokeIpRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RevokeIpRulesRequest::RevokeIpRulesRequest() : 
    m_groupIdHasBeenSet(false),
    m_userRulesHasBeenSet(false)
{
}

Aws::String RevokeIpRulesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_userRulesHasBeenSet)
  {
   Array<JsonValue> userRulesJsonList(m_userRules.size());
   for(unsigned userRulesIndex = 0; userRulesIndex < userRulesJsonList.GetLength(); ++userRulesIndex)
   {
     userRulesJsonList[userRulesIndex].AsString(m_userRules[userRulesIndex]);
   }
   payload.WithArray("UserRules", std::move(userRulesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RevokeIpRulesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.RevokeIpRules"));
  return headers;

}




