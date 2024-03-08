/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ExternalAccessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

ExternalAccessDetails::ExternalAccessDetails() : 
    m_actionHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

ExternalAccessDetails::ExternalAccessDetails(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalAccessDetails& ExternalAccessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    Aws::Utils::Array<JsonView> actionJsonList = jsonValue.GetArray("action");
    for(unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex)
    {
      m_action.push_back(actionJsonList[actionIndex].AsString());
    }
    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    Aws::Map<Aws::String, JsonView> conditionJsonMap = jsonValue.GetObject("condition").GetAllObjects();
    for(auto& conditionItem : conditionJsonMap)
    {
      m_condition[conditionItem.first] = conditionItem.second.AsString();
    }
    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPublic"))
  {
    m_isPublic = jsonValue.GetBool("isPublic");

    m_isPublicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principal"))
  {
    Aws::Map<Aws::String, JsonView> principalJsonMap = jsonValue.GetObject("principal").GetAllObjects();
    for(auto& principalItem : principalJsonMap)
    {
      m_principal[principalItem.first] = principalItem.second.AsString();
    }
    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Aws::Utils::Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalAccessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionJsonList(m_action.size());
   for(unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex)
   {
     actionJsonList[actionIndex].AsString(m_action[actionIndex]);
   }
   payload.WithArray("action", std::move(actionJsonList));

  }

  if(m_conditionHasBeenSet)
  {
   JsonValue conditionJsonMap;
   for(auto& conditionItem : m_condition)
   {
     conditionJsonMap.WithString(conditionItem.first, conditionItem.second);
   }
   payload.WithObject("condition", std::move(conditionJsonMap));

  }

  if(m_isPublicHasBeenSet)
  {
   payload.WithBool("isPublic", m_isPublic);

  }

  if(m_principalHasBeenSet)
  {
   JsonValue principalJsonMap;
   for(auto& principalItem : m_principal)
   {
     principalJsonMap.WithString(principalItem.first, principalItem.second);
   }
   payload.WithObject("principal", std::move(principalJsonMap));

  }

  if(m_sourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
