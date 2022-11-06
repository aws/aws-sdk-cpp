/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateDataQualityJobDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDataQualityJobDefinitionRequest::CreateDataQualityJobDefinitionRequest() : 
    m_jobDefinitionNameHasBeenSet(false),
    m_dataQualityBaselineConfigHasBeenSet(false),
    m_dataQualityAppSpecificationHasBeenSet(false),
    m_dataQualityJobInputHasBeenSet(false),
    m_dataQualityJobOutputConfigHasBeenSet(false),
    m_jobResourcesHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDataQualityJobDefinitionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobDefinitionNameHasBeenSet)
  {
   payload.WithString("JobDefinitionName", m_jobDefinitionName);

  }

  if(m_dataQualityBaselineConfigHasBeenSet)
  {
   payload.WithObject("DataQualityBaselineConfig", m_dataQualityBaselineConfig.Jsonize());

  }

  if(m_dataQualityAppSpecificationHasBeenSet)
  {
   payload.WithObject("DataQualityAppSpecification", m_dataQualityAppSpecification.Jsonize());

  }

  if(m_dataQualityJobInputHasBeenSet)
  {
   payload.WithObject("DataQualityJobInput", m_dataQualityJobInput.Jsonize());

  }

  if(m_dataQualityJobOutputConfigHasBeenSet)
  {
   payload.WithObject("DataQualityJobOutputConfig", m_dataQualityJobOutputConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateDataQualityJobDefinitionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateDataQualityJobDefinition"));
  return headers;

}




