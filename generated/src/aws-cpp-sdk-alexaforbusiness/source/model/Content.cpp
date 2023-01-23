/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/Content.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

Content::Content() : 
    m_textListHasBeenSet(false),
    m_ssmlListHasBeenSet(false),
    m_audioListHasBeenSet(false)
{
}

Content::Content(JsonView jsonValue) : 
    m_textListHasBeenSet(false),
    m_ssmlListHasBeenSet(false),
    m_audioListHasBeenSet(false)
{
  *this = jsonValue;
}

Content& Content::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TextList"))
  {
    Aws::Utils::Array<JsonView> textListJsonList = jsonValue.GetArray("TextList");
    for(unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex)
    {
      m_textList.push_back(textListJsonList[textListIndex].AsObject());
    }
    m_textListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SsmlList"))
  {
    Aws::Utils::Array<JsonView> ssmlListJsonList = jsonValue.GetArray("SsmlList");
    for(unsigned ssmlListIndex = 0; ssmlListIndex < ssmlListJsonList.GetLength(); ++ssmlListIndex)
    {
      m_ssmlList.push_back(ssmlListJsonList[ssmlListIndex].AsObject());
    }
    m_ssmlListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioList"))
  {
    Aws::Utils::Array<JsonView> audioListJsonList = jsonValue.GetArray("AudioList");
    for(unsigned audioListIndex = 0; audioListIndex < audioListJsonList.GetLength(); ++audioListIndex)
    {
      m_audioList.push_back(audioListJsonList[audioListIndex].AsObject());
    }
    m_audioListHasBeenSet = true;
  }

  return *this;
}

JsonValue Content::Jsonize() const
{
  JsonValue payload;

  if(m_textListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> textListJsonList(m_textList.size());
   for(unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex)
   {
     textListJsonList[textListIndex].AsObject(m_textList[textListIndex].Jsonize());
   }
   payload.WithArray("TextList", std::move(textListJsonList));

  }

  if(m_ssmlListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ssmlListJsonList(m_ssmlList.size());
   for(unsigned ssmlListIndex = 0; ssmlListIndex < ssmlListJsonList.GetLength(); ++ssmlListIndex)
   {
     ssmlListJsonList[ssmlListIndex].AsObject(m_ssmlList[ssmlListIndex].Jsonize());
   }
   payload.WithArray("SsmlList", std::move(ssmlListJsonList));

  }

  if(m_audioListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioListJsonList(m_audioList.size());
   for(unsigned audioListIndex = 0; audioListIndex < audioListJsonList.GetLength(); ++audioListIndex)
   {
     audioListJsonList[audioListIndex].AsObject(m_audioList[audioListIndex].Jsonize());
   }
   payload.WithArray("AudioList", std::move(audioListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
