/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListIntegrationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ListIntegrationItem::ListIntegrationItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ListIntegrationItem& ListIntegrationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");
    m_uriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ObjectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");
    m_objectTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ObjectTypeNames"))
  {
    Aws::Map<Aws::String, JsonView> objectTypeNamesJsonMap = jsonValue.GetObject("ObjectTypeNames").GetAllObjects();
    for(auto& objectTypeNamesItem : objectTypeNamesJsonMap)
    {
      m_objectTypeNames[objectTypeNamesItem.first] = objectTypeNamesItem.second.AsString();
    }
    m_objectTypeNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkflowId"))
  {
    m_workflowId = jsonValue.GetString("WorkflowId");
    m_workflowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsUnstructured"))
  {
    m_isUnstructured = jsonValue.GetBool("IsUnstructured");
    m_isUnstructuredHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventTriggerNames"))
  {
    Aws::Utils::Array<JsonView> eventTriggerNamesJsonList = jsonValue.GetArray("EventTriggerNames");
    for(unsigned eventTriggerNamesIndex = 0; eventTriggerNamesIndex < eventTriggerNamesJsonList.GetLength(); ++eventTriggerNamesIndex)
    {
      m_eventTriggerNames.push_back(eventTriggerNamesJsonList[eventTriggerNamesIndex].AsString());
    }
    m_eventTriggerNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue ListIntegrationItem::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_objectTypeNamesHasBeenSet)
  {
   JsonValue objectTypeNamesJsonMap;
   for(auto& objectTypeNamesItem : m_objectTypeNames)
   {
     objectTypeNamesJsonMap.WithString(objectTypeNamesItem.first, objectTypeNamesItem.second);
   }
   payload.WithObject("ObjectTypeNames", std::move(objectTypeNamesJsonMap));

  }

  if(m_workflowIdHasBeenSet)
  {
   payload.WithString("WorkflowId", m_workflowId);

  }

  if(m_isUnstructuredHasBeenSet)
  {
   payload.WithBool("IsUnstructured", m_isUnstructured);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_eventTriggerNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventTriggerNamesJsonList(m_eventTriggerNames.size());
   for(unsigned eventTriggerNamesIndex = 0; eventTriggerNamesIndex < eventTriggerNamesJsonList.GetLength(); ++eventTriggerNamesIndex)
   {
     eventTriggerNamesJsonList[eventTriggerNamesIndex].AsString(m_eventTriggerNames[eventTriggerNamesIndex]);
   }
   payload.WithArray("EventTriggerNames", std::move(eventTriggerNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
