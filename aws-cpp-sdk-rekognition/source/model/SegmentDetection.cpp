/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/SegmentDetection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

SegmentDetection::SegmentDetection() : 
    m_type(SegmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_startTimestampMillis(0),
    m_startTimestampMillisHasBeenSet(false),
    m_endTimestampMillis(0),
    m_endTimestampMillisHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_startTimecodeSMPTEHasBeenSet(false),
    m_endTimecodeSMPTEHasBeenSet(false),
    m_durationSMPTEHasBeenSet(false),
    m_technicalCueSegmentHasBeenSet(false),
    m_shotSegmentHasBeenSet(false)
{
}

SegmentDetection::SegmentDetection(JsonView jsonValue) : 
    m_type(SegmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_startTimestampMillis(0),
    m_startTimestampMillisHasBeenSet(false),
    m_endTimestampMillis(0),
    m_endTimestampMillisHasBeenSet(false),
    m_durationMillis(0),
    m_durationMillisHasBeenSet(false),
    m_startTimecodeSMPTEHasBeenSet(false),
    m_endTimecodeSMPTEHasBeenSet(false),
    m_durationSMPTEHasBeenSet(false),
    m_technicalCueSegmentHasBeenSet(false),
    m_shotSegmentHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentDetection& SegmentDetection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = SegmentTypeMapper::GetSegmentTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimestampMillis"))
  {
    m_startTimestampMillis = jsonValue.GetInt64("StartTimestampMillis");

    m_startTimestampMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimestampMillis"))
  {
    m_endTimestampMillis = jsonValue.GetInt64("EndTimestampMillis");

    m_endTimestampMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationMillis"))
  {
    m_durationMillis = jsonValue.GetInt64("DurationMillis");

    m_durationMillisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimecodeSMPTE"))
  {
    m_startTimecodeSMPTE = jsonValue.GetString("StartTimecodeSMPTE");

    m_startTimecodeSMPTEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTimecodeSMPTE"))
  {
    m_endTimecodeSMPTE = jsonValue.GetString("EndTimecodeSMPTE");

    m_endTimecodeSMPTEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationSMPTE"))
  {
    m_durationSMPTE = jsonValue.GetString("DurationSMPTE");

    m_durationSMPTEHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TechnicalCueSegment"))
  {
    m_technicalCueSegment = jsonValue.GetObject("TechnicalCueSegment");

    m_technicalCueSegmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShotSegment"))
  {
    m_shotSegment = jsonValue.GetObject("ShotSegment");

    m_shotSegmentHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentDetection::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SegmentTypeMapper::GetNameForSegmentType(m_type));
  }

  if(m_startTimestampMillisHasBeenSet)
  {
   payload.WithInt64("StartTimestampMillis", m_startTimestampMillis);

  }

  if(m_endTimestampMillisHasBeenSet)
  {
   payload.WithInt64("EndTimestampMillis", m_endTimestampMillis);

  }

  if(m_durationMillisHasBeenSet)
  {
   payload.WithInt64("DurationMillis", m_durationMillis);

  }

  if(m_startTimecodeSMPTEHasBeenSet)
  {
   payload.WithString("StartTimecodeSMPTE", m_startTimecodeSMPTE);

  }

  if(m_endTimecodeSMPTEHasBeenSet)
  {
   payload.WithString("EndTimecodeSMPTE", m_endTimecodeSMPTE);

  }

  if(m_durationSMPTEHasBeenSet)
  {
   payload.WithString("DurationSMPTE", m_durationSMPTE);

  }

  if(m_technicalCueSegmentHasBeenSet)
  {
   payload.WithObject("TechnicalCueSegment", m_technicalCueSegment.Jsonize());

  }

  if(m_shotSegmentHasBeenSet)
  {
   payload.WithObject("ShotSegment", m_shotSegment.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
