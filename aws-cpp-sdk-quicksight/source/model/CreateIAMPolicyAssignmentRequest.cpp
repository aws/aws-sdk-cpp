/*
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

#include <aws/quicksight/model/CreateIAMPolicyAssignmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIAMPolicyAssignmentRequest::CreateIAMPolicyAssignmentRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_assignmentNameHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_identitiesHasBeenSet(false),
    m_namespaceHasBeenSet(false)
{
}

Aws::String CreateIAMPolicyAssignmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assignmentNameHasBeenSet)
  {
   payload.WithString("AssignmentName", m_assignmentName);

  }

  if(m_assignmentStatusHasBeenSet)
  {
   payload.WithString("AssignmentStatus", AssignmentStatusMapper::GetNameForAssignmentStatus(m_assignmentStatus));
  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("PolicyArn", m_policyArn);

  }

  if(m_identitiesHasBeenSet)
  {
   JsonValue identitiesJsonMap;
   for(auto& identitiesItem : m_identities)
   {
     Array<JsonValue> identityNameListJsonList(identitiesItem.second.size());
     for(unsigned identityNameListIndex = 0; identityNameListIndex < identityNameListJsonList.GetLength(); ++identityNameListIndex)
     {
       identityNameListJsonList[identityNameListIndex].AsString(identitiesItem.second[identityNameListIndex]);
     }
     identitiesJsonMap.WithArray(identitiesItem.first, std::move(identityNameListJsonList));
   }
   payload.WithObject("Identities", std::move(identitiesJsonMap));

  }

  return payload.View().WriteReadable();
}




