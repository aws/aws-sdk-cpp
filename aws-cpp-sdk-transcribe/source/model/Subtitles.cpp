/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribe/model/Subtitles.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeService
{
namespace Model
{

Subtitles::Subtitles() : 
    m_formatsHasBeenSet(false)
{
}

Subtitles::Subtitles(JsonView jsonValue) : 
    m_formatsHasBeenSet(false)
{
  *this = jsonValue;
}

Subtitles& Subtitles::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Formats"))
  {
    Array<JsonView> formatsJsonList = jsonValue.GetArray("Formats");
    for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
    {
      m_formats.push_back(SubtitleFormatMapper::GetSubtitleFormatForName(formatsJsonList[formatsIndex].AsString()));
    }
    m_formatsHasBeenSet = true;
  }

  return *this;
}

JsonValue Subtitles::Jsonize() const
{
  JsonValue payload;

  if(m_formatsHasBeenSet)
  {
   Array<JsonValue> formatsJsonList(m_formats.size());
   for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
   {
     formatsJsonList[formatsIndex].AsString(SubtitleFormatMapper::GetNameForSubtitleFormat(m_formats[formatsIndex]));
   }
   payload.WithArray("Formats", std::move(formatsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
