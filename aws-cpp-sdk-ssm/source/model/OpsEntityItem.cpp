/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_captureTimeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

OpsEntityItem::OpsEntityItem(JsonView jsonValue) : 
    m_captureTimeHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

OpsEntityItem& OpsEntityItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CaptureTime"))
  {
    m_captureTime = jsonValue.GetString("CaptureTime");

    m_captureTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("Content");
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

  if(m_captureTimeHasBeenSet)
  {
   payload.WithString("CaptureTime", m_captureTime);

  }

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
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
