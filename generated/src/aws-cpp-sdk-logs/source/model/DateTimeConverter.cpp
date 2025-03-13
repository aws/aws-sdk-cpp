/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DateTimeConverter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

DateTimeConverter::DateTimeConverter(JsonView jsonValue)
{
  *this = jsonValue;
}

DateTimeConverter& DateTimeConverter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetString("target");
    m_targetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetFormat"))
  {
    m_targetFormat = jsonValue.GetString("targetFormat");
    m_targetFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchPatterns"))
  {
    Aws::Utils::Array<JsonView> matchPatternsJsonList = jsonValue.GetArray("matchPatterns");
    for(unsigned matchPatternsIndex = 0; matchPatternsIndex < matchPatternsJsonList.GetLength(); ++matchPatternsIndex)
    {
      m_matchPatterns.push_back(matchPatternsJsonList[matchPatternsIndex].AsString());
    }
    m_matchPatternsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceTimezone"))
  {
    m_sourceTimezone = jsonValue.GetString("sourceTimezone");
    m_sourceTimezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetTimezone"))
  {
    m_targetTimezone = jsonValue.GetString("targetTimezone");
    m_targetTimezoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("locale"))
  {
    m_locale = jsonValue.GetString("locale");
    m_localeHasBeenSet = true;
  }
  return *this;
}

JsonValue DateTimeConverter::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("target", m_target);

  }

  if(m_targetFormatHasBeenSet)
  {
   payload.WithString("targetFormat", m_targetFormat);

  }

  if(m_matchPatternsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> matchPatternsJsonList(m_matchPatterns.size());
   for(unsigned matchPatternsIndex = 0; matchPatternsIndex < matchPatternsJsonList.GetLength(); ++matchPatternsIndex)
   {
     matchPatternsJsonList[matchPatternsIndex].AsString(m_matchPatterns[matchPatternsIndex]);
   }
   payload.WithArray("matchPatterns", std::move(matchPatternsJsonList));

  }

  if(m_sourceTimezoneHasBeenSet)
  {
   payload.WithString("sourceTimezone", m_sourceTimezone);

  }

  if(m_targetTimezoneHasBeenSet)
  {
   payload.WithString("targetTimezone", m_targetTimezone);

  }

  if(m_localeHasBeenSet)
  {
   payload.WithString("locale", m_locale);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
