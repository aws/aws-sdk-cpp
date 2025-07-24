/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/TextMatchItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

TextMatchItem::TextMatchItem(JsonView jsonValue)
{
  *this = jsonValue;
}

TextMatchItem& TextMatchItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attribute"))
  {
    m_attribute = jsonValue.GetString("attribute");
    m_attributeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchOffsets"))
  {
    Aws::Utils::Array<JsonView> matchOffsetsJsonList = jsonValue.GetArray("matchOffsets");
    for(unsigned matchOffsetsIndex = 0; matchOffsetsIndex < matchOffsetsJsonList.GetLength(); ++matchOffsetsIndex)
    {
      m_matchOffsets.push_back(matchOffsetsJsonList[matchOffsetsIndex].AsObject());
    }
    m_matchOffsetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue TextMatchItem::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithString("attribute", m_attribute);

  }

  if(m_matchOffsetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchOffsetsJsonList(m_matchOffsets.size());
   for(unsigned matchOffsetsIndex = 0; matchOffsetsIndex < matchOffsetsJsonList.GetLength(); ++matchOffsetsIndex)
   {
     matchOffsetsJsonList[matchOffsetsIndex].AsObject(m_matchOffsets[matchOffsetsIndex].Jsonize());
   }
   payload.WithArray("matchOffsets", std::move(matchOffsetsJsonList));

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
