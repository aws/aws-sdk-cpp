/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lex/model/GenericAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeService
{
namespace Model
{

GenericAttachment::GenericAttachment() : 
    m_titleHasBeenSet(false),
    m_subTitleHasBeenSet(false),
    m_attachmentLinkUrlHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_buttonsHasBeenSet(false)
{
}

GenericAttachment::GenericAttachment(const JsonValue& jsonValue) : 
    m_titleHasBeenSet(false),
    m_subTitleHasBeenSet(false),
    m_attachmentLinkUrlHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_buttonsHasBeenSet(false)
{
  *this = jsonValue;
}

GenericAttachment& GenericAttachment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subTitle"))
  {
    m_subTitle = jsonValue.GetString("subTitle");

    m_subTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachmentLinkUrl"))
  {
    m_attachmentLinkUrl = jsonValue.GetString("attachmentLinkUrl");

    m_attachmentLinkUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageUrl"))
  {
    m_imageUrl = jsonValue.GetString("imageUrl");

    m_imageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("buttons"))
  {
    Array<JsonValue> buttonsJsonList = jsonValue.GetArray("buttons");
    for(unsigned buttonsIndex = 0; buttonsIndex < buttonsJsonList.GetLength(); ++buttonsIndex)
    {
      m_buttons.push_back(buttonsJsonList[buttonsIndex].AsObject());
    }
    m_buttonsHasBeenSet = true;
  }

  return *this;
}

JsonValue GenericAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_subTitleHasBeenSet)
  {
   payload.WithString("subTitle", m_subTitle);

  }

  if(m_attachmentLinkUrlHasBeenSet)
  {
   payload.WithString("attachmentLinkUrl", m_attachmentLinkUrl);

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("imageUrl", m_imageUrl);

  }

  if(m_buttonsHasBeenSet)
  {
   Array<JsonValue> buttonsJsonList(m_buttons.size());
   for(unsigned buttonsIndex = 0; buttonsIndex < buttonsJsonList.GetLength(); ++buttonsIndex)
   {
     buttonsJsonList[buttonsIndex].AsObject(m_buttons[buttonsIndex].Jsonize());
   }
   payload.WithArray("buttons", std::move(buttonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws