/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/SourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /*
    <p> </p>
  */
  class AWS_RDS_API DescribeEventsRequest : public RDSRequest
  {
  public:
    DescribeEventsRequest();
    Aws::String SerializePayload() const override;


    /*
     <p> The identifier of the event source for which events will be returned. If not specified, then all sources are included in the response. </p> <p>Constraints:</p> <ul> <li>If SourceIdentifier is supplied, SourceType must also be provided.</li> <li>If the source type is DBInstance, then a DBInstanceIdentifier must be supplied.</li> <li>If the source type is DBSecurityGroup, a DBSecurityGroupName must be supplied.</li> <li>If the source type is DBParameterGroup, a DBParameterGroupName must be supplied.</li> <li>If the source type is DBSnapshot, a DBSnapshotIdentifier must be supplied.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul>
    */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /*
     <p> The identifier of the event source for which events will be returned. If not specified, then all sources are included in the response. </p> <p>Constraints:</p> <ul> <li>If SourceIdentifier is supplied, SourceType must also be provided.</li> <li>If the source type is DBInstance, then a DBInstanceIdentifier must be supplied.</li> <li>If the source type is DBSecurityGroup, a DBSecurityGroupName must be supplied.</li> <li>If the source type is DBParameterGroup, a DBParameterGroupName must be supplied.</li> <li>If the source type is DBSnapshot, a DBSnapshotIdentifier must be supplied.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul>
    */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /*
     <p> The identifier of the event source for which events will be returned. If not specified, then all sources are included in the response. </p> <p>Constraints:</p> <ul> <li>If SourceIdentifier is supplied, SourceType must also be provided.</li> <li>If the source type is DBInstance, then a DBInstanceIdentifier must be supplied.</li> <li>If the source type is DBSecurityGroup, a DBSecurityGroupName must be supplied.</li> <li>If the source type is DBParameterGroup, a DBParameterGroupName must be supplied.</li> <li>If the source type is DBSnapshot, a DBSnapshotIdentifier must be supplied.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul>
    */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /*
     <p> The identifier of the event source for which events will be returned. If not specified, then all sources are included in the response. </p> <p>Constraints:</p> <ul> <li>If SourceIdentifier is supplied, SourceType must also be provided.</li> <li>If the source type is DBInstance, then a DBInstanceIdentifier must be supplied.</li> <li>If the source type is DBSecurityGroup, a DBSecurityGroupName must be supplied.</li> <li>If the source type is DBParameterGroup, a DBParameterGroupName must be supplied.</li> <li>If the source type is DBSnapshot, a DBSnapshotIdentifier must be supplied.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul>
    */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /*
     <p> The identifier of the event source for which events will be returned. If not specified, then all sources are included in the response. </p> <p>Constraints:</p> <ul> <li>If SourceIdentifier is supplied, SourceType must also be provided.</li> <li>If the source type is DBInstance, then a DBInstanceIdentifier must be supplied.</li> <li>If the source type is DBSecurityGroup, a DBSecurityGroupName must be supplied.</li> <li>If the source type is DBParameterGroup, a DBParameterGroupName must be supplied.</li> <li>If the source type is DBSnapshot, a DBSnapshotIdentifier must be supplied.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul>
    */
    inline DescribeEventsRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /*
     <p> The identifier of the event source for which events will be returned. If not specified, then all sources are included in the response. </p> <p>Constraints:</p> <ul> <li>If SourceIdentifier is supplied, SourceType must also be provided.</li> <li>If the source type is DBInstance, then a DBInstanceIdentifier must be supplied.</li> <li>If the source type is DBSecurityGroup, a DBSecurityGroupName must be supplied.</li> <li>If the source type is DBParameterGroup, a DBParameterGroupName must be supplied.</li> <li>If the source type is DBSnapshot, a DBSnapshotIdentifier must be supplied.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul>
    */
    inline DescribeEventsRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(value); return *this;}

    /*
     <p> The identifier of the event source for which events will be returned. If not specified, then all sources are included in the response. </p> <p>Constraints:</p> <ul> <li>If SourceIdentifier is supplied, SourceType must also be provided.</li> <li>If the source type is DBInstance, then a DBInstanceIdentifier must be supplied.</li> <li>If the source type is DBSecurityGroup, a DBSecurityGroupName must be supplied.</li> <li>If the source type is DBParameterGroup, a DBParameterGroupName must be supplied.</li> <li>If the source type is DBSnapshot, a DBSnapshotIdentifier must be supplied.</li> <li>Cannot end with a hyphen or contain two consecutive hyphens.</li> </ul>
    */
    inline DescribeEventsRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}

    /*
     <p> The event source to retrieve events for. If no value is specified, all events are returned. </p>
    */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /*
     <p> The event source to retrieve events for. If no value is specified, all events are returned. </p>
    */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /*
     <p> The event source to retrieve events for. If no value is specified, all events are returned. </p>
    */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /*
     <p> The event source to retrieve events for. If no value is specified, all events are returned. </p>
    */
    inline DescribeEventsRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /*
     <p> The event source to retrieve events for. If no value is specified, all events are returned. </p>
    */
    inline DescribeEventsRequest& WithSourceType(SourceType&& value) { SetSourceType(value); return *this;}

    /*
     <p> The beginning of the time interval to retrieve events for, specified in ISO 8601 format. For more information about ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p> <p>Example: 2009-07-08T18:00Z</p>
    */
    inline double GetStartTime() const{ return m_startTime; }

    /*
     <p> The beginning of the time interval to retrieve events for, specified in ISO 8601 format. For more information about ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p> <p>Example: 2009-07-08T18:00Z</p>
    */
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /*
     <p> The beginning of the time interval to retrieve events for, specified in ISO 8601 format. For more information about ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p> <p>Example: 2009-07-08T18:00Z</p>
    */
    inline DescribeEventsRequest& WithStartTime(double value) { SetStartTime(value); return *this;}

    /*
     <p> The end of the time interval for which to retrieve events, specified in ISO 8601 format. For more information about ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p> <p>Example: 2009-07-08T18:00Z</p>
    */
    inline double GetEndTime() const{ return m_endTime; }

    /*
     <p> The end of the time interval for which to retrieve events, specified in ISO 8601 format. For more information about ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p> <p>Example: 2009-07-08T18:00Z</p>
    */
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /*
     <p> The end of the time interval for which to retrieve events, specified in ISO 8601 format. For more information about ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p> <p>Example: 2009-07-08T18:00Z</p>
    */
    inline DescribeEventsRequest& WithEndTime(double value) { SetEndTime(value); return *this;}

    /*
     <p> The number of minutes to retrieve events for. </p> <p>Default: 60</p>
    */
    inline long GetDuration() const{ return m_duration; }

    /*
     <p> The number of minutes to retrieve events for. </p> <p>Default: 60</p>
    */
    inline void SetDuration(long value) { m_durationHasBeenSet = true; m_duration = value; }

    /*
     <p> The number of minutes to retrieve events for. </p> <p>Default: 60</p>
    */
    inline DescribeEventsRequest& WithDuration(long value) { SetDuration(value); return *this;}

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline DescribeEventsRequest& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline DescribeEventsRequest& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(value); return *this;}

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline DescribeEventsRequest& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline DescribeEventsRequest& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /*
     <p> A list of event categories that trigger notifications for a event notification subscription. </p>
    */
    inline DescribeEventsRequest& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline long GetMaxRecords() const{ return m_maxRecords; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline void SetMaxRecords(long value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /*
     <p> The maximum number of records to include in the response. If more records exist than the specified <code>MaxRecords</code> value, a pagination token called a marker is included in the response so that the remaining results may be retrieved. </p> <p>Default: 100</p> <p>Constraints: minimum 20, maximum 100</p>
    */
    inline DescribeEventsRequest& WithMaxRecords(long value) { SetMaxRecords(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeEvents request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /*
     <p> An optional pagination token provided by a previous DescribeEvents request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> An optional pagination token provided by a previous DescribeEvents request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> An optional pagination token provided by a previous DescribeEvents request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p> An optional pagination token provided by a previous DescribeEvents request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline DescribeEventsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeEvents request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline DescribeEventsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /*
     <p> An optional pagination token provided by a previous DescribeEvents request. If this parameter is specified, the response includes only records beyond the marker, up to the value specified by <code>MaxRecords</code>. </p>
    */
    inline DescribeEventsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet;
    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet;
    double m_startTime;
    bool m_startTimeHasBeenSet;
    double m_endTime;
    bool m_endTimeHasBeenSet;
    long m_duration;
    bool m_durationHasBeenSet;
    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet;
    long m_maxRecords;
    bool m_maxRecordsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
