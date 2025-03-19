/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateAssessmentFrameworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAssessmentFrameworkRequest::SerializePayload() const
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

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("complianceType", m_complianceType);

  }

  if(m_controlSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlSetsJsonList(m_controlSets.size());
   for(unsigned controlSetsIndex = 0; controlSetsIndex < controlSetsJsonList.GetLength(); ++controlSetsIndex)
   {
     controlSetsJsonList[controlSetsIndex].AsObject(m_controlSets[controlSetsIndex].Jsonize());
   }
   payload.WithArray("controlSets", std::move(controlSetsJsonList));

  }

  return payload.View().WriteReadable();
}




