/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Captions::Captions(JsonView jsonValue) : 
    m_captionFormatsHasBeenSet(false)
{
  *this = jsonValue;
}

Captions& Captions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CaptionFormats"))
  {
    Aws::Utils::Array<JsonView> captionFormatsJsonList = jsonValue.GetArray("CaptionFormats");
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
   Aws::Utils::Array<JsonValue> captionFormatsJsonList(m_captionFormats.size());
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
