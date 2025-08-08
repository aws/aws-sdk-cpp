/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/Filters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/Grouping.h>
#include <aws/connect/model/HistoricalMetric.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class GetMetricDataRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetMetricDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricData"; }

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
    GetMetricDataRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>The
     * start time cannot be earlier than 24 hours before the time of the request.
     * Historical metrics are available only for 24 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetMetricDataRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the start time timestamp.</p> <p>The time range between the start
     * and end time must be less than 24 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetMetricDataRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queues, up to 100, or channels, to use to filter the metrics returned.
     * Metric data is retrieved only for the resources associated with the queues or
     * channels included in the filter. You can include both queue IDs and queue ARNs
     * in the same request. VOICE, CHAT, and TASK channels are supported.</p>
     * <p>RoutingStepExpression is not a valid filter for GetMetricData and we
     * recommend switching to GetMetricDataV2 for more up-to-date features.</p> 
     * <p>To filter by <code>Queues</code>, enter the queue ID/ARN, not the name of the
     * queue.</p> 
     */
    inline const Filters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Filters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Filters>
    GetMetricDataRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p> <p>RoutingStepExpression is not a valid filter for GetMetricData
     * and we recommend switching to GetMetricDataV2 for more up-to-date features.</p>
     */
    inline const Aws::Vector<Grouping>& GetGroupings() const { return m_groupings; }
    inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }
    template<typename GroupingsT = Aws::Vector<Grouping>>
    void SetGroupings(GroupingsT&& value) { m_groupingsHasBeenSet = true; m_groupings = std::forward<GroupingsT>(value); }
    template<typename GroupingsT = Aws::Vector<Grouping>>
    GetMetricDataRequest& WithGroupings(GroupingsT&& value) { SetGroupings(std::forward<GroupingsT>(value)); return *this;}
    inline GetMetricDataRequest& AddGroupings(Grouping value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html">Metrics
     * definition</a> in the <i>Amazon Connect Administrator Guide</i>.</p> 
     * <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> <p>UI
     * name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-queue-abandon-time">Average
     * queue abandon time</a> </p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#after-contact-work-time">After
     * contact work time</a> </p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#api-contacts-handled">API
     * contacts handled</a> </p> </dd> <dt>AVG_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-hold-time">Average
     * customer hold time</a> </p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#callback-contacts-handled">Callback
     * contacts handled</a> </p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-abandoned">Contacts
     * abandoned</a> </p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-agent-hung-up-first">Contacts
     * agent hung up first</a> </p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-consulted">Contacts
     * consulted</a> </p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled">Contacts
     * handled</a> </p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled-incoming">Contacts
     * handled incoming</a> </p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled-outbound">Contacts
     * handled outbound</a> </p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-hold-disconnect">Contacts
     * hold disconnect</a> </p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-non-response">AGENT_NON_RESPONSE</a>
     * </p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-queued">Contacts
     * queued</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-in">Contacts
     * transferred in</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-queue">Contacts
     * transferred out queue</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out">Contacts
     * transferred out</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-queue">Contacts
     * transferred out queue</a> </p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-handle-time">Average
     * handle time</a> </p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-interaction-and-customer-hold-time">Average
     * agent interaction and customer hold time</a> </p> </dd>
     * <dt>INTERACTION_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> <p>UI
     * name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#aaverage-agent-interaction-time">Average
     * agent interaction time</a> </p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#occupancy">Occupancy</a>
     * </p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic:
     * AVG</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html##average-queue-answer-time">Average
     * queue answer time</a> </p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: MAX</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#minimum-flow-time">Minimum
     * flow time</a> </p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can include up to 20
     * SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p> <p>Statistic:
     * AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any whole number
     * from 1 to 604800 (inclusive), in seconds. For <code>Comparison</code>, you must
     * enter <code>LT</code> (for "Less than"). </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-queue-abandon-time">Average
     * queue abandon time</a> </p> </dd> </dl>
     */
    inline const Aws::Vector<HistoricalMetric>& GetHistoricalMetrics() const { return m_historicalMetrics; }
    inline bool HistoricalMetricsHasBeenSet() const { return m_historicalMetricsHasBeenSet; }
    template<typename HistoricalMetricsT = Aws::Vector<HistoricalMetric>>
    void SetHistoricalMetrics(HistoricalMetricsT&& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics = std::forward<HistoricalMetricsT>(value); }
    template<typename HistoricalMetricsT = Aws::Vector<HistoricalMetric>>
    GetMetricDataRequest& WithHistoricalMetrics(HistoricalMetricsT&& value) { SetHistoricalMetrics(std::forward<HistoricalMetricsT>(value)); return *this;}
    template<typename HistoricalMetricsT = HistoricalMetric>
    GetMetricDataRequest& AddHistoricalMetrics(HistoricalMetricsT&& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics.emplace_back(std::forward<HistoricalMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetMetricDataRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Filters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Grouping> m_groupings;
    bool m_groupingsHasBeenSet = false;

    Aws::Vector<HistoricalMetric> m_historicalMetrics;
    bool m_historicalMetricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
