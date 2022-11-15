/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateHyperParameterTuningJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHyperParameterTuningJobRequest::CreateHyperParameterTuningJobRequest() : 
    m_hyperParameterTuningJobNameHasBeenSet(false),
    m_hyperParameterTuningJobConfigHasBeenSet(false),
    m_trainingJobDefinitionHasBeenSet(false),
    m_trainingJobDefinitionsHasBeenSet(false),
    m_warmStartConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateHyperParameterTuningJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hyperParameterTuningJobNameHasBeenSet)
  {
   payload.WithString("HyperParameterTuningJobName", m_hyperParameterTuningJobName);

  }

  if(m_hyperParameterTuningJobConfigHasBeenSet)
  {
   payload.WithObject("HyperParameterTuningJobConfig", m_hyperParameterTuningJobConfig.Jsonize());

  }

  if(m_trainingJobDefinitionHasBeenSet)
  {
   payload.WithObject("TrainingJobDefinition", m_trainingJobDefinition.Jsonize());

  }

  if(m_trainingJobDefinitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trainingJobDefinitionsJsonList(m_trainingJobDefinitions.size());
   for(unsigned trainingJobDefinitionsIndex = 0; trainingJobDefinitionsIndex < trainingJobDefinitionsJsonList.GetLength(); ++trainingJobDefinitionsIndex)
   {
     trainingJobDefinitionsJsonList[trainingJobDefinitionsIndex].AsObject(m_trainingJobDefinitions[trainingJobDefinitionsIndex].Jsonize());
   }
   payload.WithArray("TrainingJobDefinitions", std::move(trainingJobDefinitionsJsonList));

  }

  if(m_warmStartConfigHasBeenSet)
  {
   payload.WithObject("WarmStartConfig", m_warmStartConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateHyperParameterTuningJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateHyperParameterTuningJob"));
  return headers;

}




