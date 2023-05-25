/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/CreateMLModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMLModelRequest::CreateMLModelRequest() : 
    m_mLModelIdHasBeenSet(false),
    m_mLModelNameHasBeenSet(false),
    m_mLModelType(MLModelType::NOT_SET),
    m_mLModelTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_trainingDataSourceIdHasBeenSet(false),
    m_recipeHasBeenSet(false),
    m_recipeUriHasBeenSet(false)
{
}

Aws::String CreateMLModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_mLModelIdHasBeenSet)
  {
   payload.WithString("MLModelId", m_mLModelId);

  }

  if(m_mLModelNameHasBeenSet)
  {
   payload.WithString("MLModelName", m_mLModelName);

  }

  if(m_mLModelTypeHasBeenSet)
  {
   payload.WithString("MLModelType", MLModelTypeMapper::GetNameForMLModelType(m_mLModelType));
  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
   }
   payload.WithObject("Parameters", std::move(parametersJsonMap));

  }

  if(m_trainingDataSourceIdHasBeenSet)
  {
   payload.WithString("TrainingDataSourceId", m_trainingDataSourceId);

  }

  if(m_recipeHasBeenSet)
  {
   payload.WithString("Recipe", m_recipe);

  }

  if(m_recipeUriHasBeenSet)
  {
   payload.WithString("RecipeUri", m_recipeUri);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateMLModelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.CreateMLModel"));
  return headers;

}




