/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchCreateDelegationByAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchCreateDelegationByAssessmentRequest::BatchCreateDelegationByAssessmentRequest() : 
    m_createDelegationRequestsHasBeenSet(false),
    m_assessmentIdHasBeenSet(false)
{
}

Aws::String BatchCreateDelegationByAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_createDelegationRequestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> createDelegationRequestsJsonList(m_createDelegationRequests.size());
   for(unsigned createDelegationRequestsIndex = 0; createDelegationRequestsIndex < createDelegationRequestsJsonList.GetLength(); ++createDelegationRequestsIndex)
   {
     createDelegationRequestsJsonList[createDelegationRequestsIndex].AsObject(m_createDelegationRequests[createDelegationRequestsIndex].Jsonize());
   }
   payload.WithArray("createDelegationRequests", std::move(createDelegationRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




