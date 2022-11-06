/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/InAppMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

InAppMessage::InAppMessage() : 
    m_contentHasBeenSet(false),
    m_customConfigHasBeenSet(false),
    m_layout(Layout::NOT_SET),
    m_layoutHasBeenSet(false)
{
}

InAppMessage::InAppMessage(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_customConfigHasBeenSet(false),
    m_layout(Layout::NOT_SET),
    m_layoutHasBeenSet(false)
{
  *this = jsonValue;
}

InAppMessage& InAppMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    Aws::Utils::Array<JsonView> contentJsonList = jsonValue.GetArray("Content");
    for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
    {
      m_content.push_back(contentJsonList[contentIndex].AsObject());
    }
    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomConfig"))
  {
    Aws::Map<Aws::String, JsonView> customConfigJsonMap = jsonValue.GetObject("CustomConfig").GetAllObjects();
    for(auto& customConfigItem : customConfigJsonMap)
    {
      m_customConfig[customConfigItem.first] = customConfigItem.second.AsString();
    }
    m_customConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Layout"))
  {
    m_layout = LayoutMapper::GetLayoutForName(jsonValue.GetString("Layout"));

    m_layoutHasBeenSet = true;
  }

  return *this;
}

JsonValue InAppMessage::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contentJsonList(m_content.size());
   for(unsigned contentIndex = 0; contentIndex < contentJsonList.GetLength(); ++contentIndex)
   {
     contentJsonList[contentIndex].AsObject(m_content[contentIndex].Jsonize());
   }
   payload.WithArray("Content", std::move(contentJsonList));

  }

  if(m_customConfigHasBeenSet)
  {
   JsonValue customConfigJsonMap;
   for(auto& customConfigItem : m_customConfig)
   {
     customConfigJsonMap.WithString(customConfigItem.first, customConfigItem.second);
   }
   payload.WithObject("CustomConfig", std::move(customConfigJsonMap));

  }

  if(m_layoutHasBeenSet)
  {
   payload.WithString("Layout", LayoutMapper::GetNameForLayout(m_layout));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
