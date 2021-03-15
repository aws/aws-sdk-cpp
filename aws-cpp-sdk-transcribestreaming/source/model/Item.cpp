/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/transcribestreaming/model/Item.h>
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

Item::Item() : 
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_type(ItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_vocabularyFilterMatch(false),
    m_vocabularyFilterMatchHasBeenSet(false),
    m_speakerHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

Item::Item(JsonView jsonValue) : 
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_endTime(0.0),
    m_endTimeHasBeenSet(false),
    m_type(ItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_vocabularyFilterMatch(false),
    m_vocabularyFilterMatchHasBeenSet(false),
    m_speakerHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

Item& Item::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("VocabularyFilterMatch"))
  {
    m_vocabularyFilterMatch = jsonValue.GetBool("VocabularyFilterMatch");

    m_vocabularyFilterMatchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Speaker"))
  {
    m_speaker = jsonValue.GetString("Speaker");

    m_speakerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue Item::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ItemTypeMapper::GetNameForItemType(m_type));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_vocabularyFilterMatchHasBeenSet)
  {
   payload.WithBool("VocabularyFilterMatch", m_vocabularyFilterMatch);

  }

  if(m_speakerHasBeenSet)
  {
   payload.WithString("Speaker", m_speaker);

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
