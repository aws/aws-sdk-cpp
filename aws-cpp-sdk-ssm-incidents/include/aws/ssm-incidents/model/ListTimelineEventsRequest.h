/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/TimelineEventSort.h>
#include <aws/ssm-incidents/model/SortOrder.h>
#include <aws/ssm-incidents/model/Filter.h>
#include <utility>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class ListTimelineEventsRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API ListTimelineEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTimelineEvents"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline ListTimelineEventsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline ListTimelineEventsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline ListTimelineEventsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters the timeline events based on the provided conditional values. You can
     * filter timeline events using the following keys:</p> <ul> <li> <p>
     * <code>eventTime</code> </p> </li> <li> <p> <code>eventType</code> </p> </li>
     * </ul> <p>Note the following when deciding how to use Filters:</p> <ul> <li>
     * <p>If you don't specify a Filter, the response includes all timeline events.</p>
     * </li> <li> <p>If you specify more than one filter in a single request, the
     * response returns timeline events that match all filters.</p> </li> <li> <p>If
     * you specify a filter with more than one value, the response returns timeline
     * events that match any of the values provided.</p> </li> </ul>
     */
    inline ListTimelineEventsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline const Aws::String& GetIncidentRecordArn() const{ return m_incidentRecordArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline bool IncidentRecordArnHasBeenSet() const { return m_incidentRecordArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(const Aws::String& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(Aws::String&& value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline void SetIncidentRecordArn(const char* value) { m_incidentRecordArnHasBeenSet = true; m_incidentRecordArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline ListTimelineEventsRequest& WithIncidentRecordArn(const Aws::String& value) { SetIncidentRecordArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline ListTimelineEventsRequest& WithIncidentRecordArn(Aws::String&& value) { SetIncidentRecordArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the incident that includes the timeline
     * event.</p>
     */
    inline ListTimelineEventsRequest& WithIncidentRecordArn(const char* value) { SetIncidentRecordArn(value); return *this;}


    /**
     * <p>The maximum number of results per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results per page.</p>
     */
    inline ListTimelineEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListTimelineEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListTimelineEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListTimelineEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Sort by the specified key value pair.</p>
     */
    inline const TimelineEventSort& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Sort by the specified key value pair.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Sort by the specified key value pair.</p>
     */
    inline void SetSortBy(const TimelineEventSort& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Sort by the specified key value pair.</p>
     */
    inline void SetSortBy(TimelineEventSort&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Sort by the specified key value pair.</p>
     */
    inline ListTimelineEventsRequest& WithSortBy(const TimelineEventSort& value) { SetSortBy(value); return *this;}

    /**
     * <p>Sort by the specified key value pair.</p>
     */
    inline ListTimelineEventsRequest& WithSortBy(TimelineEventSort&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>Sorts the order of timeline events by the value specified in the
     * <code>sortBy</code> field.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Sorts the order of timeline events by the value specified in the
     * <code>sortBy</code> field.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Sorts the order of timeline events by the value specified in the
     * <code>sortBy</code> field.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Sorts the order of timeline events by the value specified in the
     * <code>sortBy</code> field.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Sorts the order of timeline events by the value specified in the
     * <code>sortBy</code> field.</p>
     */
    inline ListTimelineEventsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Sorts the order of timeline events by the value specified in the
     * <code>sortBy</code> field.</p>
     */
    inline ListTimelineEventsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_incidentRecordArn;
    bool m_incidentRecordArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    TimelineEventSort m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
