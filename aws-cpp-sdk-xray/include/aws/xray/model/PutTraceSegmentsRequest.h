/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class AWS_XRAY_API PutTraceSegmentsRequest : public XRayRequest
  {
  public:
    PutTraceSegmentsRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTraceSegmentDocuments() const{ return m_traceSegmentDocuments; }

    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline void SetTraceSegmentDocuments(const Aws::Vector<Aws::String>& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments = value; }

    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline void SetTraceSegmentDocuments(Aws::Vector<Aws::String>&& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments = value; }

    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline PutTraceSegmentsRequest& WithTraceSegmentDocuments(const Aws::Vector<Aws::String>& value) { SetTraceSegmentDocuments(value); return *this;}

    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline PutTraceSegmentsRequest& WithTraceSegmentDocuments(Aws::Vector<Aws::String>&& value) { SetTraceSegmentDocuments(value); return *this;}

    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline PutTraceSegmentsRequest& AddTraceSegmentDocuments(const Aws::String& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments.push_back(value); return *this; }

    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline PutTraceSegmentsRequest& AddTraceSegmentDocuments(Aws::String&& value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments.push_back(value); return *this; }

    /**
     * <p>A JSON document defining one or more segments or subsegments. Segments must
     * include the following fields.</p> <p class="title"> <b>Required Segment Document
     * Fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
     * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
     * for the segment, unique among segments in the same trace, in 16 hexadecimal
     * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
     * connects all segments and subsegments originating from a single client
     * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
     * subsegment was created, in floating point seconds in epoch time, accurate to
     * milliseconds. For example, <code>1480615200.010</code> or
     * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
     * the segment or subsegment was closed. For example, <code>1480615200.090</code>
     * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
     * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
     * <code>true</code> instead of specifying an <code>end_time</code> to record that
     * a segment has been started, but is not complete. Send an in progress segment
     * when your application receives a request that will take a long time to serve, to
     * trace the fact that the request was received. When the response is sent, send
     * the complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
     * <code>trace_id</code> consists of three numbers separated by hyphens. For
     * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
     * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, i.e.
     * <code>1</code>.</p> </li> <li> <p>The time of the original request, in Unix
     * epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd, 2016 PST
     * in epoch time is <code>1480615200</code> seconds, or <code>58406520</code> in
     * hexadecimal.</p> </li> <li> <p>A 96-bit identifier for the trace, globally
     * unique, in 24 hexadecimal digits.</p> </li> </ul>
     */
    inline PutTraceSegmentsRequest& AddTraceSegmentDocuments(const char* value) { m_traceSegmentDocumentsHasBeenSet = true; m_traceSegmentDocuments.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_traceSegmentDocuments;
    bool m_traceSegmentDocumentsHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
