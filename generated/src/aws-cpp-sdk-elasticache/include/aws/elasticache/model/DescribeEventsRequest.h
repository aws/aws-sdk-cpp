/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/SourceType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>DescribeEvents</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/DescribeEventsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeEventsRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API DescribeEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEvents"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
     */
    inline const Aws::String& GetSourceIdentifier() const{ return m_sourceIdentifier; }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
     */
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
     */
    inline void SetSourceIdentifier(const Aws::String& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = value; }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
     */
    inline void SetSourceIdentifier(Aws::String&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::move(value); }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
     */
    inline void SetSourceIdentifier(const char* value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier.assign(value); }

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(const Aws::String& value) { SetSourceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
     */
    inline DescribeEventsRequest& WithSourceIdentifier(Aws::String&& value) { SetSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source for which events are returned. If not
     * specified, all sources are included in the response.</p>
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
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline DescribeEventsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The beginning of the time interval to retrieve events for, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline DescribeEventsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline DescribeEventsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time interval for which to retrieve events, specified in ISO
     * 8601 format.</p> <p> <b>Example:</b> 2017-03-30T07:03:49.555Z</p>
     */
    inline DescribeEventsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The number of minutes worth of events to retrieve.</p>
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * <p>The number of minutes worth of events to retrieve.</p>
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * <p>The number of minutes worth of events to retrieve.</p>
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * <p>The number of minutes worth of events to retrieve.</p>
     */
    inline DescribeEventsRequest& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a marker is included in
     * the response so that the remaining results can be retrieved.</p> <p>Default:
     * 100</p> <p>Constraints: minimum 20; maximum 100.</p>
     */
    inline DescribeEventsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeEventsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeEventsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional marker returned from a prior request. Use this marker for
     * pagination of results from this operation. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
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

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
