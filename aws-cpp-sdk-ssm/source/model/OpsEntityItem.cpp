/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/OpsEntityItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsEntityItem::OpsEntityItem() : 
    m_contentHasBeenSet(false)
{
}

OpsEntityItem::OpsEntityItem(JsonView jsonValue) : 
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

OpsEntityItem& OpsEntityItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    Array<JsonView> contentJsonList = jsonValue.GetArray("Content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      Aws::Map<Aws::String, JsonView> opsEntityItemEntryJsonMap = contentJsonList[contentIndex].GetAllObjects();
      Aws::Map<Aws::String, Aws::String> opsEntityItemEntryMap;
      for(auto& opsEntityItemEntryItem : opsEntityItemEntryJsonMap)
      {
        opsEntityItemEntryMap[opsEntityItemEntryItem.first] = opsEntityItemEntryItem.second.AsString();
      }
      m_content.push_back(std::move(opsEntityItemEntryMap));
    }
    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsEntityItem::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     JsonValue opsEntityItemEntryJsonMap;
     for(auto& opsEntityItemEntryItem : m_content[contentIndex])
     {
       opsEntityItemEntryJsonMap.WithString(opsEntityItemEntryItem.first, opsEntityItemEntryItem.second);
     }
     contentJsonList[contentIndex].AsObject(std::move(opsEntityItemEntryJsonMap));
   }
   payload.WithArray("Content", std::move(contentJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
