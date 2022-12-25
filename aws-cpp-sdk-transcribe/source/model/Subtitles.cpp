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
    m_formatsHasBeenSet(false),
    m_outputStartIndex(0),
    m_outputStartIndexHasBeenSet(false)
{
}

Subtitles::Subtitles(JsonView jsonValue) : 
    m_formatsHasBeenSet(false),
    m_outputStartIndex(0),
    m_outputStartIndexHasBeenSet(false)
{
  *this = jsonValue;
}

Subtitles& Subtitles::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Formats"))
  {
    Aws::Utils::Array<JsonView> formatsJsonList = jsonValue.GetArray("Formats");
    for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
    {
      m_formats.push_back(SubtitleFormatMapper::GetSubtitleFormatForName(formatsJsonList[formatsIndex].AsString()));
    }
    m_formatsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputStartIndex"))
  {
    m_outputStartIndex = jsonValue.GetInteger("OutputStartIndex");

    m_outputStartIndexHasBeenSet = true;
  }

  return *this;
}

JsonValue Subtitles::Jsonize() const
{
  JsonValue payload;

  if(m_formatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> formatsJsonList(m_formats.size());
   for(unsigned formatsIndex = 0; formatsIndex < formatsJsonList.GetLength(); ++formatsIndex)
   {
     formatsJsonList[formatsIndex].AsString(SubtitleFormatMapper::GetNameForSubtitleFormat(m_formats[formatsIndex]));
   }
   payload.WithArray("Formats", std::move(formatsJsonList));

  }

  if(m_outputStartIndexHasBeenSet)
  {
   payload.WithInteger("OutputStartIndex", m_outputStartIndex);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
