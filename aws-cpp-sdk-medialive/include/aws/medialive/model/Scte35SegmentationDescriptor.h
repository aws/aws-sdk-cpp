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

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35DeliveryRestrictions.h>
#include <aws/medialive/model/Scte35SegmentationCancelIndicator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * SCTE-35 Segmentation Descriptor.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35SegmentationDescriptor">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Scte35SegmentationDescriptor
  {
  public:
    Scte35SegmentationDescriptor();
    Scte35SegmentationDescriptor(Aws::Utils::Json::JsonView jsonValue);
    Scte35SegmentationDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * SCTE-35 delivery restrictions.
     */
    inline const Scte35DeliveryRestrictions& GetDeliveryRestrictions() const{ return m_deliveryRestrictions; }

    /**
     * SCTE-35 delivery restrictions.
     */
    inline void SetDeliveryRestrictions(const Scte35DeliveryRestrictions& value) { m_deliveryRestrictionsHasBeenSet = true; m_deliveryRestrictions = value; }

    /**
     * SCTE-35 delivery restrictions.
     */
    inline void SetDeliveryRestrictions(Scte35DeliveryRestrictions&& value) { m_deliveryRestrictionsHasBeenSet = true; m_deliveryRestrictions = std::move(value); }

    /**
     * SCTE-35 delivery restrictions.
     */
    inline Scte35SegmentationDescriptor& WithDeliveryRestrictions(const Scte35DeliveryRestrictions& value) { SetDeliveryRestrictions(value); return *this;}

    /**
     * SCTE-35 delivery restrictions.
     */
    inline Scte35SegmentationDescriptor& WithDeliveryRestrictions(Scte35DeliveryRestrictions&& value) { SetDeliveryRestrictions(std::move(value)); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segment_num.
     */
    inline int GetSegmentNum() const{ return m_segmentNum; }

    /**
     * SCTE-35 segmentation_descriptor segment_num.
     */
    inline void SetSegmentNum(int value) { m_segmentNumHasBeenSet = true; m_segmentNum = value; }

    /**
     * SCTE-35 segmentation_descriptor segment_num.
     */
    inline Scte35SegmentationDescriptor& WithSegmentNum(int value) { SetSegmentNum(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segmentation_event_cancel_indicator.
     */
    inline const Scte35SegmentationCancelIndicator& GetSegmentationCancelIndicator() const{ return m_segmentationCancelIndicator; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_event_cancel_indicator.
     */
    inline void SetSegmentationCancelIndicator(const Scte35SegmentationCancelIndicator& value) { m_segmentationCancelIndicatorHasBeenSet = true; m_segmentationCancelIndicator = value; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_event_cancel_indicator.
     */
    inline void SetSegmentationCancelIndicator(Scte35SegmentationCancelIndicator&& value) { m_segmentationCancelIndicatorHasBeenSet = true; m_segmentationCancelIndicator = std::move(value); }

    /**
     * SCTE-35 segmentation_descriptor segmentation_event_cancel_indicator.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationCancelIndicator(const Scte35SegmentationCancelIndicator& value) { SetSegmentationCancelIndicator(value); return *this;}

    /**
     * SCTE-35 segmentation_descriptor segmentation_event_cancel_indicator.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationCancelIndicator(Scte35SegmentationCancelIndicator&& value) { SetSegmentationCancelIndicator(std::move(value)); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segmentation_duration specified in 90 KHz clock
     * ticks.
     */
    inline long long GetSegmentationDuration() const{ return m_segmentationDuration; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_duration specified in 90 KHz clock
     * ticks.
     */
    inline void SetSegmentationDuration(long long value) { m_segmentationDurationHasBeenSet = true; m_segmentationDuration = value; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_duration specified in 90 KHz clock
     * ticks.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationDuration(long long value) { SetSegmentationDuration(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segmentation_event_id.
     */
    inline long long GetSegmentationEventId() const{ return m_segmentationEventId; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_event_id.
     */
    inline void SetSegmentationEventId(long long value) { m_segmentationEventIdHasBeenSet = true; m_segmentationEventId = value; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_event_id.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationEventId(long long value) { SetSegmentationEventId(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segmentation_type_id.
     */
    inline int GetSegmentationTypeId() const{ return m_segmentationTypeId; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_type_id.
     */
    inline void SetSegmentationTypeId(int value) { m_segmentationTypeIdHasBeenSet = true; m_segmentationTypeId = value; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_type_id.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationTypeId(int value) { SetSegmentationTypeId(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segmentation_upid as a hex string.
     */
    inline const Aws::String& GetSegmentationUpid() const{ return m_segmentationUpid; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid as a hex string.
     */
    inline void SetSegmentationUpid(const Aws::String& value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid = value; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid as a hex string.
     */
    inline void SetSegmentationUpid(Aws::String&& value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid = std::move(value); }

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid as a hex string.
     */
    inline void SetSegmentationUpid(const char* value) { m_segmentationUpidHasBeenSet = true; m_segmentationUpid.assign(value); }

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid as a hex string.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationUpid(const Aws::String& value) { SetSegmentationUpid(value); return *this;}

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid as a hex string.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationUpid(Aws::String&& value) { SetSegmentationUpid(std::move(value)); return *this;}

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid as a hex string.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationUpid(const char* value) { SetSegmentationUpid(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segmentation_upid_type.
     */
    inline int GetSegmentationUpidType() const{ return m_segmentationUpidType; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid_type.
     */
    inline void SetSegmentationUpidType(int value) { m_segmentationUpidTypeHasBeenSet = true; m_segmentationUpidType = value; }

    /**
     * SCTE-35 segmentation_descriptor segmentation_upid_type.
     */
    inline Scte35SegmentationDescriptor& WithSegmentationUpidType(int value) { SetSegmentationUpidType(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor segments_expected.
     */
    inline int GetSegmentsExpected() const{ return m_segmentsExpected; }

    /**
     * SCTE-35 segmentation_descriptor segments_expected.
     */
    inline void SetSegmentsExpected(int value) { m_segmentsExpectedHasBeenSet = true; m_segmentsExpected = value; }

    /**
     * SCTE-35 segmentation_descriptor segments_expected.
     */
    inline Scte35SegmentationDescriptor& WithSegmentsExpected(int value) { SetSegmentsExpected(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor sub_segment_num.
     */
    inline int GetSubSegmentNum() const{ return m_subSegmentNum; }

    /**
     * SCTE-35 segmentation_descriptor sub_segment_num.
     */
    inline void SetSubSegmentNum(int value) { m_subSegmentNumHasBeenSet = true; m_subSegmentNum = value; }

    /**
     * SCTE-35 segmentation_descriptor sub_segment_num.
     */
    inline Scte35SegmentationDescriptor& WithSubSegmentNum(int value) { SetSubSegmentNum(value); return *this;}


    /**
     * SCTE-35 segmentation_descriptor sub_segments_expected.
     */
    inline int GetSubSegmentsExpected() const{ return m_subSegmentsExpected; }

    /**
     * SCTE-35 segmentation_descriptor sub_segments_expected.
     */
    inline void SetSubSegmentsExpected(int value) { m_subSegmentsExpectedHasBeenSet = true; m_subSegmentsExpected = value; }

    /**
     * SCTE-35 segmentation_descriptor sub_segments_expected.
     */
    inline Scte35SegmentationDescriptor& WithSubSegmentsExpected(int value) { SetSubSegmentsExpected(value); return *this;}

  private:

    Scte35DeliveryRestrictions m_deliveryRestrictions;
    bool m_deliveryRestrictionsHasBeenSet;

    int m_segmentNum;
    bool m_segmentNumHasBeenSet;

    Scte35SegmentationCancelIndicator m_segmentationCancelIndicator;
    bool m_segmentationCancelIndicatorHasBeenSet;

    long long m_segmentationDuration;
    bool m_segmentationDurationHasBeenSet;

    long long m_segmentationEventId;
    bool m_segmentationEventIdHasBeenSet;

    int m_segmentationTypeId;
    bool m_segmentationTypeIdHasBeenSet;

    Aws::String m_segmentationUpid;
    bool m_segmentationUpidHasBeenSet;

    int m_segmentationUpidType;
    bool m_segmentationUpidTypeHasBeenSet;

    int m_segmentsExpected;
    bool m_segmentsExpectedHasBeenSet;

    int m_subSegmentNum;
    bool m_subSegmentNumHasBeenSet;

    int m_subSegmentsExpected;
    bool m_subSegmentsExpectedHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
