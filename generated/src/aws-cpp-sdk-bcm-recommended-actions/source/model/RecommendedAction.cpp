/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/RecommendedAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMRecommendedActions
{
namespace Model
{

RecommendedAction::RecommendedAction(JsonView jsonValue)
{
  *this = jsonValue;
}

RecommendedAction& RecommendedAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ActionTypeMapper::GetActionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("feature"))
  {
    m_feature = FeatureMapper::GetFeatureForName(jsonValue.GetString("feature"));
    m_featureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("context"))
  {
    Aws::Map<Aws::String, JsonView> contextJsonMap = jsonValue.GetObject("context").GetAllObjects();
    for(auto& contextItem : contextJsonMap)
    {
      m_context[contextItem.first] = contextItem.second.AsString();
    }
    m_contextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextSteps"))
  {
    Aws::Utils::Array<JsonView> nextStepsJsonList = jsonValue.GetArray("nextSteps");
    for(unsigned nextStepsIndex = 0; nextStepsIndex < nextStepsJsonList.GetLength(); ++nextStepsIndex)
    {
      m_nextSteps.push_back(nextStepsJsonList[nextStepsIndex].AsString());
    }
    m_nextStepsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedTimeStamp"))
  {
    m_lastUpdatedTimeStamp = jsonValue.GetString("lastUpdatedTimeStamp");
    m_lastUpdatedTimeStampHasBeenSet = true;
  }
  return *this;
}

JsonValue RecommendedAction::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ActionTypeMapper::GetNameForActionType(m_type));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  if(m_featureHasBeenSet)
  {
   payload.WithString("feature", FeatureMapper::GetNameForFeature(m_feature));
  }

  if(m_contextHasBeenSet)
  {
   JsonValue contextJsonMap;
   for(auto& contextItem : m_context)
   {
     contextJsonMap.WithString(contextItem.first, contextItem.second);
   }
   payload.WithObject("context", std::move(contextJsonMap));

  }

  if(m_nextStepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nextStepsJsonList(m_nextSteps.size());
   for(unsigned nextStepsIndex = 0; nextStepsIndex < nextStepsJsonList.GetLength(); ++nextStepsIndex)
   {
     nextStepsJsonList[nextStepsIndex].AsString(m_nextSteps[nextStepsIndex]);
   }
   payload.WithArray("nextSteps", std::move(nextStepsJsonList));

  }

  if(m_lastUpdatedTimeStampHasBeenSet)
  {
   payload.WithString("lastUpdatedTimeStamp", m_lastUpdatedTimeStamp);

  }

  return payload;
}

} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
