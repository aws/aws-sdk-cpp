/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/UpdateControlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateControlRequest::UpdateControlRequest() : 
    m_controlIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_testingInformationHasBeenSet(false),
    m_actionPlanTitleHasBeenSet(false),
    m_actionPlanInstructionsHasBeenSet(false),
    m_controlMappingSourcesHasBeenSet(false)
{
}

Aws::String UpdateControlRequest::SerializePayload() const
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

  if(m_testingInformationHasBeenSet)
  {
   payload.WithString("testingInformation", m_testingInformation);

  }

  if(m_actionPlanTitleHasBeenSet)
  {
   payload.WithString("actionPlanTitle", m_actionPlanTitle);

  }

  if(m_actionPlanInstructionsHasBeenSet)
  {
   payload.WithString("actionPlanInstructions", m_actionPlanInstructions);

  }

  if(m_controlMappingSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlMappingSourcesJsonList(m_controlMappingSources.size());
   for(unsigned controlMappingSourcesIndex = 0; controlMappingSourcesIndex < controlMappingSourcesJsonList.GetLength(); ++controlMappingSourcesIndex)
   {
     controlMappingSourcesJsonList[controlMappingSourcesIndex].AsObject(m_controlMappingSources[controlMappingSourcesIndex].Jsonize());
   }
   payload.WithArray("controlMappingSources", std::move(controlMappingSourcesJsonList));

  }

  return payload.View().WriteReadable();
}




