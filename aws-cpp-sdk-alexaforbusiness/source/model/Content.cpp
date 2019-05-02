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
    Array<JsonView> textListJsonList = jsonValue.GetArray("TextList");
    for(unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex)
    {
      m_textList.push_back(textListJsonList[textListIndex].AsObject());
    }
    m_textListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SsmlList"))
  {
    Array<JsonView> ssmlListJsonList = jsonValue.GetArray("SsmlList");
    for(unsigned ssmlListIndex = 0; ssmlListIndex < ssmlListJsonList.GetLength(); ++ssmlListIndex)
    {
      m_ssmlList.push_back(ssmlListJsonList[ssmlListIndex].AsObject());
    }
    m_ssmlListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioList"))
  {
    Array<JsonView> audioListJsonList = jsonValue.GetArray("AudioList");
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
   Array<JsonValue> textListJsonList(m_textList.size());
   for(unsigned textListIndex = 0; textListIndex < textListJsonList.GetLength(); ++textListIndex)
   {
     textListJsonList[textListIndex].AsObject(m_textList[textListIndex].Jsonize());
   }
   payload.WithArray("TextList", std::move(textListJsonList));

  }

  if(m_ssmlListHasBeenSet)
  {
   Array<JsonValue> ssmlListJsonList(m_ssmlList.size());
   for(unsigned ssmlListIndex = 0; ssmlListIndex < ssmlListJsonList.GetLength(); ++ssmlListIndex)
   {
     ssmlListJsonList[ssmlListIndex].AsObject(m_ssmlList[ssmlListIndex].Jsonize());
   }
   payload.WithArray("SsmlList", std::move(ssmlListJsonList));

  }

  if(m_audioListHasBeenSet)
  {
   Array<JsonValue> audioListJsonList(m_audioList.size());
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
