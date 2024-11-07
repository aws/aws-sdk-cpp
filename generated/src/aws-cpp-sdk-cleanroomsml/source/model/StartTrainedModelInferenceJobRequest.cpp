/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/StartTrainedModelInferenceJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTrainedModelInferenceJobRequest::StartTrainedModelInferenceJobRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_trainedModelArnHasBeenSet(false),
    m_configuredModelAlgorithmAssociationArnHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_outputConfigurationHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_containerExecutionParametersHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartTrainedModelInferenceJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_trainedModelArnHasBeenSet)
  {
   payload.WithString("trainedModelArn", m_trainedModelArn);

  }

  if(m_configuredModelAlgorithmAssociationArnHasBeenSet)
  {
   payload.WithString("configuredModelAlgorithmAssociationArn", m_configuredModelAlgorithmAssociationArn);

  }

  if(m_resourceConfigHasBeenSet)
  {
   payload.WithObject("resourceConfig", m_resourceConfig.Jsonize());

  }

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_containerExecutionParametersHasBeenSet)
  {
   payload.WithObject("containerExecutionParameters", m_containerExecutionParameters.Jsonize());

  }

  if(m_environmentHasBeenSet)
  {
   JsonValue environmentJsonMap;
   for(auto& environmentItem : m_environment)
   {
     environmentJsonMap.WithString(environmentItem.first, environmentItem.second);
   }
   payload.WithObject("environment", std::move(environmentJsonMap));

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




