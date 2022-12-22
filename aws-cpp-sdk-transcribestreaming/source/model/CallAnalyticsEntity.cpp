/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/CallAnalyticsEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TranscribeStreamingService
{
namespace Model
{

CallAnalyticsEntity::CallAnalyticsEntity() : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

CallAnalyticsEntity::CallAnalyticsEntity(JsonView jsonValue) : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

CallAnalyticsEntity& CallAnalyticsEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BeginOffsetMillis"))
  {
    m_beginOffsetMillis = jsonValue.GetInt64("BeginOffsetMillis");

    m_beginOffsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOffsetMillis"))
  {
    m_endOffsetMillis = jsonValue.GetInt64("EndOffsetMillis");

    m_endOffsetMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Category"))
  {
    m_category = jsonValue.GetString("Category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue CallAnalyticsEntity::Jsonize() const
{
  JsonValue payload;

  if(m_beginOffsetMillisHasBeenSet)
  {
   payload.WithInt64("BeginOffsetMillis", m_beginOffsetMillis);

  }

  if(m_endOffsetMillisHasBeenSet)
  {
   payload.WithInt64("EndOffsetMillis", m_endOffsetMillis);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("Category", m_category);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
