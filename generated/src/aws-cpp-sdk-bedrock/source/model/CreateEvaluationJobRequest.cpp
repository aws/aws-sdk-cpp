/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateEvaluationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEvaluationJobRequest::CreateEvaluationJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_jobDescriptionHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_roleArnHasBeenSet(false),
    m_customerEncryptionKeyIdHasBeenSet(false),
    m_jobTagsHasBeenSet(false),
    m_evaluationConfigHasBeenSet(false),
    m_inferenceConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false)
{
}

Aws::String CreateEvaluationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_jobDescriptionHasBeenSet)
  {
   payload.WithString("jobDescription", m_jobDescription);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_customerEncryptionKeyIdHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyId", m_customerEncryptionKeyId);

  }

  if(m_jobTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobTagsJsonList(m_jobTags.size());
   for(unsigned jobTagsIndex = 0; jobTagsIndex < jobTagsJsonList.GetLength(); ++jobTagsIndex)
   {
     jobTagsJsonList[jobTagsIndex].AsObject(m_jobTags[jobTagsIndex].Jsonize());
   }
   payload.WithArray("jobTags", std::move(jobTagsJsonList));

  }

  if(m_evaluationConfigHasBeenSet)
  {
   payload.WithObject("evaluationConfig", m_evaluationConfig.Jsonize());

  }

  if(m_inferenceConfigHasBeenSet)
  {
   payload.WithObject("inferenceConfig", m_inferenceConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("outputDataConfig", m_outputDataConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




