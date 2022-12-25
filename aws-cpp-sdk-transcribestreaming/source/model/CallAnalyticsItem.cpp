/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/CallAnalyticsItem.h>
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

CallAnalyticsItem::CallAnalyticsItem() : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false),
    m_type(ItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_vocabularyFilterMatch(false),
    m_vocabularyFilterMatchHasBeenSet(false),
    m_stable(false),
    m_stableHasBeenSet(false)
{
}

CallAnalyticsItem::CallAnalyticsItem(JsonView jsonValue) : 
    m_beginOffsetMillis(0),
    m_beginOffsetMillisHasBeenSet(false),
    m_endOffsetMillis(0),
    m_endOffsetMillisHasBeenSet(false),
    m_type(ItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false),
    m_vocabularyFilterMatch(false),
    m_vocabularyFilterMatchHasBeenSet(false),
    m_stable(false),
    m_stableHasBeenSet(false)
{
  *this = jsonValue;
}

CallAnalyticsItem& CallAnalyticsItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ItemTypeMapper::GetItemTypeForName(jsonValue.GetString("Type"));

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

  if(jsonValue.ValueExists("VocabularyFilterMatch"))
  {
    m_vocabularyFilterMatch = jsonValue.GetBool("VocabularyFilterMatch");

    m_vocabularyFilterMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Stable"))
  {
    m_stable = jsonValue.GetBool("Stable");

    m_stableHasBeenSet = true;
  }

  return *this;
}

JsonValue CallAnalyticsItem::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ItemTypeMapper::GetNameForItemType(m_type));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  if(m_vocabularyFilterMatchHasBeenSet)
  {
   payload.WithBool("VocabularyFilterMatch", m_vocabularyFilterMatch);

  }

  if(m_stableHasBeenSet)
  {
   payload.WithBool("Stable", m_stable);

  }

  return payload;
}

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
