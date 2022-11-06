/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/FeatureSummary.h>
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

FeatureSummary::FeatureSummary() : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_defaultVariationHasBeenSet(false),
    m_evaluationRulesHasBeenSet(false),
    m_evaluationStrategy(FeatureEvaluationStrategy::NOT_SET),
    m_evaluationStrategyHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

FeatureSummary::FeatureSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_defaultVariationHasBeenSet(false),
    m_evaluationRulesHasBeenSet(false),
    m_evaluationStrategy(FeatureEvaluationStrategy::NOT_SET),
    m_evaluationStrategyHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_projectHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureSummary& FeatureSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue FeatureSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
