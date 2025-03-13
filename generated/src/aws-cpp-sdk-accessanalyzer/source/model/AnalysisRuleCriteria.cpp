/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/AnalysisRuleCriteria.h>
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

AnalysisRuleCriteria::AnalysisRuleCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisRuleCriteria& AnalysisRuleCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountIds"))
  {
    Aws::Utils::Array<JsonView> accountIdsJsonList = jsonValue.GetArray("accountIds");
    for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
    {
      m_accountIds.push_back(accountIdsJsonList[accountIdsIndex].AsString());
    }
    m_accountIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceTags"))
  {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("resourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      Aws::Map<Aws::String, JsonView> tagsMapJsonMap = resourceTagsJsonList[resourceTagsIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> tagsMapMap;
      for(auto& tagsMapItem : tagsMapJsonMap)
      {
        tagsMapMap[tagsMapItem.first] = tagsMapItem.second.AsString();
      }
      m_resourceTags.push_back(std::move(tagsMapMap));
    }
    m_resourceTagsHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisRuleCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdsJsonList(m_accountIds.size());
   for(unsigned accountIdsIndex = 0; accountIdsIndex < accountIdsJsonList.GetLength(); ++accountIdsIndex)
   {
     accountIdsJsonList[accountIdsIndex].AsString(m_accountIds[accountIdsIndex]);
   }
   payload.WithArray("accountIds", std::move(accountIdsJsonList));

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     JsonValue tagsMapJsonMap;
     for(auto& tagsMapItem : m_resourceTags[resourceTagsIndex])
     {
       tagsMapJsonMap.WithString(tagsMapItem.first, tagsMapItem.second);
     }
     resourceTagsJsonList[resourceTagsIndex].AsObject(std::move(tagsMapJsonMap));
   }
   payload.WithArray("resourceTags", std::move(resourceTagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
