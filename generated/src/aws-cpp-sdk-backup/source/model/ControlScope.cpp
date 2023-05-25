/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ControlScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ControlScope::ControlScope() : 
    m_complianceResourceIdsHasBeenSet(false),
    m_complianceResourceTypesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ControlScope::ControlScope(JsonView jsonValue) : 
    m_complianceResourceIdsHasBeenSet(false),
    m_complianceResourceTypesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ControlScope& ControlScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceResourceIds"))
  {
    Aws::Utils::Array<JsonView> complianceResourceIdsJsonList = jsonValue.GetArray("ComplianceResourceIds");
    for(unsigned complianceResourceIdsIndex = 0; complianceResourceIdsIndex < complianceResourceIdsJsonList.GetLength(); ++complianceResourceIdsIndex)
    {
      m_complianceResourceIds.push_back(complianceResourceIdsJsonList[complianceResourceIdsIndex].AsString());
    }
    m_complianceResourceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceResourceTypes"))
  {
    Aws::Utils::Array<JsonView> complianceResourceTypesJsonList = jsonValue.GetArray("ComplianceResourceTypes");
    for(unsigned complianceResourceTypesIndex = 0; complianceResourceTypesIndex < complianceResourceTypesJsonList.GetLength(); ++complianceResourceTypesIndex)
    {
      m_complianceResourceTypes.push_back(complianceResourceTypesJsonList[complianceResourceTypesIndex].AsString());
    }
    m_complianceResourceTypesHasBeenSet = true;
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

  return *this;
}

JsonValue ControlScope::Jsonize() const
{
  JsonValue payload;

  if(m_complianceResourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceResourceIdsJsonList(m_complianceResourceIds.size());
   for(unsigned complianceResourceIdsIndex = 0; complianceResourceIdsIndex < complianceResourceIdsJsonList.GetLength(); ++complianceResourceIdsIndex)
   {
     complianceResourceIdsJsonList[complianceResourceIdsIndex].AsString(m_complianceResourceIds[complianceResourceIdsIndex]);
   }
   payload.WithArray("ComplianceResourceIds", std::move(complianceResourceIdsJsonList));

  }

  if(m_complianceResourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> complianceResourceTypesJsonList(m_complianceResourceTypes.size());
   for(unsigned complianceResourceTypesIndex = 0; complianceResourceTypesIndex < complianceResourceTypesJsonList.GetLength(); ++complianceResourceTypesIndex)
   {
     complianceResourceTypesJsonList[complianceResourceTypesIndex].AsString(m_complianceResourceTypes[complianceResourceTypesIndex]);
   }
   payload.WithArray("ComplianceResourceTypes", std::move(complianceResourceTypesJsonList));

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

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
