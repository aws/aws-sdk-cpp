/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies a segment to associate with an activity in a journey.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SegmentCondition">AWS
   * API Reference</a></p>
   */
  class SegmentCondition
  {
  public:
    AWS_PINPOINT_API SegmentCondition();
    AWS_PINPOINT_API SegmentCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SegmentCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }

    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }

    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }

    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }

    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline SegmentCondition& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}

    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline SegmentCondition& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the segment to associate with the activity.</p>
     */
    inline SegmentCondition& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}

  private:

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
