/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ScheduledActionTypeValues.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ScheduledActionFilter.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeScheduledActionsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeScheduledActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledActions"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline DescribeScheduledActionsRequest& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline DescribeScheduledActionsRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled action to retrieve. </p>
     */
    inline DescribeScheduledActionsRequest& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


    /**
     * <p>The type of the scheduled actions to retrieve. </p>
     */
    inline const ScheduledActionTypeValues& GetTargetActionType() const{ return m_targetActionType; }

    /**
     * <p>The type of the scheduled actions to retrieve. </p>
     */
    inline bool TargetActionTypeHasBeenSet() const { return m_targetActionTypeHasBeenSet; }

    /**
     * <p>The type of the scheduled actions to retrieve. </p>
     */
    inline void SetTargetActionType(const ScheduledActionTypeValues& value) { m_targetActionTypeHasBeenSet = true; m_targetActionType = value; }

    /**
     * <p>The type of the scheduled actions to retrieve. </p>
     */
    inline void SetTargetActionType(ScheduledActionTypeValues&& value) { m_targetActionTypeHasBeenSet = true; m_targetActionType = std::move(value); }

    /**
     * <p>The type of the scheduled actions to retrieve. </p>
     */
    inline DescribeScheduledActionsRequest& WithTargetActionType(const ScheduledActionTypeValues& value) { SetTargetActionType(value); return *this;}

    /**
     * <p>The type of the scheduled actions to retrieve. </p>
     */
    inline DescribeScheduledActionsRequest& WithTargetActionType(ScheduledActionTypeValues&& value) { SetTargetActionType(std::move(value)); return *this;}


    /**
     * <p>The start time in UTC of the scheduled actions to retrieve. Only active
     * scheduled actions that have invocations after this time are retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time in UTC of the scheduled actions to retrieve. Only active
     * scheduled actions that have invocations after this time are retrieved.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time in UTC of the scheduled actions to retrieve. Only active
     * scheduled actions that have invocations after this time are retrieved.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time in UTC of the scheduled actions to retrieve. Only active
     * scheduled actions that have invocations after this time are retrieved.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time in UTC of the scheduled actions to retrieve. Only active
     * scheduled actions that have invocations after this time are retrieved.</p>
     */
    inline DescribeScheduledActionsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time in UTC of the scheduled actions to retrieve. Only active
     * scheduled actions that have invocations after this time are retrieved.</p>
     */
    inline DescribeScheduledActionsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time in UTC of the scheduled action to retrieve. Only active
     * scheduled actions that have invocations before this time are retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time in UTC of the scheduled action to retrieve. Only active
     * scheduled actions that have invocations before this time are retrieved.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time in UTC of the scheduled action to retrieve. Only active
     * scheduled actions that have invocations before this time are retrieved.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time in UTC of the scheduled action to retrieve. Only active
     * scheduled actions that have invocations before this time are retrieved.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time in UTC of the scheduled action to retrieve. Only active
     * scheduled actions that have invocations before this time are retrieved.</p>
     */
    inline DescribeScheduledActionsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time in UTC of the scheduled action to retrieve. Only active
     * scheduled actions that have invocations before this time are retrieved.</p>
     */
    inline DescribeScheduledActionsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>If true, retrieve only active scheduled actions. If false, retrieve only
     * disabled scheduled actions. </p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>If true, retrieve only active scheduled actions. If false, retrieve only
     * disabled scheduled actions. </p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>If true, retrieve only active scheduled actions. If false, retrieve only
     * disabled scheduled actions. </p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>If true, retrieve only active scheduled actions. If false, retrieve only
     * disabled scheduled actions. </p>
     */
    inline DescribeScheduledActionsRequest& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>List of scheduled action filters. </p>
     */
    inline const Aws::Vector<ScheduledActionFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>List of scheduled action filters. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>List of scheduled action filters. </p>
     */
    inline void SetFilters(const Aws::Vector<ScheduledActionFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>List of scheduled action filters. </p>
     */
    inline void SetFilters(Aws::Vector<ScheduledActionFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>List of scheduled action filters. </p>
     */
    inline DescribeScheduledActionsRequest& WithFilters(const Aws::Vector<ScheduledActionFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>List of scheduled action filters. </p>
     */
    inline DescribeScheduledActionsRequest& WithFilters(Aws::Vector<ScheduledActionFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>List of scheduled action filters. </p>
     */
    inline DescribeScheduledActionsRequest& AddFilters(const ScheduledActionFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>List of scheduled action filters. </p>
     */
    inline DescribeScheduledActionsRequest& AddFilters(ScheduledActionFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeScheduledActionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeScheduledActionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeScheduledActions</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeScheduledActionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


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
    inline DescribeScheduledActionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    ScheduledActionTypeValues m_targetActionType;
    bool m_targetActionTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::Vector<ScheduledActionFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
