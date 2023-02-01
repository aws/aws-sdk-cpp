/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/CreateAssessmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssessmentRequest::CreateAssessmentRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_assessmentReportsDestinationHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_rolesHasBeenSet(false),
    m_frameworkIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAssessmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_assessmentReportsDestinationHasBeenSet)
  {
   payload.WithObject("assessmentReportsDestination", m_assessmentReportsDestination.Jsonize());

  }

  if(m_scopeHasBeenSet)
  {
   payload.WithObject("scope", m_scope.Jsonize());

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

  if(m_frameworkIdHasBeenSet)
  {
   payload.WithString("frameworkId", m_frameworkId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




