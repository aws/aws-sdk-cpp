/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateInferenceRecommendationsJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateInferenceRecommendationsJobRequest::CreateInferenceRecommendationsJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_jobType(RecommendationJobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_inputConfigHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_stoppingConditionsHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateInferenceRecommendationsJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", RecommendationJobTypeMapper::GetNameForRecommendationJobType(m_jobType));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_inputConfigHasBeenSet)
  {
   payload.WithObject("InputConfig", m_inputConfig.Jsonize());

  }

  if(m_jobDescriptionHasBeenSet)
  {
   payload.WithString("JobDescription", m_jobDescription);

  }

  if(m_stoppingConditionsHasBeenSet)
  {
   payload.WithObject("StoppingConditions", m_stoppingConditions.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateInferenceRecommendationsJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateInferenceRecommendationsJob"));
  return headers;

}




