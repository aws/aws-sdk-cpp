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

#include <aws/elastictranscoder/model/Captions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Captions::Captions() : 
    m_captionFormatsHasBeenSet(false)
{
}

Captions::Captions(const JsonValue& jsonValue) : 
    m_captionFormatsHasBeenSet(false)
{
  *this = jsonValue;
}

Captions& Captions::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CaptionFormats"))
  {
    Array<JsonValue> captionFormatsJsonList = jsonValue.GetArray("CaptionFormats");
    for(unsigned captionFormatsIndex = 0; captionFormatsIndex < captionFormatsJsonList.GetLength(); ++captionFormatsIndex)
    {
      m_captionFormats.push_back(captionFormatsJsonList[captionFormatsIndex].AsObject());
    }
    m_captionFormatsHasBeenSet = true;
  }

  return *this;
}

JsonValue Captions::Jsonize() const
{
  JsonValue payload;

  if(m_captionFormatsHasBeenSet)
  {
   Array<JsonValue> captionFormatsJsonList(m_captionFormats.size());
   for(unsigned captionFormatsIndex = 0; captionFormatsIndex < captionFormatsJsonList.GetLength(); ++captionFormatsIndex)
   {
     captionFormatsJsonList[captionFormatsIndex].AsObject(m_captionFormats[captionFormatsIndex].Jsonize());
   }
   payload.WithArray("CaptionFormats", std::move(captionFormatsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws