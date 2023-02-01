/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/CreateFeatureRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFeatureRequest::CreateFeatureRequest() : 
    m_defaultVariationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entityOverridesHasBeenSet(false),
    m_evaluationStrategy(FeatureEvaluationStrategy::NOT_SET),
    m_evaluationStrategyHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_variationsHasBeenSet(false)
{
}

Aws::String CreateFeatureRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

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

  if(m_variationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> variationsJsonList(m_variations.size());
   for(unsigned variationsIndex = 0; variationsIndex < variationsJsonList.GetLength(); ++variationsIndex)
   {
     variationsJsonList[variationsIndex].AsObject(m_variations[variationsIndex].Jsonize());
   }
   payload.WithArray("variations", std::move(variationsJsonList));

  }

  return payload.View().WriteReadable();
}




