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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/Segment.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A collection of segment documents with matching trace IDs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/Trace">AWS API
   * Reference</a></p>
   */
  class AWS_XRAY_API Trace
  {
  public:
    Trace();
    Trace(Aws::Utils::Json::JsonView jsonValue);
    Trace& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline Trace& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline Trace& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline Trace& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline double GetDuration() const{ return m_duration; }

    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline Trace& WithDuration(double value) { SetDuration(value); return *this;}


    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline const Aws::Vector<Segment>& GetSegments() const{ return m_segments; }

    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline bool SegmentsHasBeenSet() const { return m_segmentsHasBeenSet; }

    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline void SetSegments(const Aws::Vector<Segment>& value) { m_segmentsHasBeenSet = true; m_segments = value; }

    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline void SetSegments(Aws::Vector<Segment>&& value) { m_segmentsHasBeenSet = true; m_segments = std::move(value); }

    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline Trace& WithSegments(const Aws::Vector<Segment>& value) { SetSegments(value); return *this;}

    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline Trace& WithSegments(Aws::Vector<Segment>&& value) { SetSegments(std::move(value)); return *this;}

    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline Trace& AddSegments(const Segment& value) { m_segmentsHasBeenSet = true; m_segments.push_back(value); return *this; }

    /**
     * <p>Segment documents for the segments and subsegments that comprise the
     * trace.</p>
     */
    inline Trace& AddSegments(Segment&& value) { m_segmentsHasBeenSet = true; m_segments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    double m_duration;
    bool m_durationHasBeenSet;

    Aws::Vector<Segment> m_segments;
    bool m_segmentsHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
