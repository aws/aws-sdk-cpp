/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateModelBiasJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelBiasJobDefinitionRequest::CreateModelBiasJobDefinitionRequest() : 
    m_jobDefinitionNameHasBeenSet(false),
    m_modelBiasBaselineConfigHasBeenSet(false),
    m_modelBiasAppSpecificationHasBeenSet(false),
    m_modelBiasJobInputHasBeenSet(false),
    m_modelBiasJobOutputConfigHasBeenSet(false),
    m_jobResourcesHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateModelBiasJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("JobDefinitionName", m_jobDefinitionName);

  }

  if(m_modelBiasBaselineConfigHasBeenSet)
  {
   payload.WithObject("ModelBiasBaselineConfig", m_modelBiasBaselineConfig.Jsonize());

  }

  if(m_modelBiasAppSpecificationHasBeenSet)
  {
   payload.WithObject("ModelBiasAppSpecification", m_modelBiasAppSpecification.Jsonize());

  }

  if(m_modelBiasJobInputHasBeenSet)
  {
   payload.WithObject("ModelBiasJobInput", m_modelBiasJobInput.Jsonize());

  }

  if(m_modelBiasJobOutputConfigHasBeenSet)
  {
   payload.WithObject("ModelBiasJobOutputConfig", m_modelBiasJobOutputConfig.Jsonize());

  }

  if(m_jobResourcesHasBeenSet)
  {
   payload.WithObject("JobResources", m_jobResources.Jsonize());

  }

  if(m_networkConfigHasBeenSet)
  {
   payload.WithObject("NetworkConfig", m_networkConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("StoppingCondition", m_stoppingCondition.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateModelBiasJobDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateModelBiasJobDefinition"));
  return headers;

}




