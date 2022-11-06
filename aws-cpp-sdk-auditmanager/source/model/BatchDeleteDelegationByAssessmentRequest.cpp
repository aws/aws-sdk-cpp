/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/BatchDeleteDelegationByAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteDelegationByAssessmentRequest::BatchDeleteDelegationByAssessmentRequest() : 
    m_delegationIdsHasBeenSet(false),
    m_assessmentIdHasBeenSet(false)
{
}

Aws::String BatchDeleteDelegationByAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_delegationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> delegationIdsJsonList(m_delegationIds.size());
   for(unsigned delegationIdsIndex = 0; delegationIdsIndex < delegationIdsJsonList.GetLength(); ++delegationIdsIndex)
   {
     delegationIdsJsonList[delegationIdsIndex].AsString(m_delegationIds[delegationIdsIndex]);
   }
   payload.WithArray("delegationIds", std::move(delegationIdsJsonList));

  }

  return payload.View().WriteReadable();
}




