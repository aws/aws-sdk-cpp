/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte35SegmentationDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Scte35SegmentationDescriptor::Scte35SegmentationDescriptor() : 
    m_deliveryRestrictionsHasBeenSet(false),
    m_segmentNum(0),
    m_segmentNumHasBeenSet(false),
    m_segmentationCancelIndicator(Scte35SegmentationCancelIndicator::NOT_SET),
    m_segmentationCancelIndicatorHasBeenSet(false),
    m_segmentationDuration(0),
    m_segmentationDurationHasBeenSet(false),
    m_segmentationEventId(0),
    m_segmentationEventIdHasBeenSet(false),
    m_segmentationTypeId(0),
    m_segmentationTypeIdHasBeenSet(false),
    m_segmentationUpidHasBeenSet(false),
    m_segmentationUpidType(0),
    m_segmentationUpidTypeHasBeenSet(false),
    m_segmentsExpected(0),
    m_segmentsExpectedHasBeenSet(false),
    m_subSegmentNum(0),
    m_subSegmentNumHasBeenSet(false),
    m_subSegmentsExpected(0),
    m_subSegmentsExpectedHasBeenSet(false)
{
}

Scte35SegmentationDescriptor::Scte35SegmentationDescriptor(JsonView jsonValue) : 
    m_deliveryRestrictionsHasBeenSet(false),
    m_segmentNum(0),
    m_segmentNumHasBeenSet(false),
    m_segmentationCancelIndicator(Scte35SegmentationCancelIndicator::NOT_SET),
    m_segmentationCancelIndicatorHasBeenSet(false),
    m_segmentationDuration(0),
    m_segmentationDurationHasBeenSet(false),
    m_segmentationEventId(0),
    m_segmentationEventIdHasBeenSet(false),
    m_segmentationTypeId(0),
    m_segmentationTypeIdHasBeenSet(false),
    m_segmentationUpidHasBeenSet(false),
    m_segmentationUpidType(0),
    m_segmentationUpidTypeHasBeenSet(false),
    m_segmentsExpected(0),
    m_segmentsExpectedHasBeenSet(false),
    m_subSegmentNum(0),
    m_subSegmentNumHasBeenSet(false),
    m_subSegmentsExpected(0),
    m_subSegmentsExpectedHasBeenSet(false)
{
  *this = jsonValue;
}

Scte35SegmentationDescriptor& Scte35SegmentationDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryRestrictions"))
  {
    m_deliveryRestrictions = jsonValue.GetObject("deliveryRestrictions");

    m_deliveryRestrictionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentNum"))
  {
    m_segmentNum = jsonValue.GetInteger("segmentNum");

    m_segmentNumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationCancelIndicator"))
  {
    m_segmentationCancelIndicator = Scte35SegmentationCancelIndicatorMapper::GetScte35SegmentationCancelIndicatorForName(jsonValue.GetString("segmentationCancelIndicator"));

    m_segmentationCancelIndicatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationDuration"))
  {
    m_segmentationDuration = jsonValue.GetInt64("segmentationDuration");

    m_segmentationDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationEventId"))
  {
    m_segmentationEventId = jsonValue.GetInt64("segmentationEventId");

    m_segmentationEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationTypeId"))
  {
    m_segmentationTypeId = jsonValue.GetInteger("segmentationTypeId");

    m_segmentationTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationUpid"))
  {
    m_segmentationUpid = jsonValue.GetString("segmentationUpid");

    m_segmentationUpidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationUpidType"))
  {
    m_segmentationUpidType = jsonValue.GetInteger("segmentationUpidType");

    m_segmentationUpidTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentsExpected"))
  {
    m_segmentsExpected = jsonValue.GetInteger("segmentsExpected");

    m_segmentsExpectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subSegmentNum"))
  {
    m_subSegmentNum = jsonValue.GetInteger("subSegmentNum");

    m_subSegmentNumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subSegmentsExpected"))
  {
    m_subSegmentsExpected = jsonValue.GetInteger("subSegmentsExpected");

    m_subSegmentsExpectedHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte35SegmentationDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryRestrictionsHasBeenSet)
  {
   payload.WithObject("deliveryRestrictions", m_deliveryRestrictions.Jsonize());

  }

  if(m_segmentNumHasBeenSet)
  {
   payload.WithInteger("segmentNum", m_segmentNum);

  }

  if(m_segmentationCancelIndicatorHasBeenSet)
  {
   payload.WithString("segmentationCancelIndicator", Scte35SegmentationCancelIndicatorMapper::GetNameForScte35SegmentationCancelIndicator(m_segmentationCancelIndicator));
  }

  if(m_segmentationDurationHasBeenSet)
  {
   payload.WithInt64("segmentationDuration", m_segmentationDuration);

  }

  if(m_segmentationEventIdHasBeenSet)
  {
   payload.WithInt64("segmentationEventId", m_segmentationEventId);

  }

  if(m_segmentationTypeIdHasBeenSet)
  {
   payload.WithInteger("segmentationTypeId", m_segmentationTypeId);

  }

  if(m_segmentationUpidHasBeenSet)
  {
   payload.WithString("segmentationUpid", m_segmentationUpid);

  }

  if(m_segmentationUpidTypeHasBeenSet)
  {
   payload.WithInteger("segmentationUpidType", m_segmentationUpidType);

  }

  if(m_segmentsExpectedHasBeenSet)
  {
   payload.WithInteger("segmentsExpected", m_segmentsExpected);

  }

  if(m_subSegmentNumHasBeenSet)
  {
   payload.WithInteger("subSegmentNum", m_subSegmentNum);

  }

  if(m_subSegmentsExpectedHasBeenSet)
  {
   payload.WithInteger("subSegmentsExpected", m_subSegmentsExpected);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
