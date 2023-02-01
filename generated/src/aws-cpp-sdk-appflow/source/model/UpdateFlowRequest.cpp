/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/UpdateFlowRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlowRequest::UpdateFlowRequest() : 
    m_flowNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_triggerConfigHasBeenSet(false),
    m_sourceFlowConfigHasBeenSet(false),
    m_destinationFlowConfigListHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_metadataCatalogConfigHasBeenSet(false)
{
}

Aws::String UpdateFlowRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flowNameHasBeenSet)
  {
   payload.WithString("flowName", m_flowName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_triggerConfigHasBeenSet)
  {
   payload.WithObject("triggerConfig", m_triggerConfig.Jsonize());

  }

  if(m_sourceFlowConfigHasBeenSet)
  {
   payload.WithObject("sourceFlowConfig", m_sourceFlowConfig.Jsonize());

  }

  if(m_destinationFlowConfigListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationFlowConfigListJsonList(m_destinationFlowConfigList.size());
   for(unsigned destinationFlowConfigListIndex = 0; destinationFlowConfigListIndex < destinationFlowConfigListJsonList.GetLength(); ++destinationFlowConfigListIndex)
   {
     destinationFlowConfigListJsonList[destinationFlowConfigListIndex].AsObject(m_destinationFlowConfigList[destinationFlowConfigListIndex].Jsonize());
   }
   payload.WithArray("destinationFlowConfigList", std::move(destinationFlowConfigListJsonList));

  }

  if(m_tasksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tasksJsonList(m_tasks.size());
   for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
   {
     tasksJsonList[tasksIndex].AsObject(m_tasks[tasksIndex].Jsonize());
   }
   payload.WithArray("tasks", std::move(tasksJsonList));

  }

  if(m_metadataCatalogConfigHasBeenSet)
  {
   payload.WithObject("metadataCatalogConfig", m_metadataCatalogConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




