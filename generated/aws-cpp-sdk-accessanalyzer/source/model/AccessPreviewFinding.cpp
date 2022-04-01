/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AccessPreviewFinding.h>
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

AccessPreviewFinding::AccessPreviewFinding() : 
    m_actionHasBeenSet(false),
    m_changeType(FindingChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_existingFindingIdHasBeenSet(false),
    m_existingFindingStatus(FindingStatus::NOT_SET),
    m_existingFindingStatusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AccessPreviewFinding::AccessPreviewFinding(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_changeType(FindingChangeType::NOT_SET),
    m_changeTypeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_existingFindingIdHasBeenSet(false),
    m_existingFindingStatus(FindingStatus::NOT_SET),
    m_existingFindingStatusHasBeenSet(false),
    m_idHasBeenSet(false),
    m_isPublic(false),
    m_isPublicHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_resourceHasBeenSet(false),
    m_resourceOwnerAccountHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_sourcesHasBeenSet(false),
    m_status(FindingStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AccessPreviewFinding& AccessPreviewFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    Array<JsonView> actionJsonList = jsonValue.GetArray("action");
    for(unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex)
    {
      m_action.push_back(actionJsonList[actionIndex].AsString());
    }
    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changeType"))
  {
    m_changeType = FindingChangeTypeMapper::GetFindingChangeTypeForName(jsonValue.GetString("changeType"));

    m_changeTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("existingFindingId"))
  {
    m_existingFindingId = jsonValue.GetString("existingFindingId");

    m_existingFindingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("existingFindingStatus"))
  {
    m_existingFindingStatus = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("existingFindingStatus"));

    m_existingFindingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetString("resource");

    m_resourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceOwnerAccount"))
  {
    m_resourceOwnerAccount = jsonValue.GetString("resourceOwnerAccount");

    m_resourceOwnerAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sources"))
  {
    Array<JsonView> sourcesJsonList = jsonValue.GetArray("sources");
    for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
    {
      m_sources.push_back(sourcesJsonList[sourcesIndex].AsObject());
    }
    m_sourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FindingStatusMapper::GetFindingStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessPreviewFinding::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   Array<JsonValue> actionJsonList(m_action.size());
   for(unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex)
   {
     actionJsonList[actionIndex].AsString(m_action[actionIndex]);
   }
   payload.WithArray("action", std::move(actionJsonList));

  }

  if(m_changeTypeHasBeenSet)
  {
   payload.WithString("changeType", FindingChangeTypeMapper::GetNameForFindingChangeType(m_changeType));
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
   payload.WithString("createdAt", m_createdAt.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_existingFindingIdHasBeenSet)
  {
   payload.WithString("existingFindingId", m_existingFindingId);

  }

  if(m_existingFindingStatusHasBeenSet)
  {
   payload.WithString("existingFindingStatus", FindingStatusMapper::GetNameForFindingStatus(m_existingFindingStatus));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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

  if(m_resourceHasBeenSet)
  {
   payload.WithString("resource", m_resource);

  }

  if(m_resourceOwnerAccountHasBeenSet)
  {
   payload.WithString("resourceOwnerAccount", m_resourceOwnerAccount);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_sourcesHasBeenSet)
  {
   Array<JsonValue> sourcesJsonList(m_sources.size());
   for(unsigned sourcesIndex = 0; sourcesIndex < sourcesJsonList.GetLength(); ++sourcesIndex)
   {
     sourcesJsonList[sourcesIndex].AsObject(m_sources[sourcesIndex].Jsonize());
   }
   payload.WithArray("sources", std::move(sourcesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FindingStatusMapper::GetNameForFindingStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
