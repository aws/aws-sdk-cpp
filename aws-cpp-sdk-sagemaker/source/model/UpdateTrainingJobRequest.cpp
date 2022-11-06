/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateTrainingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateTrainingJobRequest::UpdateTrainingJobRequest() : 
    m_trainingJobNameHasBeenSet(false),
    m_profilerConfigHasBeenSet(false),
    m_profilerRuleConfigurationsHasBeenSet(false),
    m_resourceConfigHasBeenSet(false)
{
}

Aws::String UpdateTrainingJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trainingJobNameHasBeenSet)
  {
   payload.WithString("TrainingJobName", m_trainingJobName);

  }

  if(m_profilerConfigHasBeenSet)
  {
   payload.WithObject("ProfilerConfig", m_profilerConfig.Jsonize());

  }

  if(m_profilerRuleConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profilerRuleConfigurationsJsonList(m_profilerRuleConfigurations.size());
   for(unsigned profilerRuleConfigurationsIndex = 0; profilerRuleConfigurationsIndex < profilerRuleConfigurationsJsonList.GetLength(); ++profilerRuleConfigurationsIndex)
   {
     profilerRuleConfigurationsJsonList[profilerRuleConfigurationsIndex].AsObject(m_profilerRuleConfigurations[profilerRuleConfigurationsIndex].Jsonize());
   }
   payload.WithArray("ProfilerRuleConfigurations", std::move(profilerRuleConfigurationsJsonList));

  }

  if(m_resourceConfigHasBeenSet)
  {
   payload.WithObject("ResourceConfig", m_resourceConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateTrainingJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateTrainingJob"));
  return headers;

}




