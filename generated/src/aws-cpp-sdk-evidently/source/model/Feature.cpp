/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/Feature.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

Feature::Feature() : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_defaultVariationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entityOverridesHasBeenSet(false),
    m_evaluationRulesHasBeenSet(false),
    m_evaluationStrategy(FeatureEvaluationStrategy::NOT_SET),
    m_evaluationStrategyHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_valueType(VariationValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_variationsHasBeenSet(false)
{
}

Feature::Feature(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_defaultVariationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_entityOverridesHasBeenSet(false),
    m_evaluationRulesHasBeenSet(false),
    m_evaluationStrategy(FeatureEvaluationStrategy::NOT_SET),
    m_evaluationStrategyHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_valueType(VariationValueType::NOT_SET),
    m_valueTypeHasBeenSet(false),
    m_variationsHasBeenSet(false)
{
  *this = jsonValue;
}

Feature& Feature::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultVariation"))
  {
    m_defaultVariation = jsonValue.GetString("defaultVariation");

    m_defaultVariationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityOverrides"))
  {
    Aws::Map<Aws::String, JsonView> entityOverridesJsonMap = jsonValue.GetObject("entityOverrides").GetAllObjects();
    for(auto& entityOverridesItem : entityOverridesJsonMap)
    {
      m_entityOverrides[entityOverridesItem.first] = entityOverridesItem.second.AsString();
    }
    m_entityOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationRules"))
  {
    Aws::Utils::Array<JsonView> evaluationRulesJsonList = jsonValue.GetArray("evaluationRules");
    for(unsigned evaluationRulesIndex = 0; evaluationRulesIndex < evaluationRulesJsonList.GetLength(); ++evaluationRulesIndex)
    {
      m_evaluationRules.push_back(evaluationRulesJsonList[evaluationRulesIndex].AsObject());
    }
    m_evaluationRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evaluationStrategy"))
  {
    m_evaluationStrategy = FeatureEvaluationStrategyMapper::GetFeatureEvaluationStrategyForName(jsonValue.GetString("evaluationStrategy"));

    m_evaluationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("project"))
  {
    m_project = jsonValue.GetString("project");

    m_projectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("valueType"))
  {
    m_valueType = VariationValueTypeMapper::GetVariationValueTypeForName(jsonValue.GetString("valueType"));

    m_valueTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("variations"))
  {
    Aws::Utils::Array<JsonView> variationsJsonList = jsonValue.GetArray("variations");
    for(unsigned variationsIndex = 0; variationsIndex < variationsJsonList.GetLength(); ++variationsIndex)
    {
      m_variations.push_back(variationsJsonList[variationsIndex].AsObject());
    }
    m_variationsHasBeenSet = true;
  }

  return *this;
}

JsonValue Feature::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("createdTime", m_createdTime.SecondsWithMSPrecision());
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

  if(m_evaluationRulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evaluationRulesJsonList(m_evaluationRules.size());
   for(unsigned evaluationRulesIndex = 0; evaluationRulesIndex < evaluationRulesJsonList.GetLength(); ++evaluationRulesIndex)
   {
     evaluationRulesJsonList[evaluationRulesIndex].AsObject(m_evaluationRules[evaluationRulesIndex].Jsonize());
   }
   payload.WithArray("evaluationRules", std::move(evaluationRulesJsonList));

  }

  if(m_evaluationStrategyHasBeenSet)
  {
   payload.WithString("evaluationStrategy", FeatureEvaluationStrategyMapper::GetNameForFeatureEvaluationStrategy(m_evaluationStrategy));
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectHasBeenSet)
  {
   payload.WithString("project", m_project);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
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

  if(m_valueTypeHasBeenSet)
  {
   payload.WithString("valueType", VariationValueTypeMapper::GetNameForVariationValueType(m_valueType));
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

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
