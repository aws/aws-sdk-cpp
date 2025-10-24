﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectRequest.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/FilterV2.h>
#include <aws/connect/model/IntervalDetails.h>
#include <aws/connect/model/MetricV2.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Connect {
namespace Model {

/**
 */
class GetMetricDataV2Request : public ConnectRequest {
 public:
  AWS_CONNECT_API GetMetricDataV2Request() = default;

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
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  GetMetricDataV2Request& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
   * interval for the retrieval of historical metrics data. The time must be before
   * the end time timestamp. The start and end time depends on the
   * <code>IntervalPeriod</code> selected. By default the time range between start
   * and end time is 35 days. Historical metrics are available for 3 months.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetMetricDataV2Request& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
   * interval for the retrieval of historical metrics data. The time must be later
   * than the start time timestamp. It cannot be later than the current
   * timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetMetricDataV2Request& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
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
  inline const IntervalDetails& GetInterval() const { return m_interval; }
  inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
  template <typename IntervalT = IntervalDetails>
  void SetInterval(IntervalT&& value) {
    m_intervalHasBeenSet = true;
    m_interval = std::forward<IntervalT>(value);
  }
  template <typename IntervalT = IntervalDetails>
  GetMetricDataV2Request& WithInterval(IntervalT&& value) {
    SetInterval(std::forward<IntervalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filters to apply to returned metrics. You can filter on the following
   * resources:</p> <ul> <li> <p>Agents</p> </li> <li> <p>Campaigns</p> </li> <li>
   * <p>Channels</p> </li> <li> <p>Feature</p> </li> <li> <p>Queues</p> </li> <li>
   * <p>Routing profiles</p> </li> <li> <p>Routing step expression</p> </li> <li>
   * <p>User hierarchy groups</p> </li> </ul> <p>At least one filter must be passed
   * from queues, routing profiles, agents, or user hierarchy groups.</p> <p>For
   * metrics for outbound campaigns analytics, you can also use campaigns to satisfy
   * at least one filter requirement.</p> <p>To filter by phone number, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/create-historical-metrics-report.html">Create
   * a historical metrics report</a> in the <i>Amazon Connect Administrator
   * Guide</i>.</p> <p>Note the following limits:</p> <ul> <li> <p> <b>Filter
   * keys</b>: A maximum of 5 filter keys are supported in a single request. Valid
   * filter keys: <code>AGENT</code> | <code>AGENT_HIERARCHY_LEVEL_ONE</code> |
   * <code>AGENT_HIERARCHY_LEVEL_TWO</code> |
   * <code>AGENT_HIERARCHY_LEVEL_THREE</code> |
   * <code>AGENT_HIERARCHY_LEVEL_FOUR</code> |
   * <code>AGENT_HIERARCHY_LEVEL_FIVE</code> |
   * <code>ANSWERING_MACHINE_DETECTION_STATUS</code> | <code> BOT_ID</code> |
   * <code>BOT_ALIAS</code> | <code>BOT_VERSION</code> | <code>BOT_LOCALE</code> |
   * <code>BOT_INTENT_NAME</code> | <code>CAMPAIGN</code> |
   * <code>CAMPAIGN_DELIVERY_EVENT_TYPE</code> | <code>CAMPAIGN_EXCLUDED_EVENT_TYPE
   * </code> | <code>CASE_TEMPLATE_ARN</code> | <code>CASE_STATUS</code> |
   * <code>CHANNEL</code> | <code>contact/segmentAttributes/connect:Subtype</code> |
   * <code>DISCONNECT_REASON</code> | <code>EVALUATION_FORM</code> |
   * <code>EVALUATION_SECTION</code> | <code>EVALUATION_QUESTION</code> |
   * <code>EVALUATION_SOURCE</code> | <code>FEATURE</code> |
   * <code>FLOW_ACTION_ID</code> | <code>FLOW_TYPE</code> |
   * <code>FLOWS_MODULE_RESOURCE_ID</code> | <code>FLOWS_NEXT_RESOURCE_ID</code> |
   * <code>FLOWS_NEXT_RESOURCE_QUEUE_ID</code> | <code>FLOWS_OUTCOME_TYPE</code> |
   * <code>FLOWS_RESOURCE_ID</code> | <code>FORM_VERSION</code> |
   * <code>INITIATION_METHOD</code> |
   * <code>INVOKING_RESOURCE_PUBLISHED_TIMESTAMP</code> |
   * <code>INVOKING_RESOURCE_TYPE</code> | <code>PARENT_FLOWS_RESOURCE_ID</code> |
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
   * </p> <p> <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-outbound-campaigns_Campaign.html">Campaign</a>
   * ARNs are valid <code>filterValues</code> for the <code>CAMPAIGN</code> filter
   * key.</p> </li> </ul>
   */
  inline const Aws::Vector<FilterV2>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<FilterV2>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<FilterV2>>
  GetMetricDataV2Request& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = FilterV2>
  GetMetricDataV2Request& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
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
   * <code>AGENT_HIERARCHY_LEVEL_FIVE</code> |
   * <code>ANSWERING_MACHINE_DETECTION_STATUS</code> | <code>BOT_ID</code> |
   * <code>BOT_ALIAS</code> | <code>BOT_VERSION</code> | <code>BOT_LOCALE</code> |
   * <code>BOT_INTENT_NAME</code> | <code>CAMPAIGN</code> |
   * <code>CAMPAIGN_DELIVERY_EVENT_TYPE</code> |
   * <code>CAMPAIGN_EXCLUDED_EVENT_TYPE</code> |
   * <code>CAMPAIGN_EXECUTION_TIMESTAMP</code> | <code>CASE_TEMPLATE_ARN</code> |
   * <code>CASE_STATUS</code> | <code>CHANNEL</code> |
   * <code>contact/segmentAttributes/connect:Subtype</code> |
   * <code>DISCONNECT_REASON</code> | <code>EVALUATION_FORM</code> |
   * <code>EVALUATION_SECTION</code> | <code>EVALUATION_QUESTION</code> |
   * <code>EVALUATION_SOURCE</code> | <code>FLOWS_RESOURCE_ID</code> |
   * <code>FLOWS_MODULE_RESOURCE_ID</code> | <code>FLOW_ACTION_ID</code> |
   * <code>FLOW_TYPE</code> | <code>FLOWS_OUTCOME_TYPE</code> |
   * <code>FORM_VERSION</code> | <code>INITIATION_METHOD</code> |
   * <code>INVOKING_RESOURCE_PUBLISHED_TIMESTAMP</code> |
   * <code>INVOKING_RESOURCE_TYPE</code> | <code>PARENT_FLOWS_RESOURCE_ID</code> |
   * <code>Q_CONNECT_ENABLED</code> | <code>QUEUE</code> |
   * <code>RESOURCE_PUBLISHED_TIMESTAMP</code> | <code>ROUTING_PROFILE</code> |
   * <code>ROUTING_STEP_EXPRESSION</code> </p> <p>Type: Array of strings</p> <p>Array
   * Members: Maximum number of 4 items</p> <p>Required: No</p>
   */
  inline const Aws::Vector<Aws::String>& GetGroupings() const { return m_groupings; }
  inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }
  template <typename GroupingsT = Aws::Vector<Aws::String>>
  void SetGroupings(GroupingsT&& value) {
    m_groupingsHasBeenSet = true;
    m_groupings = std::forward<GroupingsT>(value);
  }
  template <typename GroupingsT = Aws::Vector<Aws::String>>
  GetMetricDataV2Request& WithGroupings(GroupingsT&& value) {
    SetGroupings(std::forward<GroupingsT>(value));
    return *this;
  }
  template <typename GroupingsT = Aws::String>
  GetMetricDataV2Request& AddGroupings(GroupingsT&& value) {
    m_groupingsHasBeenSet = true;
    m_groupings.emplace_back(std::forward<GroupingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metrics to retrieve. Specify the name, groupings, and filters for each
   * metric. The following historical metrics are available. For a description of
   * each metric, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html">Metrics
   * definition</a> in the <i>Amazon Connect Administrator Guide</i>.</p> <dl>
   * <dt>ABANDONMENT_RATE</dt> <dd> <p>Unit: Percent</p> <p>Valid groupings and
   * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy, Feature,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#abandonment-rate">Abandonment
   * rate</a> </p> </dd> <dt>AGENT_ADHERENT_TIME</dt> <dd> <p>This metric is
   * available only in Amazon Web Services Regions where <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/regions.html#optimization_region">Forecasting,
   * capacity planning, and scheduling</a> is available.</p> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy </p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#adherent-time">Adherent
   * time</a> </p> </dd> <dt>AGENT_ANSWER_RATE</dt> <dd> <p>Unit: Percent</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-answer-rate">Agent
   * answer rate</a> </p> </dd> <dt>AGENT_NON_ADHERENT_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#non-adherent-time">Non-adherent
   * time</a> </p> </dd> <dt>AGENT_NON_RESPONSE</dt> <dd> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy
   * </p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-non-response">Agent
   * non-response</a> </p> </dd>
   * <dt>AGENT_NON_RESPONSE_WITHOUT_CUSTOMER_ABANDONS</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy</p> <p>Data for this metric is available starting from October 1, 2023
   * 0:00:00 GMT.</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-non-response-without-customer-abandons">Agent
   * non-response without customer abandons</a> </p> </dd> <dt>AGENT_OCCUPANCY</dt>
   * <dd> <p>Unit: Percentage</p> <p>Valid groupings and filters: Routing Profile,
   * Agent, Agent Hierarchy </p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#occupancy">Occupancy</a>
   * </p> </dd> <dt>AGENT_SCHEDULE_ADHERENCE</dt> <dd> <p>This metric is available
   * only in Amazon Web Services Regions where <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/regions.html#optimization_region">Forecasting,
   * capacity planning, and scheduling</a> is available.</p> <p>Unit: Percent</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#adherence">Adherence</a>
   * </p> </dd> <dt>AGENT_SCHEDULED_TIME</dt> <dd> <p>This metric is available only
   * in Amazon Web Services Regions where <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/regions.html#optimization_region">Forecasting,
   * capacity planning, and scheduling</a> is available.</p> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#scheduled-time">Scheduled
   * time</a> </p> </dd> <dt>AVG_ABANDON_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid
   * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>Valid
   * metric filter key: <code>INITIATION_METHOD</code> </p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-queue-abandon-time">Average
   * queue abandon time</a> </p> </dd> <dt>AVG_ACTIVE_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-active-time">Average
   * active time</a> </p> </dd> <dt>AVG_AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code> </p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
   * <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#after-contact-work-time">Average
   * after contact work time</a> </p>  <p>Feature is a valid filter but not a
   * valid grouping.</p>  </dd> <dt>AVG_AGENT_CONNECTING_TIME</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code>.
   * For now, this metric only supports the following as
   * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
   * <code>CALLBACK</code> | <code>API</code> </p> <p>Valid groupings and filters:
   * Queue, Channel, Routing Profile, Agent, Agent Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-api-connecting-time">Average
   * agent API connecting time</a> </p>  <p>The <code>Negate</code> key in
   * metric-level filters is not applicable for this metric.</p>  </dd>
   * <dt>AVG_AGENT_PAUSE_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid groupings and
   * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-pause-time">Average
   * agent pause time</a> </p> </dd> <dt>AVG_BOT_CONVERSATION_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Bot ID, Bot alias, Bot version, Bot
   * locale, Flows resource ID, Flows module resource ID, Flow type, Flow action ID,
   * Invoking resource published timestamp, Initiation method, Invoking resource
   * type, Parent flows resource ID</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#average-bot-conversation-time">Average
   * bot conversation time</a> </p> </dd> <dt>AVG_BOT_CONVERSATION_TURNS</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Bot ID, Bot alias, Bot version, Bot
   * locale, Flows resource ID, Flows module resource ID, Flow type, Flow action ID,
   * Invoking resource published timestamp, Initiation method, Invoking resource
   * type, Parent flows resource ID</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#average-bot-conversation-turns">Average
   * bot conversation turns</a> </p> </dd> <dt>AVG_CASE_RELATED_CONTACTS</dt> <dd>
   * <p>Unit: Count</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid
   * groupings and filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-contacts-per-case">Average
   * contacts per case</a> </p> </dd> <dt>AVG_CASE_RESOLUTION_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and
   * filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-case-resolution-time">Average
   * case resolution time</a> </p> </dd> <dt>AVG_CONTACT_DURATION</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-contact-duration">Average
   * contact duration</a> </p>  <p>Feature is a valid filter but not a valid
   * grouping.</p>  </dd> <dt>AVG_CONTACT_FIRST_RESPONSE_TIME_AGENT</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid groupings and filters: Agent, Agent Hierarchy,
   * Channel, contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-average-contact-first-response-wait-time">Agent
   * average contact first response wait time</a> </p> </dd>
   * <dt>AVG_CONVERSATION_CLOSE_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid
   * groupings and filters: Agent, Agent Hierarchy, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-conversation-close-time">Average
   * conversation close time</a> </p> </dd> <dt>AVG_CONVERSATION_DURATION</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, Agent, Agent Hierarchy, Feature,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-conversation-duration">Average
   * conversation duration</a> </p> </dd> <dt>AVG_DIALS_PER_MINUTE</dt> <dd> <p>This
   * metric is available only for outbound campaigns that use the agent assisted
   * voice and automated voice delivery modes.</p> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Agent, Campaign, Queue, Routing Profile</p> <p>UI name:
   * <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-dials-per-minute">Average
   * dials per minute</a> </p> </dd> <dt>AVG_EVALUATION_SCORE</dt> <dd> <p>Unit:
   * Percent</p> <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel,
   * Evaluation Form ID, Evaluation Section ID, Evaluation Question ID, Evaluation
   * Source, Form Version, Queue, Routing Profile</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-evaluation-score">Average
   * evaluation score</a> </p> </dd> <dt>AVG_FIRST_RESPONSE_TIME_AGENT</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid groupings and filters: Agent, Agent Hierarchy,
   * Channel, contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-first-response-time">Average
   * agent first response time</a> </p> </dd> <dt>AVG_FLOW_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Flow type, Flows module resource ID,
   * Flows next resource ID, Flows next resource queue ID, Flows outcome type, Flows
   * resource ID, Initiation method, Resource published timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-flow-time">Average
   * flow time</a> </p> </dd> <dt>AVG_GREETING_TIME_AGENT</dt> <dd> <p>This metric is
   * available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-greeting-time">Average
   * agent greeting time</a> </p> </dd> <dt>AVG_HANDLE_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype,
   * RoutingStepExpression</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-handle-time">Average
   * handle time</a> </p>  <p>Feature is a valid filter but not a valid
   * grouping.</p>  </dd> <dt>AVG_HOLD_TIME</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
   * <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-hold-time">Average
   * customer hold time</a> </p>  <p>Feature is a valid filter but not a valid
   * grouping.</p>  </dd> <dt>AVG_HOLD_TIME_ALL_CONTACTS</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, contact/segmentAttributes/connect:Subtype, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-hold-time-all-contacts">Average
   * customer hold time all contacts</a> </p> </dd> <dt>AVG_HOLDS</dt> <dd> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-holds">Average
   * holds</a> </p>  <p>Feature is a valid filter but not a valid grouping.</p>
   *  </dd> <dt>AVG_INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI
   * name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-interaction-and-customer-hold-time">Average
   * agent interaction and customer hold time</a> </p> </dd>
   * <dt>AVG_INTERACTION_TIME</dt> <dd> <p>Unit: Seconds</p> <p>Valid metric filter
   * key: <code>INITIATION_METHOD</code> </p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Feature, contact/segmentAttributes/connect:Subtype, Q
   * in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-interaction-time">Average
   * agent interaction time</a> </p>  <p>Feature is a valid filter but not a
   * valid grouping.</p>  </dd> <dt>AVG_INTERRUPTIONS_AGENT</dt> <dd> <p>This
   * metric is available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Count</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-interruptions">Average
   * agent interruptions</a> </p> </dd> <dt>AVG_INTERRUPTION_TIME_AGENT</dt> <dd>
   * <p>This metric is available only for contacts analyzed by Contact Lens
   * conversational analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and
   * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-interruption-time">Average
   * agent interruption time</a> </p> </dd> <dt>AVG_MESSAGE_LENGTH_AGENT</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Agent, Agent Hierarchy,
   * Channel, contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-message-length">Average
   * agent message length</a> </p> </dd> <dt>AVG_MESSAGE_LENGTH_CUSTOMER</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Agent, Agent Hierarchy,
   * Channel, contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-message-length">Average
   * customer message length</a> </p> </dd> <dt>AVG_MESSAGES</dt> <dd> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-messages">Average
   * messages</a> </p> </dd> <dt>AVG_MESSAGES_AGENT</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-messages">Average
   * agent messages</a> </p> </dd> <dt>AVG_MESSAGES_BOT</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-bot-messages">Average
   * bot messages</a> </p> </dd> <dt>AVG_MESSAGES_CUSTOMER</dt> <dd> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-messages">Average
   * customer messages</a> </p> </dd> <dt>AVG_NON_TALK_TIME</dt> <dd> <p>This metric
   * is available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-non-talk-time">Average
   * non-talk time</a> </p> </dd> <dt>AVG_QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Feature, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name:
   * <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-queue-answer-time">Average
   * queue answer time</a> </p> <p>Valid metric level filters:
   * <code>INITIATION_METHOD</code>, <code>FEATURE</code>,
   * <code>DISCONNECT_REASON</code> </p>  <p>Feature is a valid filter but not
   * a valid grouping.</p>  </dd>
   * <dt>AVG_QUEUE_ANSWER_TIME_CUSTOMER_FIRST_CALLBACK</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Feature,
   * contact/segmentAttributes/connect:Subtype, Q in Connect, Agent Hierarchy</p>
   * <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-queue-answer-time-customer-first-callback">Avg.
   * queue answer time - customer first callback</a> </p> </dd>
   * <dt>AVG_RESPONSE_TIME_AGENT</dt> <dd> <p>Unit: Seconds</p> <p>Valid groupings
   * and filters: Agent, Agent Hierarchy, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-response-time-agent">Average
   * agent response time</a> </p> </dd> <dt>AVG_RESPONSE_TIME_CUSTOMER</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid groupings and filters: Agent, Agent Hierarchy,
   * Channel, contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-time-agent">Average
   * customer response time</a> </p> </dd> <dt>AVG_RESOLUTION_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-resolution-time">Average
   * resolution time</a> </p> </dd> <dt>AVG_TALK_TIME</dt> <dd> <p>This metric is
   * available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-talk-time">Average
   * talk time</a> </p> </dd> <dt>AVG_TALK_TIME_AGENT</dt> <dd> <p>This metric is
   * available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-agent-talk-time">Average
   * agent talk time</a> </p> </dd> <dt>AVG_TALK_TIME_CUSTOMER</dt> <dd> <p>This
   * metric is available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-customer-talk-time">Average
   * customer talk time</a> </p> </dd>
   * <dt>AVG_WAIT_TIME_AFTER_CUSTOMER_CONNECTION</dt> <dd> <p>This metric is
   * available only for outbound campaigns that use the agent assisted voice and
   * automated voice delivery modes.</p> <p>Unit: Seconds</p> <p>Valid groupings and
   * filters: Campaign</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-wait-time-after-customer-connection">Average
   * wait time after customer connection</a> </p> </dd>
   * <dt>AVG_WAIT_TIME_AFTER_CUSTOMER_FIRST_CALLBACK_CONNECTION</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Feature, contact/segmentAttributes/connect:Subtype, Q in Connect, Agent
   * Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-wait-time-after-customer-connection-customer-first-callback">Avg.
   * wait time after customer connection - customer first callback</a> </p> </dd>
   * <dt>AVG_WEIGHTED_EVALUATION_SCORE</dt> <dd> <p>Unit: Percent</p> <p>Valid
   * groupings and filters: Agent, Agent Hierarchy, Channel, Evaluation Form Id,
   * Evaluation Section ID, Evaluation Question ID, Evaluation Source, Form Version,
   * Queue, Routing Profile</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#average-weighted-evaluation-score">Average
   * weighted evaluation score</a> </p> </dd> <dt>BOT_CONVERSATIONS_COMPLETED</dt>
   * <dd> <p>Unit: Count</p> <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Bot ID, Bot alias, Bot version, Bot
   * locale, Flows resource ID, Flows module resource ID, Flow type, Flow action ID,
   * Invoking resource published timestamp, Initiation method, Invoking resource
   * type, Parent flows resource ID</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#bot-conversations-completed">Bot
   * conversations completed</a> </p> </dd> <dt>BOT_INTENTS_COMPLETED</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Bot ID, Bot alias, Bot version, Bot
   * locale, Bot intent name, Flows resource ID, Flows module resource ID, Flow type,
   * Flow action ID, Invoking resource published timestamp, Initiation method,
   * Invoking resource type, Parent flows resource ID</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#bot-intents-completed">Bot
   * intents completed</a> </p> </dd> <dt>CAMPAIGN_CONTACTS_ABANDONED_AFTER_X</dt>
   * <dd> <p>This metric is available only for outbound campaigns using the agent
   * assisted voice and automated voice delivery modes.</p> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Agent, Campaign</p> <p>Threshold: For
   * <code>ThresholdValue</code>, enter any whole number from 1 to 604800
   * (inclusive), in seconds. For <code>Comparison</code>, you must enter
   * <code>GT</code> (for <i>Greater than</i>).</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#campaign-contacts-abandoned-after-x">Campaign
   * contacts abandoned after X</a> </p> </dd>
   * <dt>CAMPAIGN_CONTACTS_ABANDONED_AFTER_X_RATE</dt> <dd> <p>This metric is
   * available only for outbound campaigns using the agent assisted voice and
   * automated voice delivery modes.</p> <p>Unit: Percent</p> <p>Valid groupings and
   * filters: Agent, Campaign</p> <p>Threshold: For <code>ThresholdValue</code>,
   * enter any whole number from 1 to 604800 (inclusive), in seconds. For
   * <code>Comparison</code>, you must enter <code>GT</code> (for <i>Greater
   * than</i>).</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#campaign-contacts-abandoned-after-x-rate">Campaign
   * contacts abandoned after X rate</a> </p> </dd> <dt>CAMPAIGN_INTERACTIONS</dt>
   * <dd> <p>This metric is available only for outbound campaigns using the email
   * delivery mode. </p> <p>Unit: Count</p> <p>Valid metric filter key:
   * CAMPAIGN_INTERACTION_EVENT_TYPE</p> <p>Valid groupings and filters: Campaign</p>
   * <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#campaign-interactions">Campaign
   * interactions</a> </p> </dd> <dt>CAMPAIGN_PROGRESS_RATE</dt> <dd> <p>This metric
   * is only available for outbound campaigns initiated using a customer segment. It
   * is not available for event triggered campaigns.</p> <p>Unit: Percent</p>
   * <p>Valid groupings and filters: Campaign, Campaign Execution Timestamp</p> <p>UI
   * name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#campaign-progress-rate">Campaign
   * progress rate</a> </p> </dd> <dt>CAMPAIGN_SEND_ATTEMPTS</dt> <dd> <p>This metric
   * is available only for outbound campaigns.</p> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Campaign, Channel,
   * contact/segmentAttributes/connect:Subtype </p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#campaign-send-attempts">Campaign
   * send attempts</a> </p> </dd> <dt>CAMPAIGN_SEND_EXCLUSIONS</dt> <dd> <p>This
   * metric is available only for outbound campaigns.</p> <p>Valid metric filter key:
   * CAMPAIGN_EXCLUDED_EVENT_TYPE</p> <p>Unit: Count</p> <p>Valid groupings and
   * filters: Campaign, Campaign Excluded Event Type, Campaign Execution
   * Timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#campaign-send-exclusions">Campaign
   * send exclusions</a> </p> </dd> <dt>CASES_CREATED</dt> <dd> <p>Unit: Count</p>
   * <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and filters:
   * CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#cases-created">Cases
   * created</a> </p> </dd> <dt>CONTACTS_CREATED</dt> <dd> <p>Unit: Count</p>
   * <p>Valid metric filter key: <code>INITIATION_METHOD</code> </p> <p>Valid
   * groupings and filters: Queue, Channel, Routing Profile, Feature,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-created">Contacts
   * created</a> </p>  <p>Feature is a valid filter but not a valid
   * grouping.</p>  </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: Count</p>
   * <p>Valid metric filter key: <code>INITIATION_METHOD</code>,
   * <code>DISCONNECT_REASON</code> </p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy, Feature,
   * contact/segmentAttributes/connect:Subtype, RoutingStepExpression, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled">Contacts
   * handled</a> </p>  <p>Feature is a valid filter but not a valid
   * grouping.</p>  </dd> <dt>CONTACTS_HANDLED_BY_CONNECTED_TO_AGENT</dt> <dd>
   * <p>Unit: Count</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code>
   * </p> <p>Valid groupings and filters: Queue, Channel, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-handled-by-connected-to-agent-timestamp">Contacts
   * handled (connected to agent timestamp)</a> </p> </dd>
   * <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: Count</p> <p>Valid groupings and
   * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-hold-disconnect">Contacts
   * hold disconnect</a> </p> </dd> <dt>CONTACTS_ON_HOLD_AGENT_DISCONNECT</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-hold-agent-disconnect">Contacts
   * hold agent disconnect</a> </p> </dd>
   * <dt>CONTACTS_ON_HOLD_CUSTOMER_DISCONNECT</dt> <dd> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-hold-customer-disconnect">Contacts
   * hold customer disconnect</a> </p> </dd> <dt>CONTACTS_PUT_ON_HOLD</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-put-on-hold">Contacts
   * put on hold</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_EXTERNAL</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-external">Contacts
   * transferred out external</a> </p> </dd>
   * <dt>CONTACTS_TRANSFERRED_OUT_INTERNAL</dt> <dd> <p>Unit: Percent</p> <p>Valid
   * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-internal">Contacts
   * transferred out internal</a> </p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, contact/segmentAttributes/connect:Subtype, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-queued">Contacts
   * queued</a> </p> </dd> <dt>CONTACTS_QUEUED_BY_ENQUEUE</dt> <dd> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Queue, Channel, Agent, Agent
   * Hierarchy, contact/segmentAttributes/connect:Subtype</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-queued-by-enqueue">Contacts
   * queued (enqueue timestamp)</a> </p> </dd>
   * <dt>CONTACTS_REMOVED_FROM_QUEUE_IN_X</dt> <dd> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Queue, Channel, Routing Profile, Q in Connect</p>
   * <p>Threshold: For <code>ThresholdValue</code>, enter any whole number from 1 to
   * 604800 (inclusive), in seconds. For <code>Comparison</code>, you can use
   * <code>LT</code> (for "Less than") or <code>LTE</code> (for "Less than
   * equal").</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-removed-from-queue">Contacts
   * removed from queue in X seconds</a> </p> </dd> <dt>CONTACTS_RESOLVED_IN_X</dt>
   * <dd> <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
   * <p>Threshold: For <code>ThresholdValue</code>, enter any whole number from 1 to
   * 604800 (inclusive), in seconds. For <code>Comparison</code>, you can use
   * <code>LT</code> (for "Less than") or <code>LTE</code> (for "Less than
   * equal").</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-resolved">Contacts
   * resolved in X</a> </p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, Feature, contact/segmentAttributes/connect:Subtype, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out">Contacts
   * transferred out</a> </p>  <p>Feature is a valid filter but not a valid
   * grouping.</p>  </dd> <dt>CONTACTS_TRANSFERRED_OUT_BY_AGENT</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, Agent, Agent Hierarchy, contact/segmentAttributes/connect:Subtype, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-by-agent">Contacts
   * transferred out by agent</a> </p> </dd>
   * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-transferred-out-queue">Contacts
   * transferred out queue</a> </p> </dd> <dt>CURRENT_CASES</dt> <dd> <p>Unit:
   * Count</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and
   * filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#current-cases">Current
   * cases</a> </p> </dd> <dt>CONVERSATIONS_ABANDONED</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Feature,
   * RoutingStepExpression, Initiation method, Routing Profile, Queue, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#conversations-abandoned">Conversations
   * abandoned</a> </p> </dd> <dt>DELIVERY_ATTEMPTS</dt> <dd> <p>This metric is
   * available only for outbound campaigns.</p> <p>Unit: Count</p> <p>Valid metric
   * filter key: <code>ANSWERING_MACHINE_DETECTION_STATUS</code>,
   * <code>CAMPAIGN_DELIVERY_EVENT_TYPE</code>, <code>DISCONNECT_REASON</code> </p>
   * <p>Valid groupings and filters: Agent, Answering Machine Detection Status,
   * Campaign, Campaign Delivery EventType, Channel,
   * contact/segmentAttributes/connect:Subtype, Disconnect Reason, Queue, Routing
   * Profile</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#delivery-attempts">Delivery
   * attempts</a> </p>  <p>Campaign Delivery EventType filter and grouping are
   * only available for SMS and Email campaign delivery modes. Agent, Queue, Routing
   * Profile, Answering Machine Detection Status and Disconnect Reason are only
   * available for agent assisted voice and automated voice delivery modes. </p>
   *  </dd> <dt>DELIVERY_ATTEMPT_DISPOSITION_RATE</dt> <dd> <p>This metric is
   * available only for outbound campaigns. Dispositions for the agent assisted voice
   * and automated voice delivery modes are only available with answering machine
   * detection enabled.</p> <p>Unit: Percent</p> <p>Valid metric filter key:
   * <code>ANSWERING_MACHINE_DETECTION_STATUS</code>,
   * <code>CAMPAIGN_DELIVERY_EVENT_TYPE</code>, <code>DISCONNECT_REASON</code> </p>
   * <p>Valid groupings and filters: Agent, Answering Machine Detection Status,
   * Campaign, Channel, contact/segmentAttributes/connect:Subtype, Disconnect Reason,
   * Queue, Routing Profile</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#delivery-attempt-disposition-rate">Delivery
   * attempt disposition rate</a> </p>  <p>Campaign Delivery Event Type filter
   * and grouping are only available for SMS and Email campaign delivery modes.
   * Agent, Queue, Routing Profile, Answering Machine Detection Status and Disconnect
   * Reason are only available for agent assisted voice and automated voice delivery
   * modes. </p>  </dd> <dt>EVALUATIONS_PERFORMED</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel, Evaluation Form
   * ID, Evaluation Source, Form Version, Queue, Routing Profile</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#evaluations-performed">Evaluations
   * performed</a> </p> </dd> <dt>FLOWS_OUTCOME</dt> <dd> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Channel, contact/segmentAttributes/connect:Subtype, Flow
   * type, Flows module resource ID, Flows next resource ID, Flows next resource
   * queue ID, Flows outcome type, Flows resource ID, Initiation method, Resource
   * published timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#flows-outcome">Flows
   * outcome</a> </p> </dd> <dt>FLOWS_STARTED</dt> <dd> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Channel, contact/segmentAttributes/connect:Subtype, Flow
   * type, Flows module resource ID, Flows resource ID, Initiation method, Resource
   * published timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#flows-started">Flows
   * started</a> </p> </dd> <dt>HUMAN_ANSWERED_CALLS</dt> <dd> <p>This metric is
   * available only for outbound campaigns. Dispositions for the agent assisted voice
   * and automated voice delivery modes are only available with answering machine
   * detection enabled. </p> <p>Unit: Count</p> <p>Valid groupings and filters:
   * Agent, Campaign</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#human-answered">Human
   * answered</a> </p> </dd> <dt>MAX_FLOW_TIME</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Flow type, Flows module resource ID,
   * Flows next resource ID, Flows next resource queue ID, Flows outcome type, Flows
   * resource ID, Initiation method, Resource published timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#maximum-flow-time">Maximum
   * flow time</a> </p> </dd> <dt>MAX_QUEUED_TIME</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI
   * name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#maximum-queued-time">Maximum
   * queued time</a> </p> </dd> <dt>MIN_FLOW_TIME</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Flow type, Flows module resource ID,
   * Flows next resource ID, Flows next resource queue ID, Flows outcome type, Flows
   * resource ID, Initiation method, Resource published timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#minimum-flow-time">Minimum
   * flow time</a> </p> </dd> <dt>PERCENT_AUTOMATIC_FAILS</dt> <dd> <p>Unit:
   * Percent</p> <p>Valid groupings and filters: Agent, Agent Hierarchy, Channel,
   * Evaluation Form ID, Evaluation Source, Form Version, Queue, Routing Profile</p>
   * <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#automatic-fails-percent">Automatic
   * fails percent</a> </p> </dd> <dt>PERCENT_BOT_CONVERSATIONS_OUTCOME</dt> <dd>
   * <p>Unit: Percent</p> <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Bot ID, Bot alias, Bot version, Bot
   * locale, Flows resource ID, Flows module resource ID, Flow type, Flow action ID,
   * Invoking resource published timestamp, Initiation method, Invoking resource
   * type, Parent flows resource ID</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#percent-bot-conversations-outcome">Percent
   * bot conversations outcome</a> </p> </dd> <dt>PERCENT_BOT_INTENTS_OUTCOME</dt>
   * <dd> <p>Unit: Percent</p> <p>Valid groupings and filters: Channel,
   * contact/segmentAttributes/connect:Subtype, Bot ID, Bot alias, Bot version, Bot
   * locale, Bot intent name, Flows resource ID, Flows module resource ID, Flow type,
   * Flow action ID, Invoking resource published timestamp, Initiation method,
   * Invoking resource type, Parent flows resource ID</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/bot-metrics.html#percent-bot-intents-outcome">Percent
   * bot intents outcome</a> </p> </dd> <dt>PERCENT_CASES_FIRST_CONTACT_RESOLVED</dt>
   * <dd> <p>Unit: Percent</p> <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid
   * groupings and filters: CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#cases-resolved-on-first-contact">Cases
   * resolved on first contact</a> </p> </dd> <dt>PERCENT_CONTACTS_STEP_EXPIRED</dt>
   * <dd> <p>Unit: Percent</p> <p>Valid groupings and filters: Queue,
   * RoutingStepExpression</p> <p>UI name: This metric is available in Real-time
   * Metrics UI but not on the Historical Metrics UI.</p> </dd>
   * <dt>PERCENT_CONTACTS_STEP_JOINED</dt> <dd> <p>Unit: Percent</p> <p>Valid
   * groupings and filters: Queue, RoutingStepExpression</p> <p>UI name: This metric
   * is available in Real-time Metrics UI but not on the Historical Metrics UI.</p>
   * </dd> <dt>PERCENT_FLOWS_OUTCOME</dt> <dd> <p>Unit: Percent</p> <p>Valid metric
   * filter key: <code>FLOWS_OUTCOME_TYPE</code> </p> <p>Valid groupings and filters:
   * Channel, contact/segmentAttributes/connect:Subtype, Flow type, Flows module
   * resource ID, Flows next resource ID, Flows next resource queue ID, Flows outcome
   * type, Flows resource ID, Initiation method, Resource published timestamp</p>
   * <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#flows-outcome-percentage">Flows
   * outcome percentage</a>.</p>  <p>The <code>FLOWS_OUTCOME_TYPE</code> is not
   * a valid grouping.</p>  </dd> <dt>PERCENT_NON_TALK_TIME</dt> <dd> <p>This
   * metric is available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#non-talk-time-percent">Non-talk
   * time percent</a> </p> </dd> <dt>PERCENT_TALK_TIME</dt> <dd> <p>This metric is
   * available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#talk-time-percent">Talk
   * time percent</a> </p> </dd> <dt>PERCENT_TALK_TIME_AGENT</dt> <dd> <p>This metric
   * is available only for contacts analyzed by Contact Lens conversational
   * analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and filters: Queue,
   * Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-talk-time-percent">Agent
   * talk time percent</a> </p> </dd> <dt>PERCENT_TALK_TIME_CUSTOMER</dt> <dd>
   * <p>This metric is available only for contacts analyzed by Contact Lens
   * conversational analytics.</p> <p>Unit: Percentage</p> <p>Valid groupings and
   * filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#customer-talk-time-percent">Customer
   * talk time percent</a> </p> </dd> <dt>RECIPIENTS_ATTEMPTED</dt> <dd> <p>This
   * metric is only available for outbound campaigns initiated using a customer
   * segment. It is not available for event triggered campaigns.</p> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Campaign, Campaign Execution
   * Timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#recipients-attempted">Recipients
   * attempted</a> </p> </dd> <dt>RECIPIENTS_INTERACTED</dt> <dd> <p>This metric is
   * only available for outbound campaigns initiated using a customer segment. It is
   * not available for event triggered campaigns.</p> <p>Valid metric filter key:
   * CAMPAIGN_INTERACTION_EVENT_TYPE</p> <p>Unit: Count</p> <p>Valid groupings and
   * filters: Campaign, Channel, contact/segmentAttributes/connect:Subtype, Campaign
   * Execution Timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#recipients-interacted">Recipients
   * interacted</a> </p> </dd> <dt>RECIPIENTS_TARGETED</dt> <dd> <p>This metric is
   * only available for outbound campaigns initiated using a customer segment. It is
   * not available for event triggered campaigns.</p> <p>Unit: Count</p> <p>Valid
   * groupings and filters: Campaign, Campaign Execution Timestamp</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#recipients-targeted">Recipients
   * targeted</a> </p> </dd> <dt>REOPENED_CASE_ACTIONS</dt> <dd> <p>Unit: Count</p>
   * <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and filters:
   * CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#cases-reopened">Cases
   * reopened</a> </p> </dd> <dt>RESOLVED_CASE_ACTIONS</dt> <dd> <p>Unit: Count</p>
   * <p>Required filter key: CASE_TEMPLATE_ARN</p> <p>Valid groupings and filters:
   * CASE_TEMPLATE_ARN, CASE_STATUS</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#cases-resolved">Cases
   * resolved</a> </p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can include up to 20
   * SERVICE_LEVEL metrics in a request.</p> <p>Unit: Percent</p> <p>Valid groupings
   * and filters: Queue, Channel, Routing Profile, Q in Connect</p> <p>Threshold: For
   * <code>ThresholdValue</code>, enter any whole number from 1 to 604800
   * (inclusive), in seconds. For <code>Comparison</code>, you can use
   * <code>LT</code> (for "Less than") or <code>LTE</code> (for "Less than
   * equal").</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#service-level">Service
   * level X</a> </p> </dd> <dt>STEP_CONTACTS_QUEUED</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Queue, RoutingStepExpression</p> <p>UI name:
   * This metric is available in Real-time Metrics UI but not on the Historical
   * Metrics UI.</p> </dd> <dt>SUM_AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#after-contact-work-time">After
   * contact work time</a> </p> </dd> <dt>SUM_CONNECTING_TIME_AGENT</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid metric filter key: <code>INITIATION_METHOD</code>.
   * This metric only supports the following filter keys as
   * <code>INITIATION_METHOD</code>: <code>INBOUND</code> | <code>OUTBOUND</code> |
   * <code>CALLBACK</code> | <code>API</code> |
   * <code>CALLBACK_CUSTOMER_FIRST_DIALED</code> </p> <p>Valid groupings and filters:
   * Queue, Channel, Routing Profile, Agent, Agent Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-api-connecting-time">Agent
   * API connecting time</a> </p>  <p>The <code>Negate</code> key in
   * metric-level filters is not applicable for this metric.</p>  </dd>
   * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: Count</p> <p>Metric filter: </p> <ul>
   * <li> <p>Valid values: <code>API</code>| <code>INCOMING</code> |
   * <code>OUTBOUND</code> | <code>TRANSFER</code> | <code>CALLBACK</code> |
   * <code>QUEUE_TRANSFER</code>| <code>Disconnect</code> |
   * <code>CALLBACK_CUSTOMER_FIRST_DIALED</code> </p> </li> </ul> <p>Valid groupings
   * and filters: Queue, Channel, Routing Profile, Agent, Agent Hierarchy,
   * contact/segmentAttributes/connect:Subtype, RoutingStepExpression, Q in
   * Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-abandoned">Contact
   * abandoned</a> </p> </dd> <dt>SUM_CONTACTS_ABANDONED_IN_X</dt> <dd> <p>Unit:
   * Count</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>Threshold: For
   * <code>ThresholdValue</code>, enter any whole number from 1 to 604800
   * (inclusive), in seconds. For <code>Comparison</code>, you can use
   * <code>LT</code> (for "Less than") or <code>LTE</code> (for "Less than
   * equal").</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-abandoned-in-x-seconds">Contacts
   * abandoned in X seconds</a> </p> </dd> <dt>SUM_CONTACTS_ANSWERED_IN_X</dt> <dd>
   * <p>Unit: Count</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, contact/segmentAttributes/connect:Subtype, Q in Connect</p>
   * <p>Threshold: For <code>ThresholdValue</code>, enter any whole number from 1 to
   * 604800 (inclusive), in seconds. For <code>Comparison</code>, you can use
   * <code>LT</code> (for "Less than") or <code>LTE</code> (for "Less than
   * equal").</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contacts-answered-in-x-seconds">Contacts
   * answered in X seconds</a> </p> </dd> <dt>SUM_CONTACT_FLOW_TIME</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contact-flow-time">Contact
   * flow time</a> </p> </dd> <dt>SUM_CONTACT_TIME_AGENT</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Routing Profile, Agent, Agent
   * Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-on-contact-time">Agent
   * on contact time</a> </p> </dd> <dt>SUM_CONTACTS_DISCONNECTED </dt> <dd> <p>Valid
   * metric filter key: <code>DISCONNECT_REASON</code> </p> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy, contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI
   * name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contact-disconnected">Contact
   * disconnected</a> </p> </dd> <dt>SUM_ERROR_STATUS_TIME_AGENT</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Routing Profile, Agent, Agent
   * Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#error-status-time">Error
   * status time</a> </p> </dd> <dt>SUM_HANDLE_TIME</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#contact-handle-time">Contact
   * handle time</a> </p> </dd> <dt>SUM_HOLD_TIME</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile, Agent, Agent
   * Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#customer-hold-time">Customer
   * hold time</a> </p> </dd> <dt>SUM_IDLE_TIME_AGENT</dt> <dd> <p>Unit: Seconds</p>
   * <p>Valid groupings and filters: Routing Profile, Agent, Agent Hierarchy</p>
   * <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-idle-time">Agent
   * idle time</a> </p> </dd> <dt>SUM_INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * Agent, Agent Hierarchy, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-interaction-and-hold-time">Agent
   * interaction and hold time</a> </p> </dd> <dt>SUM_INTERACTION_TIME</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid groupings and filters: Queue, Channel, Routing
   * Profile, Agent, Agent Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-interaction-time">Agent
   * interaction time</a> </p> </dd> <dt>SUM_NON_PRODUCTIVE_TIME_AGENT</dt> <dd>
   * <p>Unit: Seconds</p> <p>Valid groupings and filters: Routing Profile, Agent,
   * Agent Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#agent-non-productive-time">Agent
   * non-productive time</a> </p> </dd> <dt>SUM_ONLINE_TIME_AGENT</dt> <dd> <p>Unit:
   * Seconds</p> <p>Valid groupings and filters: Routing Profile, Agent, Agent
   * Hierarchy</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#online-time">Online
   * time</a> </p> </dd> <dt>SUM_RETRY_CALLBACK_ATTEMPTS</dt> <dd> <p>Unit: Count</p>
   * <p>Valid groupings and filters: Queue, Channel, Routing Profile,
   * contact/segmentAttributes/connect:Subtype, Q in Connect</p> <p>UI name: <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/metrics-definitions.html#callback-attempts">Callback
   * attempts</a> </p> </dd> </dl>
   */
  inline const Aws::Vector<MetricV2>& GetMetrics() const { return m_metrics; }
  inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
  template <typename MetricsT = Aws::Vector<MetricV2>>
  void SetMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics = std::forward<MetricsT>(value);
  }
  template <typename MetricsT = Aws::Vector<MetricV2>>
  GetMetricDataV2Request& WithMetrics(MetricsT&& value) {
    SetMetrics(std::forward<MetricsT>(value));
    return *this;
  }
  template <typename MetricsT = MetricV2>
  GetMetricDataV2Request& AddMetrics(MetricsT&& value) {
    m_metricsHasBeenSet = true;
    m_metrics.emplace_back(std::forward<MetricsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetMetricDataV2Request& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetMetricDataV2Request& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;

  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
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

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
