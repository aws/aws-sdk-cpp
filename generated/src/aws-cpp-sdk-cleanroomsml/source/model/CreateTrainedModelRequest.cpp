/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/CreateTrainedModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTrainedModelRequest::CreateTrainedModelRequest() : 
    m_membershipIdentifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_configuredModelAlgorithmAssociationArnHasBeenSet(false),
    m_hyperparametersHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_stoppingConditionHasBeenSet(false),
    m_dataChannelsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTrainedModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_configuredModelAlgorithmAssociationArnHasBeenSet)
  {
   payload.WithString("configuredModelAlgorithmAssociationArn", m_configuredModelAlgorithmAssociationArn);

  }

  if(m_hyperparametersHasBeenSet)
  {
   JsonValue hyperparametersJsonMap;
   for(auto& hyperparametersItem : m_hyperparameters)
   {
     hyperparametersJsonMap.WithString(hyperparametersItem.first, hyperparametersItem.second);
   }
   payload.WithObject("hyperparameters", std::move(hyperparametersJsonMap));

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

  if(m_resourceConfigHasBeenSet)
  {
   payload.WithObject("resourceConfig", m_resourceConfig.Jsonize());

  }

  if(m_stoppingConditionHasBeenSet)
  {
   payload.WithObject("stoppingCondition", m_stoppingCondition.Jsonize());

  }

  if(m_dataChannelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataChannelsJsonList(m_dataChannels.size());
   for(unsigned dataChannelsIndex = 0; dataChannelsIndex < dataChannelsJsonList.GetLength(); ++dataChannelsIndex)
   {
     dataChannelsJsonList[dataChannelsIndex].AsObject(m_dataChannels[dataChannelsIndex].Jsonize());
   }
   payload.WithArray("dataChannels", std::move(dataChannelsJsonList));

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

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




