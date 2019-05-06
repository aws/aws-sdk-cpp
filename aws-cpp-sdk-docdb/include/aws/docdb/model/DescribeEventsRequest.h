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
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/SourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>DescribeEvents</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DescribeEventsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DescribeEventsRequest : public DocDBRequest
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
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, then all sources are included in the response.</p>
     * <p>Constraints:</p> <ul> <li> <p>If <code>SourceIdentifier</code> is provided,
     * <code>SourceType</code> must also be provided.</p> </li> <li> <p>If the source
     * type is <code>DBInstance</code>, a <code>DBInstanceIdentifier</code> must be
     * provided.</p> </li> <li> <p>If the source type is <code>DBSecurityGroup</code>,
     * a <code>DBSecurityGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBParameterGroup</code>, a
     * <code>DBParameterGroupName</code> must be provided.</p> </li> <li> <p>If the
     * source type is <code>DBSnapshot</code>, a <code>DBSnapshotIdentifier</code> must
     * be provided.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> </ul>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}


    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p>
     */
    inline DescribeEventsRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The event source to retrieve events for. If no value is specified, all events
     * are returned.</p>
     */
    inline DescribeEventsRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p> The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline DescribeEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline DescribeEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline DescribeEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format. </p> <p>Example: 2009-07-08T18:00Z</p>
     */
    inline DescribeEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The number of minutes to retrieve events for.</p> <p>Default: 60</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The number of minutes to retrieve events for.</p> <p>Default: 60</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The number of minutes to retrieve events for.</p> <p>Default: 60</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The number of minutes to retrieve events for.</p> <p>Default: 60</p>
     */
    inline DescribeEventsRequest& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline DescribeEventsRequest& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline DescribeEventsRequest& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline DescribeEventsRequest& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline DescribeEventsRequest& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event categories that trigger notifications for an event
     * notification subscription.</p>
     */
    inline DescribeEventsRequest& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }


    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline DescribeEventsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * (marker) is included in the response so that the remaining results can be
     * retrieved.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeEventsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEventsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline DescribeEventsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
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

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
