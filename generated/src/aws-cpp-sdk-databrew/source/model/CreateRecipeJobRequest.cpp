/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/CreateRecipeJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateRecipeJobRequest::CreateRecipeJobRequest() : 
    m_datasetNameHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_encryptionMode(EncryptionMode::NOT_SET),
    m_encryptionModeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_logSubscription(LogSubscription::NOT_SET),
    m_logSubscriptionHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_maxRetries(0),
    m_maxRetriesHasBeenSet(false),
    m_outputsHasBeenSet(false),
    m_dataCatalogOutputsHasBeenSet(false),
    m_databaseOutputsHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_recipeReferenceHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

Aws::String CreateRecipeJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_encryptionModeHasBeenSet)
  {
   payload.WithString("EncryptionMode", EncryptionModeMapper::GetNameForEncryptionMode(m_encryptionMode));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_logSubscriptionHasBeenSet)
  {
   payload.WithString("LogSubscription", LogSubscriptionMapper::GetNameForLogSubscription(m_logSubscription));
  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("MaxCapacity", m_maxCapacity);

  }

  if(m_maxRetriesHasBeenSet)
  {
   payload.WithInteger("MaxRetries", m_maxRetries);

  }

  if(m_outputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outputsJsonList(m_outputs.size());
   for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
   {
     outputsJsonList[outputsIndex].AsObject(m_outputs[outputsIndex].Jsonize());
   }
   payload.WithArray("Outputs", std::move(outputsJsonList));

  }

  if(m_dataCatalogOutputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataCatalogOutputsJsonList(m_dataCatalogOutputs.size());
   for(unsigned dataCatalogOutputsIndex = 0; dataCatalogOutputsIndex < dataCatalogOutputsJsonList.GetLength(); ++dataCatalogOutputsIndex)
   {
     dataCatalogOutputsJsonList[dataCatalogOutputsIndex].AsObject(m_dataCatalogOutputs[dataCatalogOutputsIndex].Jsonize());
   }
   payload.WithArray("DataCatalogOutputs", std::move(dataCatalogOutputsJsonList));

  }

  if(m_databaseOutputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databaseOutputsJsonList(m_databaseOutputs.size());
   for(unsigned databaseOutputsIndex = 0; databaseOutputsIndex < databaseOutputsJsonList.GetLength(); ++databaseOutputsIndex)
   {
     databaseOutputsJsonList[databaseOutputsIndex].AsObject(m_databaseOutputs[databaseOutputsIndex].Jsonize());
   }
   payload.WithArray("DatabaseOutputs", std::move(databaseOutputsJsonList));

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("ProjectName", m_projectName);

  }

  if(m_recipeReferenceHasBeenSet)
  {
   payload.WithObject("RecipeReference", m_recipeReference.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  return payload.View().WriteReadable();
}




