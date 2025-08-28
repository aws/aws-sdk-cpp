/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Filters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/Grouping.h>
#include <aws/connect/model/CurrentMetric.h>
#include <aws/connect/model/CurrentMetricSortCriteria.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class GetCurrentMetricDataRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetCurrentMetricDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCurrentMetricData"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetCurrentMetricDataRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters to apply to returned metrics. You can filter up to the following
     * limits:</p> <ul> <li> <p>Queues: 100</p> </li> <li> <p>Routing profiles: 100</p>
     * </li> <li> <p>Channels: 3 (VOICE, CHAT, and TASK channels are supported.)</p>
     * </li> <li> <p>RoutingStepExpressions: 50</p> </li> <li> <p>AgentStatuses: 50</p>
     * </li> </ul> <p>Metric data is retrieved only for the resources associated with
     * the queues or routing profiles, and by any channels included in the filter. (You
     * cannot filter by both queue AND routing profile.) You can include both resource
     * IDs and resource ARNs in the same request.</p> <p>When using
     * <code>AgentStatuses</code> as filter make sure Queues is added as primary
     * filter.</p> <p>When using the <code>RoutingStepExpression</code> filter, you
     * need to pass exactly one <code>QueueId</code>. The filter is also case sensitive
     * so when using the <code>RoutingStepExpression</code> filter, grouping by
     * <code>ROUTING_STEP_EXPRESSION</code> is required.</p> <p>Currently tagging is
     * only supported on the resources that are passed in the filter.</p>
     */
    inline const Filters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Filters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Filters>
    GetCurrentMetricDataRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the level of aggregation for metrics data by a dimension(s). Its
     * similar to sorting items into buckets based on a common characteristic, then
     * counting or calculating something for each bucket. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <p>The grouping list is an ordered list, with
     * the first item in the list defined as the primary grouping. If no grouping is
     * included in the request, the aggregation happens at the instance-level.</p> <ul>
     * <li> <p>If you group by <code>CHANNEL</code>, you should include a Channels
     * filter. VOICE, CHAT, and TASK channels are supported.</p> </li> <li> <p>If you
     * group by <code>AGENT_STATUS</code>, you must include the <code>QUEUE</code> as
     * the primary grouping and use queue filter. When you group by
     * <code>AGENT_STATUS</code>, the only metric available is the
     * <code>AGENTS_ONLINE</code> metric.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>When using the
     * <code>RoutingStepExpression</code> filter, group by
     * <code>ROUTING_STEP_EXPRESSION</code> is required.</p> </li> </ul>
     */
    inline const Aws::Vector<Grouping>& GetGroupings() const { return m_groupings; }
    inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }
    template<typename GroupingsT = Aws::Vector<Grouping>>
    void SetGroupings(GroupingsT&& value) { m_groupingsHasBeenSet = true; m_groupings = std::forward<GroupingsT>(value); }
    template<typename GroupingsT = Aws::Vector<Grouping>>
    GetCurrentMetricDataRequest& WithGroupings(GroupingsT&& value) { SetGroupings(std::forward<GroupingsT>(value)); return *this;}
    inline GetCurrentMetricDataRequest& AddGroupings(Grouping value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html">Metrics
     * definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p> <dl>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>When the
     * filter <code>RoutingStepExpression</code> is used, this metric is still
     * calculated from enqueue time. For example, if a contact that has been queued
     * under <code>&lt;Expression 1&gt;</code> for 10 seconds has expired and
     * <code>&lt;Expression 2&gt;</code> becomes active, then
     * <code>OLDEST_CONTACT_AGE</code> for this queue will be counted starting from 10,
     * not 0.</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline const Aws::Vector<CurrentMetric>& GetCurrentMetrics() const { return m_currentMetrics; }
    inline bool CurrentMetricsHasBeenSet() const { return m_currentMetricsHasBeenSet; }
    template<typename CurrentMetricsT = Aws::Vector<CurrentMetric>>
    void SetCurrentMetrics(CurrentMetricsT&& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics = std::forward<CurrentMetricsT>(value); }
    template<typename CurrentMetricsT = Aws::Vector<CurrentMetric>>
    GetCurrentMetricDataRequest& WithCurrentMetrics(CurrentMetricsT&& value) { SetCurrentMetrics(std::forward<CurrentMetricsT>(value)); return *this;}
    template<typename CurrentMetricsT = CurrentMetric>
    GetCurrentMetricDataRequest& AddCurrentMetrics(CurrentMetricsT&& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics.emplace_back(std::forward<CurrentMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCurrentMetricDataRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetCurrentMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline const Aws::Vector<CurrentMetricSortCriteria>& GetSortCriteria() const { return m_sortCriteria; }
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }
    template<typename SortCriteriaT = Aws::Vector<CurrentMetricSortCriteria>>
    void SetSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::forward<SortCriteriaT>(value); }
    template<typename SortCriteriaT = Aws::Vector<CurrentMetricSortCriteria>>
    GetCurrentMetricDataRequest& WithSortCriteria(SortCriteriaT&& value) { SetSortCriteria(std::forward<SortCriteriaT>(value)); return *this;}
    template<typename SortCriteriaT = CurrentMetricSortCriteria>
    GetCurrentMetricDataRequest& AddSortCriteria(SortCriteriaT&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.emplace_back(std::forward<SortCriteriaT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Filters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Grouping> m_groupings;
    bool m_groupingsHasBeenSet = false;

    Aws::Vector<CurrentMetric> m_currentMetrics;
    bool m_currentMetricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<CurrentMetricSortCriteria> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
