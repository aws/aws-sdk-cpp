/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/BatchDeleteRecipeVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchDeleteRecipeVersionRequest::BatchDeleteRecipeVersionRequest() : 
    m_nameHasBeenSet(false),
    m_recipeVersionsHasBeenSet(false)
{
}

Aws::String BatchDeleteRecipeVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recipeVersionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recipeVersionsJsonList(m_recipeVersions.size());
   for(unsigned recipeVersionsIndex = 0; recipeVersionsIndex < recipeVersionsJsonList.GetLength(); ++recipeVersionsIndex)
   {
     recipeVersionsJsonList[recipeVersionsIndex].AsString(m_recipeVersions[recipeVersionsIndex]);
   }
   payload.WithArray("RecipeVersions", std::move(recipeVersionsJsonList));

  }

  return payload.View().WriteReadable();
}




