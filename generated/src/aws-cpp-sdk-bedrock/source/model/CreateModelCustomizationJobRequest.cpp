/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CreateModelCustomizationJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateModelCustomizationJobRequest::CreateModelCustomizationJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_customModelNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_clientRequestToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_baseModelIdentifierHasBeenSet(false),
    m_customizationType(CustomizationType::NOT_SET),
    m_customizationTypeHasBeenSet(false),
    m_customModelKmsKeyIdHasBeenSet(false),
    m_jobTagsHasBeenSet(false),
    m_customModelTagsHasBeenSet(false),
    m_trainingDataConfigHasBeenSet(false),
    m_validationDataConfigHasBeenSet(false),
    m_outputDataConfigHasBeenSet(false),
    m_hyperParametersHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

Aws::String CreateModelCustomizationJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_customModelNameHasBeenSet)
  {
   payload.WithString("customModelName", m_customModelName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_baseModelIdentifierHasBeenSet)
  {
   payload.WithString("baseModelIdentifier", m_baseModelIdentifier);

  }

  if(m_customizationTypeHasBeenSet)
  {
   payload.WithString("customizationType", CustomizationTypeMapper::GetNameForCustomizationType(m_customizationType));
  }

  if(m_customModelKmsKeyIdHasBeenSet)
  {
   payload.WithString("customModelKmsKeyId", m_customModelKmsKeyId);

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

  if(m_customModelTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customModelTagsJsonList(m_customModelTags.size());
   for(unsigned customModelTagsIndex = 0; customModelTagsIndex < customModelTagsJsonList.GetLength(); ++customModelTagsIndex)
   {
     customModelTagsJsonList[customModelTagsIndex].AsObject(m_customModelTags[customModelTagsIndex].Jsonize());
   }
   payload.WithArray("customModelTags", std::move(customModelTagsJsonList));

  }

  if(m_trainingDataConfigHasBeenSet)
  {
   payload.WithObject("trainingDataConfig", m_trainingDataConfig.Jsonize());

  }

  if(m_validationDataConfigHasBeenSet)
  {
   payload.WithObject("validationDataConfig", m_validationDataConfig.Jsonize());

  }

  if(m_outputDataConfigHasBeenSet)
  {
   payload.WithObject("outputDataConfig", m_outputDataConfig.Jsonize());

  }

  if(m_hyperParametersHasBeenSet)
  {
   JsonValue hyperParametersJsonMap;
   for(auto& hyperParametersItem : m_hyperParameters)
   {
     hyperParametersJsonMap.WithString(hyperParametersItem.first, hyperParametersItem.second);
   }
   payload.WithObject("hyperParameters", std::move(hyperParametersJsonMap));

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




