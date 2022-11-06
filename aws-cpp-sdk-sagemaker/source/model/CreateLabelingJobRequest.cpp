/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateLabelingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLabelingJobRequest::CreateLabelingJobRequest() : 
    m_labelingJobNameHasBeenSet(false),
    m_labelAttributeNameHasBeenSet(false),
    m_inputConfigHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_labelCategoryConfigS3UriHasBeenSet(false),
    m_stoppingConditionsHasBeenSet(false),
    m_labelingJobAlgorithmsConfigHasBeenSet(false),
    m_humanTaskConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLabelingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_labelingJobNameHasBeenSet)
  {
   payload.WithString("LabelingJobName", m_labelingJobName);

  }

  if(m_labelAttributeNameHasBeenSet)
  {
   payload.WithString("LabelAttributeName", m_labelAttributeName);

  }

  if(m_inputConfigHasBeenSet)
  {
   payload.WithObject("InputConfig", m_inputConfig.Jsonize());

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_labelCategoryConfigS3UriHasBeenSet)
  {
   payload.WithString("LabelCategoryConfigS3Uri", m_labelCategoryConfigS3Uri);

  }

  if(m_stoppingConditionsHasBeenSet)
  {
   payload.WithObject("StoppingConditions", m_stoppingConditions.Jsonize());

  }

  if(m_labelingJobAlgorithmsConfigHasBeenSet)
  {
   payload.WithObject("LabelingJobAlgorithmsConfig", m_labelingJobAlgorithmsConfig.Jsonize());

  }

  if(m_humanTaskConfigHasBeenSet)
  {
   payload.WithObject("HumanTaskConfig", m_humanTaskConfig.Jsonize());

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

Aws::Http::HeaderValueCollection CreateLabelingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.CreateLabelingJob"));
  return headers;

}




