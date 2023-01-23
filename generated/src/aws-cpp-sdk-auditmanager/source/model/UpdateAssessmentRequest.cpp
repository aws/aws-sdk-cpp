/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAssessmentRequest::UpdateAssessmentRequest() : 
    m_assessmentIdHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_assessmentDescriptionHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_assessmentReportsDestinationHasBeenSet(false),
    m_rolesHasBeenSet(false)
{
}

Aws::String UpdateAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assessmentNameHasBeenSet)
  {
   payload.WithString("assessmentName", m_assessmentName);

  }

  if(m_assessmentDescriptionHasBeenSet)
  {
   payload.WithString("assessmentDescription", m_assessmentDescription);

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("scope", m_scope.Jsonize());

  }

  if(m_assessmentReportsDestinationHasBeenSet)
  {
   payload.WithObject("assessmentReportsDestination", m_assessmentReportsDestination.Jsonize());

  }

  if(m_rolesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rolesJsonList(m_roles.size());
   for(unsigned rolesIndex = 0; rolesIndex < rolesJsonList.GetLength(); ++rolesIndex)
   {
     rolesJsonList[rolesIndex].AsObject(m_roles[rolesIndex].Jsonize());
   }
   payload.WithArray("roles", std::move(rolesJsonList));

  }

  return payload.View().WriteReadable();
}




