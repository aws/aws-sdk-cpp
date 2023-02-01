/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ImageResponseCard.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ImageResponseCard::ImageResponseCard() : 
    m_titleHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_buttonsHasBeenSet(false)
{
}

ImageResponseCard::ImageResponseCard(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_subtitleHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_buttonsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageResponseCard& ImageResponseCard::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subtitle"))
  {
    m_subtitle = jsonValue.GetString("subtitle");

    m_subtitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageUrl"))
  {
    m_imageUrl = jsonValue.GetString("imageUrl");

    m_imageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buttons"))
  {
    Aws::Utils::Array<JsonView> buttonsJsonList = jsonValue.GetArray("buttons");
    for(unsigned buttonsIndex = 0; buttonsIndex < buttonsJsonList.GetLength(); ++buttonsIndex)
    {
      m_buttons.push_back(buttonsJsonList[buttonsIndex].AsObject());
    }
    m_buttonsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageResponseCard::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_subtitleHasBeenSet)
  {
   payload.WithString("subtitle", m_subtitle);

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("imageUrl", m_imageUrl);

  }

  if(m_buttonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> buttonsJsonList(m_buttons.size());
   for(unsigned buttonsIndex = 0; buttonsIndex < buttonsJsonList.GetLength(); ++buttonsIndex)
   {
     buttonsJsonList[buttonsIndex].AsObject(m_buttons[buttonsIndex].Jsonize());
   }
   payload.WithArray("buttons", std::move(buttonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
