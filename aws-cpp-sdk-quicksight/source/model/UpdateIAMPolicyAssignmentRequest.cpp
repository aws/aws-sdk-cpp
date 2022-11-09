/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/UpdateIAMPolicyAssignmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIAMPolicyAssignmentRequest::UpdateIAMPolicyAssignmentRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_assignmentNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_identitiesHasBeenSet(false)
{
}

Aws::String UpdateIAMPolicyAssignmentRequest::SerializePayload() const
{
  JsonValue payload;

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
     Aws::Utils::Array<JsonValue> identityNameListJsonList(identitiesItem.second.size());
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




