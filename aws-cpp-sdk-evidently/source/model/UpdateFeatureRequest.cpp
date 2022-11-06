/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/UpdateFeatureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFeatureRequest::UpdateFeatureRequest() : 
    m_addOrUpdateVariationsHasBeenSet(false),
    m_defaultVariationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entityOverridesHasBeenSet(false),
    m_evaluationStrategy(FeatureEvaluationStrategy::NOT_SET),
    m_evaluationStrategyHasBeenSet(false),
    m_featureHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_removeVariationsHasBeenSet(false)
{
}

Aws::String UpdateFeatureRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addOrUpdateVariationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addOrUpdateVariationsJsonList(m_addOrUpdateVariations.size());
   for(unsigned addOrUpdateVariationsIndex = 0; addOrUpdateVariationsIndex < addOrUpdateVariationsJsonList.GetLength(); ++addOrUpdateVariationsIndex)
   {
     addOrUpdateVariationsJsonList[addOrUpdateVariationsIndex].AsObject(m_addOrUpdateVariations[addOrUpdateVariationsIndex].Jsonize());
   }
   payload.WithArray("addOrUpdateVariations", std::move(addOrUpdateVariationsJsonList));

  }

  if(m_defaultVariationHasBeenSet)
  {
   payload.WithString("defaultVariation", m_defaultVariation);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_entityOverridesHasBeenSet)
  {
   JsonValue entityOverridesJsonMap;
   for(auto& entityOverridesItem : m_entityOverrides)
   {
     entityOverridesJsonMap.WithString(entityOverridesItem.first, entityOverridesItem.second);
   }
   payload.WithObject("entityOverrides", std::move(entityOverridesJsonMap));

  }

  if(m_evaluationStrategyHasBeenSet)
  {
   payload.WithString("evaluationStrategy", FeatureEvaluationStrategyMapper::GetNameForFeatureEvaluationStrategy(m_evaluationStrategy));
  }

  if(m_removeVariationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeVariationsJsonList(m_removeVariations.size());
   for(unsigned removeVariationsIndex = 0; removeVariationsIndex < removeVariationsJsonList.GetLength(); ++removeVariationsIndex)
   {
     removeVariationsJsonList[removeVariationsIndex].AsString(m_removeVariations[removeVariationsIndex]);
   }
   payload.WithArray("removeVariations", std::move(removeVariationsJsonList));

  }

  return payload.View().WriteReadable();
}




