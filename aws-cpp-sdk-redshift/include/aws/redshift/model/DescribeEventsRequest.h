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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/SourceType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeEventsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeEventsRequest : public RedshiftRequest
  {
  public:
    DescribeEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEvents"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source for which events will be returned. If this
     * parameter is not specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <p>If <i>SourceIdentifier</i> is supplied, <i>SourceType</i>
     * must also be provided.</p> <ul> <li> <p>Specify a cluster identifier when
     * <i>SourceType</i> is <code>cluster</code>.</p> </li> <li> <p>Specify a cluster
     * security group name when <i>SourceType</i> is
     * <code>cluster-security-group</code>.</p> </li> <li> <p>Specify a cluster
     * parameter group name when <i>SourceType</i> is
     * <code>cluster-parameter-group</code>.</p> </li> <li> <p>Specify a cluster
     * snapshot identifier when <i>SourceType</i> is <code>cluster-snapshot</code>.</p>
     * </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}


    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p> <p>Constraints:</p> <p>If <i>SourceType</i> is supplied,
     * <i>SourceIdentifier</i> must also be provided.</p> <ul> <li> <p>Specify
     * <code>cluster</code> when <i>SourceIdentifier</i> is a cluster identifier.</p>
     * </li> <li> <p>Specify <code>cluster-security-group</code> when
     * <i>SourceIdentifier</i> is a cluster security group name.</p> </li> <li>
     * <p>Specify <code>cluster-parameter-group</code> when <i>SourceIdentifier</i> is
     * a cluster parameter group name.</p> </li> <li> <p>Specify
     * <code>cluster-snapshot</code> when <i>SourceIdentifier</i> is a cluster snapshot
     * identifier.</p> </li> </ul>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p> <p>Constraints:</p> <p>If <i>SourceType</i> is supplied,
     * <i>SourceIdentifier</i> must also be provided.</p> <ul> <li> <p>Specify
     * <code>cluster</code> when <i>SourceIdentifier</i> is a cluster identifier.</p>
     * </li> <li> <p>Specify <code>cluster-security-group</code> when
     * <i>SourceIdentifier</i> is a cluster security group name.</p> </li> <li>
     * <p>Specify <code>cluster-parameter-group</code> when <i>SourceIdentifier</i> is
     * a cluster parameter group name.</p> </li> <li> <p>Specify
     * <code>cluster-snapshot</code> when <i>SourceIdentifier</i> is a cluster snapshot
     * identifier.</p> </li> </ul>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p> <p>Constraints:</p> <p>If <i>SourceType</i> is supplied,
     * <i>SourceIdentifier</i> must also be provided.</p> <ul> <li> <p>Specify
     * <code>cluster</code> when <i>SourceIdentifier</i> is a cluster identifier.</p>
     * </li> <li> <p>Specify <code>cluster-security-group</code> when
     * <i>SourceIdentifier</i> is a cluster security group name.</p> </li> <li>
     * <p>Specify <code>cluster-parameter-group</code> when <i>SourceIdentifier</i> is
     * a cluster parameter group name.</p> </li> <li> <p>Specify
     * <code>cluster-snapshot</code> when <i>SourceIdentifier</i> is a cluster snapshot
     * identifier.</p> </li> </ul>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p> <p>Constraints:</p> <p>If <i>SourceType</i> is supplied,
     * <i>SourceIdentifier</i> must also be provided.</p> <ul> <li> <p>Specify
     * <code>cluster</code> when <i>SourceIdentifier</i> is a cluster identifier.</p>
     * </li> <li> <p>Specify <code>cluster-security-group</code> when
     * <i>SourceIdentifier</i> is a cluster security group name.</p> </li> <li>
     * <p>Specify <code>cluster-parameter-group</code> when <i>SourceIdentifier</i> is
     * a cluster parameter group name.</p> </li> <li> <p>Specify
     * <code>cluster-snapshot</code> when <i>SourceIdentifier</i> is a cluster snapshot
     * identifier.</p> </li> </ul>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p> <p>Constraints:</p> <p>If <i>SourceType</i> is supplied,
     * <i>SourceIdentifier</i> must also be provided.</p> <ul> <li> <p>Specify
     * <code>cluster</code> when <i>SourceIdentifier</i> is a cluster identifier.</p>
     * </li> <li> <p>Specify <code>cluster-security-group</code> when
     * <i>SourceIdentifier</i> is a cluster security group name.</p> </li> <li>
     * <p>Specify <code>cluster-parameter-group</code> when <i>SourceIdentifier</i> is
     * a cluster parameter group name.</p> </li> <li> <p>Specify
     * <code>cluster-snapshot</code> when <i>SourceIdentifier</i> is a cluster snapshot
     * identifier.</p> </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p> <p>Constraints:</p> <p>If <i>SourceType</i> is supplied,
     * <i>SourceIdentifier</i> must also be provided.</p> <ul> <li> <p>Specify
     * <code>cluster</code> when <i>SourceIdentifier</i> is a cluster identifier.</p>
     * </li> <li> <p>Specify <code>cluster-security-group</code> when
     * <i>SourceIdentifier</i> is a cluster security group name.</p> </li> <li>
     * <p>Specify <code>cluster-parameter-group</code> when <i>SourceIdentifier</i> is
     * a cluster parameter group name.</p> </li> <li> <p>Specify
     * <code>cluster-snapshot</code> when <i>SourceIdentifier</i> is a cluster snapshot
     * identifier.</p> </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline DescribeEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline DescribeEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline DescribeEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. For more information about ISO 8601, go to the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     * <p>Example: <code>2009-07-08T18:00Z</code> </p>
     */
    inline DescribeEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The number of minutes prior to the time of the request for which to retrieve
     * events. For example, if the request is sent at 18:00 and you specify a duration
     * of 60, then only events which have occurred after 17:00 will be returned.</p>
     * <p>Default: <code>60</code> </p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The number of minutes prior to the time of the request for which to retrieve
     * events. For example, if the request is sent at 18:00 and you specify a duration
     * of 60, then only events which have occurred after 17:00 will be returned.</p>
     * <p>Default: <code>60</code> </p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The number of minutes prior to the time of the request for which to retrieve
     * events. For example, if the request is sent at 18:00 and you specify a duration
     * of 60, then only events which have occurred after 17:00 will be returned.</p>
     * <p>Default: <code>60</code> </p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The number of minutes prior to the time of the request for which to retrieve
     * events. For example, if the request is sent at 18:00 and you specify a duration
     * of 60, then only events which have occurred after 17:00 will be returned.</p>
     * <p>Default: <code>60</code> </p>
     */
    inline DescribeEventsRequest& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline DescribeEventsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeEventsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeEventsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeEvents</a> request exceed the
     * value specified in <code>MaxRecords</code>, AWS returns a value in the
     * <code>Marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeEventsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    int m_duration;
    bool m_durationHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
