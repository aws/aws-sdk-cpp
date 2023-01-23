/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Finding.h>
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

Finding::Finding() : 
    m_idHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_analyzedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
}

Finding::Finding(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_analyzedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_sourcesHasBeenSet(false)
{
  *this = jsonValue;
}

Finding& Finding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("action"))
  {
    Aws::Utils::Array<JsonView> actionJsonList = jsonValue.GetArray("action");
    for(unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex)
    {
      m_action.push_back(actionJsonList[actionIndex].AsString());
    }
    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isPublic"))
  {
    m_isPublic = jsonValue.GetBool("isPublic");

    m_isPublicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("analyzedAt"))
  {
    m_analyzedAt = jsonValue.GetString("analyzedAt");

    m_analyzedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceOwnerAccount"))
  {
    m_resourceOwnerAccount = jsonValue.GetString("resourceOwnerAccount");

    m_resourceOwnerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
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

JsonValue Finding::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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

  if(m_actionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionJsonList(m_action.size());
   for(unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex)
   {
     actionJsonList[actionIndex].AsString(m_action[actionIndex]);
   }
   payload.WithArray("action", std::move(actionJsonList));

  }

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_isPublicHasBeenSet)
  {
   payload.WithBool("isPublic", m_isPublic);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
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

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_analyzedAtHasBeenSet)
  {
   payload.WithString("analyzedAt", m_analyzedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  if(m_resourceOwnerAccountHasBeenSet)
  {
   payload.WithString("resourceOwnerAccount", m_resourceOwnerAccount);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

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
