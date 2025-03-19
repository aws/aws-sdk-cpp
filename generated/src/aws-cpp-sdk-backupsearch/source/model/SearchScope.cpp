/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/SearchScope.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupSearch
{
namespace Model
{

SearchScope::SearchScope(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchScope& SearchScope::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupResourceTypes"))
  {
    Aws::Utils::Array<JsonView> backupResourceTypesJsonList = jsonValue.GetArray("BackupResourceTypes");
    for(unsigned backupResourceTypesIndex = 0; backupResourceTypesIndex < backupResourceTypesJsonList.GetLength(); ++backupResourceTypesIndex)
    {
      m_backupResourceTypes.push_back(ResourceTypeMapper::GetResourceTypeForName(backupResourceTypesJsonList[backupResourceTypesIndex].AsString()));
    }
    m_backupResourceTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupResourceCreationTime"))
  {
    m_backupResourceCreationTime = jsonValue.GetObject("BackupResourceCreationTime");
    m_backupResourceCreationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceResourceArns"))
  {
    Aws::Utils::Array<JsonView> sourceResourceArnsJsonList = jsonValue.GetArray("SourceResourceArns");
    for(unsigned sourceResourceArnsIndex = 0; sourceResourceArnsIndex < sourceResourceArnsJsonList.GetLength(); ++sourceResourceArnsIndex)
    {
      m_sourceResourceArns.push_back(sourceResourceArnsJsonList[sourceResourceArnsIndex].AsString());
    }
    m_sourceResourceArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupResourceArns"))
  {
    Aws::Utils::Array<JsonView> backupResourceArnsJsonList = jsonValue.GetArray("BackupResourceArns");
    for(unsigned backupResourceArnsIndex = 0; backupResourceArnsIndex < backupResourceArnsJsonList.GetLength(); ++backupResourceArnsIndex)
    {
      m_backupResourceArns.push_back(backupResourceArnsJsonList[backupResourceArnsIndex].AsString());
    }
    m_backupResourceArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupResourceTags"))
  {
    Aws::Map<Aws::String, JsonView> backupResourceTagsJsonMap = jsonValue.GetObject("BackupResourceTags").GetAllObjects();
    for(auto& backupResourceTagsItem : backupResourceTagsJsonMap)
    {
      m_backupResourceTags[backupResourceTagsItem.first] = backupResourceTagsItem.second.AsString();
    }
    m_backupResourceTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchScope::Jsonize() const
{
  JsonValue payload;

  if(m_backupResourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backupResourceTypesJsonList(m_backupResourceTypes.size());
   for(unsigned backupResourceTypesIndex = 0; backupResourceTypesIndex < backupResourceTypesJsonList.GetLength(); ++backupResourceTypesIndex)
   {
     backupResourceTypesJsonList[backupResourceTypesIndex].AsString(ResourceTypeMapper::GetNameForResourceType(m_backupResourceTypes[backupResourceTypesIndex]));
   }
   payload.WithArray("BackupResourceTypes", std::move(backupResourceTypesJsonList));

  }

  if(m_backupResourceCreationTimeHasBeenSet)
  {
   payload.WithObject("BackupResourceCreationTime", m_backupResourceCreationTime.Jsonize());

  }

  if(m_sourceResourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceResourceArnsJsonList(m_sourceResourceArns.size());
   for(unsigned sourceResourceArnsIndex = 0; sourceResourceArnsIndex < sourceResourceArnsJsonList.GetLength(); ++sourceResourceArnsIndex)
   {
     sourceResourceArnsJsonList[sourceResourceArnsIndex].AsString(m_sourceResourceArns[sourceResourceArnsIndex]);
   }
   payload.WithArray("SourceResourceArns", std::move(sourceResourceArnsJsonList));

  }

  if(m_backupResourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> backupResourceArnsJsonList(m_backupResourceArns.size());
   for(unsigned backupResourceArnsIndex = 0; backupResourceArnsIndex < backupResourceArnsJsonList.GetLength(); ++backupResourceArnsIndex)
   {
     backupResourceArnsJsonList[backupResourceArnsIndex].AsString(m_backupResourceArns[backupResourceArnsIndex]);
   }
   payload.WithArray("BackupResourceArns", std::move(backupResourceArnsJsonList));

  }

  if(m_backupResourceTagsHasBeenSet)
  {
   JsonValue backupResourceTagsJsonMap;
   for(auto& backupResourceTagsItem : m_backupResourceTags)
   {
     backupResourceTagsJsonMap.WithString(backupResourceTagsItem.first, backupResourceTagsItem.second);
   }
   payload.WithObject("BackupResourceTags", std::move(backupResourceTagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BackupSearch
} // namespace Aws
