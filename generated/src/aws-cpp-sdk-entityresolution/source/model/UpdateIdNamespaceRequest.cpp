/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/UpdateIdNamespaceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIdNamespaceRequest::UpdateIdNamespaceRequest() : 
    m_descriptionHasBeenSet(false),
    m_idMappingWorkflowPropertiesHasBeenSet(false),
    m_idNamespaceNameHasBeenSet(false),
    m_inputSourceConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String UpdateIdNamespaceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idMappingWorkflowPropertiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idMappingWorkflowPropertiesJsonList(m_idMappingWorkflowProperties.size());
   for(unsigned idMappingWorkflowPropertiesIndex = 0; idMappingWorkflowPropertiesIndex < idMappingWorkflowPropertiesJsonList.GetLength(); ++idMappingWorkflowPropertiesIndex)
   {
     idMappingWorkflowPropertiesJsonList[idMappingWorkflowPropertiesIndex].AsObject(m_idMappingWorkflowProperties[idMappingWorkflowPropertiesIndex].Jsonize());
   }
   payload.WithArray("idMappingWorkflowProperties", std::move(idMappingWorkflowPropertiesJsonList));

  }

  if(m_inputSourceConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputSourceConfigJsonList(m_inputSourceConfig.size());
   for(unsigned inputSourceConfigIndex = 0; inputSourceConfigIndex < inputSourceConfigJsonList.GetLength(); ++inputSourceConfigIndex)
   {
     inputSourceConfigJsonList[inputSourceConfigIndex].AsObject(m_inputSourceConfig[inputSourceConfigIndex].Jsonize());
   }
   payload.WithArray("inputSourceConfig", std::move(inputSourceConfigJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




