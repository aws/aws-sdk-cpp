﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/IntervalDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/FilterV2.h>
#include <aws/connect/model/MetricV2.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class GetMetricDataV2Request : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetMetricDataV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricDataV2"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource. This includes the
     * <code>instanceId</code> an Amazon Connect instance.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline GetMetricDataV2Request& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline GetMetricDataV2Request& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline GetMetricDataV2Request& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be before
     * the end time timestamp. The start and end time depends on the
     * <code>IntervalPeriod</code> selected. By default the time range between start
     * and end time is 35 days. Historical metrics are available for 3 months.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline GetMetricDataV2Request& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetMetricDataV2Request& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be later
     * than the start time timestamp. It cannot be later than the current
     * timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline GetMetricDataV2Request& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetMetricDataV2Request& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval period and timezone to apply to returned metrics.</p> <ul> <li>
     * <p> <code>IntervalPeriod</code>: An aggregated grouping applied to request
     * metrics. Valid <code>IntervalPeriod</code> values are: <code>FIFTEEN_MIN</code>
     * | <code>THIRTY_MIN</code> | <code>HOUR</code> | <code>DAY</code> |
     * <code>WEEK</code> | <code>TOTAL</code>. </p> <p>For example, if
     * <code>IntervalPeriod</code> is selected <code>THIRTY_MIN</code>,
     * <code>StartTime</code> and <code>EndTime</code> differs by 1 day, then Amazon
     * Connect returns 48 results in the response. Each result is aggregated by the
     * THIRTY_MIN period. By default Amazon Connect aggregates results based on the
     * <code>TOTAL</code> interval period. </p> <p>The following list describes
     * restrictions on <code>StartTime</code> and <code>EndTime</code> based on which
     * <code>IntervalPeriod</code> is requested. </p> <ul> <li> <p>
     * <code>FIFTEEN_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>THIRTY_MIN</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>HOUR</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 3 days.</p> </li> <li> <p>
     * <code>DAY</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>WEEK</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> <li> <p>
     * <code>TOTAL</code>: The difference between <code>StartTime</code> and
     * <code>EndTime</code> must be less than 35 days.</p> </li> </ul> </li> <li> <p>
     * <code>TimeZone</code>: The timezone applied to requested metrics.</p> </li>
     * </ul>
     */
    inline const IntervalDetails& GetInterval() const{ return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(const IntervalDetails& value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline void SetInterval(IntervalDetails&& value) { m_intervalHasBeenSet = true; m_interval = std::move(value); }
    inline GetMetricDataV2Request& WithInterval(const IntervalDetails& value) { SetInterval(value); return *this;}
    inline GetMetricDataV2Request& WithInterval(IntervalDetails&& value) { SetInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters to apply to returned metrics. You can filter on the following
     * resources:</p> <ul> <li> <p>Agents</p> </li> <li> <p>Channels</p> </li> <li>
     * <p>Feature</p> </li> <li> <p>Queues</p> </li> <li> <p>Routing profiles</p> </li>
     * <li> <p>Routing step expression</p> </li> <li> <p>User hierarchy groups</p>
     * </li> </ul> <p>At least one filter must be passed from queues, routing profiles,
     * agents, or user hierarchy groups.</p> <p>To filter by phone number, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-historical-metrics-report.html">Create
     * a historical metrics report</a> in the <i>Amazon Connect Administrator
     * Guide</i>.</p> <p>Note the following limits:</p> <ul> <li> <p> <b>Filter
     * keys</b>: A maximum of 5 filter keys are supported in a single request. Valid
     * filter keys: <code>AGENT</code> | <code>AGENT_HIERARCHY_LEVEL_ONE</code> |
     * <code>AGENT_HIERARCHY_LEVEL_TWO</code> |
     * <code>AGENT_HIERARCHY_LEVEL_THREE</code> |
     * <code>AGENT_HIERARCHY_LEVEL_FOUR</code> |
     * <code>AGENT_HIERARCHY_LEVEL_FIVE</code> | <code>CASE_TEMPLATE_ARN</code> |
     * <code>CASE_STATUS</code> | <code>CHANNEL</code> |
     * <code>contact/segmentAttributes/connect:Subtype</code> | <code>FEATURE</code> |
     * <code>FLOW_TYPE</code> | <code>FLOWS_NEXT_RESOURCE_ID</code> |
     * <code>FLOWS_NEXT_RESOURCE_QUEUE_ID</code> | <code>FLOWS_OUTCOME_TYPE</code> |
     * <code>FLOWS_RESOURCE_ID</code> | <code>INITIATION_METHOD</code> |
     * <code>RESOURCE_PUBLISHED_TIMESTAMP</code> | <code>ROUTING_PROFILE</code> |
     * <code>ROUTING_STEP_EXPRESSION</code> | <code>QUEUE</code> |
     * <code>Q_CONNECT_ENABLED</code> | </p> </li> <li> <p> <b>Filter values</b>: A
     * maximum of 100 filter values are supported in a single request. VOICE, CHAT, and
     * TASK are valid <code>filterValue</code> for the CHANNEL filter key. They do not
     * count towards limitation of 100 filter values. For example, a GetMetricDataV2
     * request can filter by 50 queues, 35 agents, and 15 routing profiles for a total
     * of 100 filter values, along with 3 channel filters. </p> <p>
     * <code>contact_lens_conversational_analytics</code> is a valid filterValue for
     * the <code>FEATURE</code> filter key. It is available only to contacts analyzed
     * by Contact Lens conversational analytics.</p> <p> <code>connect:Chat</code>,
     * <code>connect:SMS</code>, <code>connect:Telephony</code>, and
     * <code>connect:WebRTC</code> are valid <code>filterValue</code> examples (not
     * exhaustive) for the <code>contact/segmentAttributes/connect:Subtype
     * filter</code> key.</p> <p> <code>ROUTING_STEP_EXPRESSION</code> is a valid
     * filter key with a filter value up to 3000 length. This filter is case and order
     * sensitive. JSON string fields must be sorted in ascending order and JSON array
     * order should be kept as is.</p> <p> <code>Q_CONNECT_ENABLED</code>. TRUE and
     * FALSE are the only valid filterValues for the <code>Q_CONNECT_ENABLED</code>
     * filter key. </p> <ul> <li> <p>TRUE includes all contacts that had Amazon Q in
     * Connect enabled as part of the flow.</p> </li> <li> <p>FALSE includes all
     * contacts that did not have Amazon Q in Connect enabled as part of the flow</p>
     * </li> </ul> <p>This filter is available only for contact record-driven metrics.
     * </p> </li> </ul>
     */
    inline const Aws::Vector<FilterV2>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<FilterV2>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<FilterV2>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline GetMetricDataV2Request& WithFilters(const Aws::Vector<FilterV2>& value) { SetFilters(value); return *this;}
    inline GetMetricDataV2Request& WithFilters(Aws::Vector<FilterV2>&& value) { SetFilters(std::move(value)); return *this;}
    inline GetMetricDataV2Request& AddFilters(const FilterV2& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline GetMetricDataV2Request& AddFilters(FilterV2&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The grouping applied to the metrics that are returned. For example, when
     * results are grouped by queue, the metrics returned are grouped by queue. The
     * values that are returned apply to the metrics for each queue. They are not
     * aggregated for all queues.</p> <p>If no grouping is specified, a summary of all
     * metrics is returned.</p> <p>Valid grouping keys: <code>AGENT</code> |
     * <code>AGENT_HIERARCHY_LEVEL_ONE</code> | <code>AGENT_HIERARCHY_LEVEL_TWO</code>
     * | <code>AGENT_HIERARCHY_LEVEL_THREE</code> |
     * <code>AGENT_HIERARCHY_LEVEL_FOUR</code> |
     * <code>AGENT_HIERARCHY_LEVEL_FIVE</code> | <code>CASE_TEMPLATE_ARN</code> |
     * <code>CASE_STATUS</code> | <code>CHANNEL</code> |
     * <code>contact/segmentAttributes/connect:Subtype</code> |
     * <code>FLOWS_RESOURCE_ID</code> | <code>FLOWS_MODULE_RESOURCE_ID</code> |
     * <code>FLOW_TYPE</code> | <code>FLOWS_OUTCOME_TYPE</code> |
     * <code>INITIATION_METHOD</code> | <code>Q_CONNECT_ENABLED</code> |
     * <code>QUEUE</code> | <code>RESOURCE_PUBLISHED_TIMESTAMP</code> |
     * <code>ROUTING_PROFILE</code> | <code>ROUTING_STEP_EXPRESSION</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupings() const{ return m_groupings; }
    inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }
    inline void SetGroupings(const Aws::Vector<Aws::String>& value) { m_groupingsHasBeenSet = true; m_groupings = value; }
    inline void SetGroupings(Aws::Vector<Aws::String>&& value) { m_groupingsHasBeenSet = true; m_groupings = std::move(value); }
    inline GetMetricDataV2Request& WithGroupings(const Aws::Vector<Aws::String>& value) { SetGroupings(value); return *this;}
    inline GetMetricDataV2Request& WithGroupings(Aws::Vector<Aws::String>&& value) { SetGroupings(std::move(value)); return *this;}
    inline GetMetricDataV2Request& AddGroupings(const Aws::String& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }
    inline GetMetricDataV2Request& AddGroupings(Aws::String&& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(std::move(value)); return *this; }
    inline GetMetricDataV2Request& AddGroupings(const char* value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metrics to retrieve. Specify the name, groupings, and filters for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * metrics definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>ABANDONMENT_RATE</dt> <dd> <p>Unit: Percent</p> <p>Valid groupings and
     * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy, Feature,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#abandonment-rate-historical">Abandonment
     * rate</a> </p> </dd> <dt>AGENT_ADHERENT_TIME</dt> <dd> <p>This metric is
     * available only in Amazon Web Services Regions where <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/regions.html#optimization_region">Forecasting,
     * capacity planning, and scheduling</a> is available.</p> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#adherent-time-historical">Adherent
     * time</a> </p> </dd> <dt>AGENT_ANSWER_RATE</dt> <dd> <p>Unit: Percent</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#agent-answer-rate-historical">Agent
     * answer rate</a> </p> </dd> <dt>AGENT_NON_ADHERENT_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#non-adherent-time">Non-adherent
     * time</a> </p> </dd> <dt>AGENT_NON_RESPONSE</dt> <dd> <p>Unit: Count</p> <p>Valid
     * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy
     * </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#agent-non-response">Agent
     * non-response</a> </p> </dd>
     * <dt>AGENT_NON_RESPONSE_WITHOUT_CUSTOMER_ABANDONS</dt> <dd> <p>Unit: Count</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy</p> <p>Data for this metric is available starting from October 1, 2023
     * 0:00:00 GMT.</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#agent-nonresponse-no-abandon-historical">Agent
     * non-response without customer abandons</a> </p> </dd> <dt>AGENT_OCCUPANCY</dt>
     * <dd> <p>Unit: Percentage</p> <p>Valid groupings and filters: Routing Profile,
     * Agent, Agent Hierarchy </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#occupancy-historical">Occupancy</a>
     * </p> </dd> <dt>AGENT_SCHEDULE_ADHERENCE</dt> <dd> <p>This metric is available
     * only in Amazon Web Services Regions where <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/regions.html#optimization_region">Forecasting,
     * capacity planning, and scheduling</a> is available.</p> <p>Unit: Percent</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#adherence-historical">Adherence</a>
     * </p> </dd> <dt>AGENT_SCHEDULED_TIME</dt> <dd> <p>This metric is available only
     * in Amazon Web Services Regions where <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/regions.html#optimization_region">Forecasting,
     * capacity planning, and scheduling</a> is available.</p> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#scheduled-time-historical">Scheduled
     * time</a> </p> </dd> <dt>AVG_ABANDON_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid
     * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
     * Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name:
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-queue-abandon-time-historical">Average
     * queue abandon time</a> </p> </dd> <dt>AVG_ACTIVE_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-active-time-historical">Average
     * active time</a> </p> </dd> <dt>AVG_AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code> </p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
     * <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-acw-time-historical">Average
     * after contact work time</a> </p>  <p>Feature is a valid filter but not a
     * valid grouping.</p>  </dd> <dt>AVG_AGENT_CONNECTING_TIME</dt> <dd>
     * <p>Unit: Seconds</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code>.
     * For now, this metric only supports the following as
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>CALLBACK</code> | <code>API</code> </p> <p>Valid groupings and filters:
     * Queue, Channel, Routing Profile, Agent, Agent Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#htm-avg-agent-api-connecting-time">Average
     * agent API connecting time</a> </p>  <p>The <code>Negate</code> key in
     * Metric Level Filters is not applicable for this metric.</p>  </dd>
     * <dt>AVG_AGENT_PAUSE_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid groupings and
     * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-agent-pause-time-historical">Average
     * agent pause time</a> </p> </dd> <dt>AVG_CASE_RELATED_CONTACTS</dt> <dd> <p>Unit:
     * Count</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and
     * filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-contacts-case-historical">Average
     * contacts per case</a> </p> </dd> <dt>AVG_CASE_RESOLUTION_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and
     * filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-case-resolution-time-historical">Average
     * case resolution time</a> </p> </dd> <dt>AVG_CONTACT_DURATION</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-contact-duration-historical">Average
     * contact duration</a> </p>  <p>Feature is a valid filter but not a valid
     * grouping.</p>  </dd> <dt>AVG_CONVERSATION_DURATION</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-conversation-duration-historical">Average
     * conversation duration</a> </p> </dd> <dt>AVG_FLOW_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Channel,
     * contact/segmentAttributes/connect:Subtype, Flow type, Flows module resource ID,
     * Flows next resource ID, Flows next resource queue ID, Flows outcome type, Flows
     * resource ID, Initiation method, Resource published timestamp</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-flow-time-historical">Average
     * flow time</a> </p> </dd> <dt>AVG_GREETING_TIME_AGENT</dt> <dd> <p>This metric is
     * available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-greeting-time-agent-historical">Average
     * agent greeting time</a> </p> </dd> <dt>AVG_HANDLE_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype,
     * RoutingStepExpression</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-handle-time-historical">Average
     * handle time</a> </p>  <p>Feature is a valid filter but not a valid
     * grouping.</p>  </dd> <dt>AVG_HOLD_TIME</dt> <dd> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
     * <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-customer-hold-time-historical">Average
     * customer hold time</a> </p>  <p>Feature is a valid filter but not a valid
     * grouping.</p>  </dd> <dt>AVG_HOLD_TIME_ALL_CONTACTS</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, contact/segmentAttributes/connect:Subtype, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#avg-customer-hold-time-all-contacts-historical">Average
     * customer hold time all contacts</a> </p> </dd> <dt>AVG_HOLDS</dt> <dd> <p>Unit:
     * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-holds-historical">Average
     * holds</a> </p>  <p>Feature is a valid filter but not a valid grouping.</p>
     *  </dd> <dt>AVG_INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI
     * name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-agent-interaction-customer-hold-time-historical">Average
     * agent interaction and customer hold time</a> </p> </dd>
     * <dt>AVG_INTERACTION_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid metric filter
     * key: <code>INITIATION_METHOD</code> </p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Feature, contact/segmentAttributes/connect:Subtype, Q
     * in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-agent-interaction-time-historical">Average
     * agent interaction time</a> </p>  <p>Feature is a valid filter but not a
     * valid grouping.</p>  </dd> <dt>AVG_INTERRUPTIONS_AGENT</dt> <dd> <p>This
     * metric is available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Count</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-interruptions-agent-historical">Average
     * agent interruptions</a> </p> </dd> <dt>AVG_INTERRUPTION_TIME_AGENT</dt> <dd>
     * <p>This metric is available only for contacts analyzed by Contact Lens
     * conversational analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and
     * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-interruptions-time-agent-historical">Average
     * agent interruption time</a> </p> </dd> <dt>AVG_NON_TALK_TIME</dt> <dd> <p>This
     * metric is available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html##average-non-talk-time-historical">Average
     * non-talk time</a> </p> </dd> <dt>AVG_QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name:
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-queue-answer-time-historical">Average
     * queue answer time</a> </p>  <p>Feature is a valid filter but not a valid
     * grouping.</p>  </dd> <dt>AVG_RESOLUTION_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-resolution-time-historical">Average
     * resolution time</a> </p> </dd> <dt>AVG_TALK_TIME</dt> <dd> <p>This metric is
     * available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-talk-time-historical">Average
     * talk time</a> </p> </dd> <dt>AVG_TALK_TIME_AGENT</dt> <dd> <p>This metric is
     * available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-talk-time-agent-historical">Average
     * agent talk time</a> </p> </dd> <dt>AVG_TALK_TIME_CUSTOMER</dt> <dd> <p>This
     * metric is available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#average-talk-time-customer-historical">Average
     * customer talk time</a> </p> </dd> <dt>CASES_CREATED</dt> <dd> <p>Unit: Count</p>
     * <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and filters:
     * CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html##cases-created-historical">Cases
     * created</a> </p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: Count</p>
     * <p>Metric filter: </p> <ul> <li> <p>Valid values: <code>API</code>|
     * <code>Incoming</code> | <code>Outbound</code> | <code>Transfer</code> |
     * <code>Callback</code> | <code>Queue_Transfer</code>| <code>Disconnect</code>
     * </p> </li> </ul> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, Agent, Agent Hierarchy, contact/segmentAttributes/connect:Subtype,
     * RoutingStepExpression, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-abandoned-historical">Contact
     * abandoned</a> </p> </dd> <dt>CONTACTS_ABANDONED_IN_X</dt> <dd> <p>Unit:
     * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>Threshold: For
     * <code>ThresholdValue</code>, enter any whole number from 1 to 604800
     * (inclusive), in seconds. For <code>Comparison</code>, you must enter
     * <code>LT</code> (for "Less than"). </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-abandoned-x-historical">Contacts
     * abandoned in X seconds</a> </p> </dd> <dt>CONTACTS_ANSWERED_IN_X</dt> <dd>
     * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
     * <p>Threshold: For <code>ThresholdValue</code>, enter any whole number from 1 to
     * 604800 (inclusive), in seconds. For <code>Comparison</code>, you must enter
     * <code>LT</code> (for "Less than"). </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-answered-x-historical">Contacts
     * answered in X seconds</a> </p> </dd> <dt>CONTACTS_CREATED</dt> <dd> <p>Unit:
     * Count</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code> </p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Feature,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-created-historical">Contacts
     * created</a> </p>  <p>Feature is a valid filter but not a valid
     * grouping.</p>  </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: Count</p>
     * <p>Valid metric filter key: <code>INITIATION_METHOD</code>,
     * <code>DISCONNECT_REASON</code> </p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy, Feature,
     * contact/segmentAttributes/connect:Subtype, RoutingStepExpression, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#api-contacts-handled-historical">API
     * contacts handled</a> </p>  <p>Feature is a valid filter but not a valid
     * grouping.</p>  </dd> <dt>CONTACTS_HANDLED_BY_CONNECTED_TO_AGENT</dt> <dd>
     * <p>Unit: Count</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code>
     * </p> <p>Valid groupings and filters: Queue, Channel, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-handled-by-connected-to-agent-historical">Contacts
     * handled (connected to agent timestamp)</a> </p> </dd>
     * <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: Count</p> <p>Valid groupings and
     * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-handled-by-connected-to-agent-historical">Contacts
     * hold disconnect</a> </p> </dd> <dt>CONTACTS_ON_HOLD_AGENT_DISCONNECT</dt> <dd>
     * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-hold-agent-disconnect-historical">Contacts
     * hold agent disconnect</a> </p> </dd>
     * <dt>CONTACTS_ON_HOLD_CUSTOMER_DISCONNECT</dt> <dd> <p>Unit: Count</p> <p>Valid
     * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
     * Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-hold-customer-disconnect-historical">Contacts
     * hold customer disconnect</a> </p> </dd> <dt>CONTACTS_PUT_ON_HOLD</dt> <dd>
     * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-hold-customer-disconnect-historical">Contacts
     * put on hold</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_EXTERNAL</dt> <dd>
     * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-transferred-out-external-historical">Contacts
     * transferred out external</a> </p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_INTERNAL</dt> <dd> <p>Unit: Percent</p> <p>Valid
     * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
     * Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-transferred-out-internal-historical">Contacts
     * transferred out internal</a> </p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit:
     * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, contact/segmentAttributes/connect:Subtype, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-queued-historical">Contacts
     * queued</a> </p> </dd> <dt>CONTACTS_QUEUED_BY_ENQUEUE</dt> <dd> <p>Unit:
     * Count</p> <p>Valid groupings and filters: Queue, Channel, Agent, Agent
     * Hierarchy, contact/segmentAttributes/connect:Subtype</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-queued-by-enqueue-historical">Contacts
     * queued (enqueue timestamp)</a> </p> </dd> <dt>CONTACTS_RESOLVED_IN_X</dt> <dd>
     * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
     * <p>Threshold: For <code>ThresholdValue</code> enter any whole number from 1 to
     * 604800 (inclusive), in seconds. For <code>Comparison</code>, you must enter
     * <code>LT</code> (for "Less than").</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-resolved-historical">Contacts
     * resolved in X</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit:
     * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-transferred-out-historical">Contacts
     * transferred out</a> </p>  <p>Feature is a valid filter but not a valid
     * grouping.</p>  </dd> <dt>CONTACTS_TRANSFERRED_OUT_BY_AGENT</dt> <dd>
     * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, Agent, Agent Hierarchy, contact/segmentAttributes/connect:Subtype, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-transferred-out-by-agent-historical">Contacts
     * transferred out by agent</a> </p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: Count</p> <p>Valid
     * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contacts-transferred-out-by-agent-historical">Contacts
     * transferred out queue</a> </p> </dd> <dt>CURRENT_CASES</dt> <dd> <p>Unit:
     * Count</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and
     * filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#current-cases-historical">Current
     * cases</a> </p> </dd> <dt>FLOWS_OUTCOME</dt> <dd> <p>Unit: Count</p> <p>Valid
     * groupings and filters: Channel, contact/segmentAttributes/connect:Subtype, Flow
     * type, Flows module resource ID, Flows next resource ID, Flows next resource
     * queue ID, Flows outcome type, Flows resource ID, Initiation method, Resource
     * published timestamp</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#flows-outcome-historical">Flows
     * outcome</a> </p> </dd> <dt>FLOWS_STARTED</dt> <dd> <p>Unit: Count</p> <p>Valid
     * groupings and filters: Channel, contact/segmentAttributes/connect:Subtype, Flow
     * type, Flows module resource ID, Flows resource ID, Initiation method, Resource
     * published timestamp</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#flows-started-historical">Flows
     * started</a> </p> </dd> <dt>MAX_FLOW_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid
     * groupings and filters: Channel, contact/segmentAttributes/connect:Subtype, Flow
     * type, Flows module resource ID, Flows next resource ID, Flows next resource
     * queue ID, Flows outcome type, Flows resource ID, Initiation method, Resource
     * published timestamp</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#maximum-flow-time-historical">Maximum
     * flow time</a> </p> </dd> <dt>MAX_QUEUED_TIME</dt> <dd> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI
     * name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#maximum-queued-time-historical">Maximum
     * queued time</a> </p> </dd> <dt>MIN_FLOW_TIME</dt> <dd> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Channel,
     * contact/segmentAttributes/connect:Subtype, Flow type, Flows module resource ID,
     * Flows next resource ID, Flows next resource queue ID, Flows outcome type, Flows
     * resource ID, Initiation method, Resource published timestamp</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#minimum-flow-time-historical">Minimum
     * flow time</a> </p> </dd> <dt>PERCENT_CASES_FIRST_CONTACT_RESOLVED</dt> <dd>
     * <p>Unit: Percent</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid
     * groupings and filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#cases-resolved-first-contact-historical">Cases
     * resolved on first contact</a> </p> </dd> <dt>PERCENT_CONTACTS_STEP_EXPIRED</dt>
     * <dd> <p>Unit: Percent</p> <p>Valid groupings and filters: Queue,
     * RoutingStepExpression</p> <p>UI name: Not available </p> </dd>
     * <dt>PERCENT_CONTACTS_STEP_JOINED</dt> <dd> <p>Unit: Percent</p> <p>Valid
     * groupings and filters: Queue, RoutingStepExpression</p> <p>UI name: Not
     * available </p> </dd> <dt>PERCENT_FLOWS_OUTCOME</dt> <dd> <p>Unit: Percent</p>
     * <p>Valid metric filter key: <code>FLOWS_OUTCOME_TYPE</code> </p> <p>Valid
     * groupings and filters: Channel, contact/segmentAttributes/connect:Subtype, Flow
     * type, Flows module resource ID, Flows next resource ID, Flows next resource
     * queue ID, Flows outcome type, Flows resource ID, Initiation method, Resource
     * published timestamp</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#flows-outcome-percentage-historical">Flows
     * outcome percentage</a>.</p>  <p>The <code>FLOWS_OUTCOME_TYPE</code> is not
     * a valid grouping.</p>  </dd> <dt>PERCENT_NON_TALK_TIME</dt> <dd> <p>This
     * metric is available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#ntt-historical">Non-talk
     * time percent</a> </p> </dd> <dt>PERCENT_TALK_TIME</dt> <dd> <p>This metric is
     * available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#tt-historical">Talk
     * time percent</a> </p> </dd> <dt>PERCENT_TALK_TIME_AGENT</dt> <dd> <p>This metric
     * is available only for contacts analyzed by Contact Lens conversational
     * analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and filters: Queue,
     * Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#ttagent-historical">Agent
     * talk time percent</a> </p> </dd> <dt>PERCENT_TALK_TIME_CUSTOMER</dt> <dd>
     * <p>This metric is available only for contacts analyzed by Contact Lens
     * conversational analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and
     * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#ttcustomer-historical">Customer
     * talk time percent</a> </p> </dd> <dt>REOPENED_CASE_ACTIONS</dt> <dd> <p>Unit:
     * Count</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and
     * filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#cases-reopened-historical">Cases
     * reopened</a> </p> </dd> <dt>RESOLVED_CASE_ACTIONS</dt> <dd> <p>Unit: Count</p>
     * <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and filters:
     * CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#cases-resolved-historicall">Cases
     * resolved</a> </p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can include up to 20
     * SERVICE_LEVEL metrics in a request.</p> <p>Unit: Percent</p> <p>Valid groupings
     * and filters: Queue, Channel, Routing Profile, Q in Connect</p> <p>Threshold: For
     * <code>ThresholdValue</code>, enter any whole number from 1 to 604800
     * (inclusive), in seconds. For <code>Comparison</code>, you must enter
     * <code>LT</code> (for "Less than"). </p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#service-level-historical">Service
     * level X</a> </p> </dd> <dt>STEP_CONTACTS_QUEUED</dt> <dd> <p>Unit: Count</p>
     * <p>Valid groupings and filters: Queue, RoutingStepExpression</p> <p>UI name: Not
     * available</p> </dd> <dt>SUM_AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#acw-historical">After
     * contact work time</a> </p> </dd> <dt>SUM_CONNECTING_TIME_AGENT</dt> <dd>
     * <p>Unit: Seconds</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code>.
     * This metric only supports the following filter keys as
     * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
     * <code>CALLBACK</code> | <code>API</code> </p> <p>Valid groupings and filters:
     * Queue, Channel, Routing Profile, Agent, Agent Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#htm-agent-api-connecting-time">Agent
     * API connecting time</a> </p>  <p>The <code>Negate</code> key in Metric
     * Level Filters is not applicable for this metric.</p>  </dd>
     * <dt>SUM_CONTACT_FLOW_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid groupings and
     * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy, Q in
     * Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contact-flow-time-historical">Contact
     * flow time</a> </p> </dd> <dt>SUM_CONTACT_TIME_AGENT</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#agent-on-contact-time-historical">Agent
     * on contact time</a> </p> </dd> <dt>SUM_CONTACTS_DISCONNECTED </dt> <dd> <p>Valid
     * metric filter key: <code>DISCONNECT_REASON</code> </p> <p>Unit: Count</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI
     * name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contact-disconnected-historical">Contact
     * disconnected</a> </p> </dd> <dt>SUM_ERROR_STATUS_TIME_AGENT</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#error-status-time-historical">Error
     * status time</a> </p> </dd> <dt>SUM_HANDLE_TIME</dt> <dd> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#contact-handle-time-historical">Contact
     * handle time</a> </p> </dd> <dt>SUM_HOLD_TIME</dt> <dd> <p>Unit: Count</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
     * Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#customer-hold-time-historical">Customer
     * hold time</a> </p> </dd> <dt>SUM_IDLE_TIME_AGENT</dt> <dd> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Routing Profile, Agent, Agent Hierarchy</p>
     * <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#agent-idle-time-historica">Agent
     * idle time</a> </p> </dd> <dt>SUM_INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#agent-interaction-hold-time-historical">Agent
     * interaction and hold time</a> </p> </dd> <dt>SUM_INTERACTION_TIME</dt> <dd>
     * <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing
     * Profile, Agent, Agent Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#agent-interaction-time-historical">Agent
     * interaction time</a> </p> </dd> <dt>SUM_NON_PRODUCTIVE_TIME_AGENT</dt> <dd>
     * <p>Unit: Seconds</p> <p>Valid groupings and filters: Routing Profile, Agent,
     * Agent Hierarchy</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#npt-historical">Non-Productive
     * Time</a> </p> </dd> <dt>SUM_ONLINE_TIME_AGENT</dt> <dd> <p>Unit: Seconds</p>
     * <p>Valid groupings and filters: Routing Profile, Agent, Agent Hierarchy</p>
     * <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#online-time-historical">Online
     * time</a> </p> </dd> <dt>SUM_RETRY_CALLBACK_ATTEMPTS</dt> <dd> <p>Unit: Count</p>
     * <p>Valid groupings and filters: Queue, Channel, Routing Profile,
     * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html#callback-attempts-historical">Callback
     * attempts</a> </p> </dd> </dl>
     */
    inline const Aws::Vector<MetricV2>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Vector<MetricV2>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Vector<MetricV2>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline GetMetricDataV2Request& WithMetrics(const Aws::Vector<MetricV2>& value) { SetMetrics(value); return *this;}
    inline GetMetricDataV2Request& WithMetrics(Aws::Vector<MetricV2>&& value) { SetMetrics(std::move(value)); return *this;}
    inline GetMetricDataV2Request& AddMetrics(const MetricV2& value) { m_metricsHasBeenSet = true; m_metrics.push_back(value); return *this; }
    inline GetMetricDataV2Request& AddMetrics(MetricV2&& value) { m_metricsHasBeenSet = true; m_metrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetMetricDataV2Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetMetricDataV2Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetMetricDataV2Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetMetricDataV2Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    IntervalDetails m_interval;
    bool m_intervalHasBeenSet = false;

    Aws::Vector<FilterV2> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupings;
    bool m_groupingsHasBeenSet = false;

    Aws::Vector<MetricV2> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
