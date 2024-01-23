/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CisTargets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CisTargets::CisTargets() : 
    m_accountIdsHasBeenSet(false),
    m_targetResourceTagsHasBeenSet(false)
{
}

CisTargets::CisTargets(JsonView jsonValue) : 
    m_accountIdsHasBeenSet(false),
    m_targetResourceTagsHasBeenSet(false)
{
  *this = jsonValue;
}

CisTargets& CisTargets::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("targetResourceTags"))
  {
    Aws::Map<Aws::String, JsonView> targetResourceTagsJsonMap = jsonValue.GetObject("targetResourceTags").GetAllObjects();
    for(auto& targetResourceTagsItem : targetResourceTagsJsonMap)
    {
      Aws::Utils::Array<JsonView> tagValueListJsonList = targetResourceTagsItem.second.AsArray();
      Aws::Vector<Aws::String> tagValueListList;
      tagValueListList.reserve((size_t)tagValueListJsonList.GetLength());
      for(unsigned tagValueListIndex = 0; tagValueListIndex < tagValueListJsonList.GetLength(); ++tagValueListIndex)
      {
        tagValueListList.push_back(tagValueListJsonList[tagValueListIndex].AsString());
      }
      m_targetResourceTags[targetResourceTagsItem.first] = std::move(tagValueListList);
    }
    m_targetResourceTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue CisTargets::Jsonize() const
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

  if(m_targetResourceTagsHasBeenSet)
  {
   JsonValue targetResourceTagsJsonMap;
   for(auto& targetResourceTagsItem : m_targetResourceTags)
   {
     Aws::Utils::Array<JsonValue> tagValueListJsonList(targetResourceTagsItem.second.size());
     for(unsigned tagValueListIndex = 0; tagValueListIndex < tagValueListJsonList.GetLength(); ++tagValueListIndex)
     {
       tagValueListJsonList[tagValueListIndex].AsString(targetResourceTagsItem.second[tagValueListIndex]);
     }
     targetResourceTagsJsonMap.WithArray(targetResourceTagsItem.first, std::move(tagValueListJsonList));
   }
   payload.WithObject("targetResourceTags", std::move(targetResourceTagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
