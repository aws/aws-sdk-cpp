/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/SourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Filter.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeEventsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEventsRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEvents"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The identifier of an event source.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p> The identifier of an event source.</p>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p> The identifier of an event source.</p>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p> The identifier of an event source.</p>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(const char* value) { SetSourceIdentifier(value); return *this;}


    /**
     * <p>The type of DMS resource that generates events.</p> <p>Valid values:
     * replication-instance | replication-task</p>
     */
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The type of DMS resource that generates events.</p> <p>Valid values:
     * replication-instance | replication-task</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The type of DMS resource that generates events.</p> <p>Valid values:
     * replication-instance | replication-task</p>
     */
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The type of DMS resource that generates events.</p> <p>Valid values:
     * replication-instance | replication-task</p>
     */
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The type of DMS resource that generates events.</p> <p>Valid values:
     * replication-instance | replication-task</p>
     */
    inline DescribeEventsRequest& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    /**
     * <p>The type of DMS resource that generates events.</p> <p>Valid values:
     * replication-instance | replication-task</p>
     */
    inline DescribeEventsRequest& WithSourceType(SourceType&& value) { SetSourceType(std::move(value)); return *this;}


    /**
     * <p>The start time for the events to be listed.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time for the events to be listed.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time for the events to be listed.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time for the events to be listed.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time for the events to be listed.</p>
     */
    inline DescribeEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time for the events to be listed.</p>
     */
    inline DescribeEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time for the events to be listed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time for the events to be listed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time for the events to be listed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time for the events to be listed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time for the events to be listed.</p>
     */
    inline DescribeEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time for the events to be listed.</p>
     */
    inline DescribeEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the events to be listed.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The duration of the events to be listed.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The duration of the events to be listed.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The duration of the events to be listed.</p>
     */
    inline DescribeEventsRequest& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventCategories() const{ return m_eventCategories; }

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline bool EventCategoriesHasBeenSet() const { return m_eventCategoriesHasBeenSet; }

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline void SetEventCategories(const Aws::Vector<Aws::String>& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = value; }

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline void SetEventCategories(Aws::Vector<Aws::String>&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories = std::move(value); }

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline DescribeEventsRequest& WithEventCategories(const Aws::Vector<Aws::String>& value) { SetEventCategories(value); return *this;}

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline DescribeEventsRequest& WithEventCategories(Aws::Vector<Aws::String>&& value) { SetEventCategories(std::move(value)); return *this;}

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline DescribeEventsRequest& AddEventCategories(const Aws::String& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline DescribeEventsRequest& AddEventCategories(Aws::String&& value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of event categories for the source type that you've chosen.</p>
     */
    inline DescribeEventsRequest& AddEventCategories(const char* value) { m_eventCategoriesHasBeenSet = true; m_eventCategories.push_back(value); return *this; }


    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline DescribeEventsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline DescribeEventsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline DescribeEventsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters applied to events. The only valid filter is
     * <code>replication-instance-id</code>.</p>
     */
    inline DescribeEventsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p> The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that the remaining results can be
     * retrieved. </p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline DescribeEventsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEventsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEventsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p> An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline DescribeEventsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;

    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventCategories;
    bool m_eventCategoriesHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
