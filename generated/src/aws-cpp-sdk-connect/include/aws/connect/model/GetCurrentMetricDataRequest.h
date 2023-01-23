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
    AWS_CONNECT_API GetCurrentMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCurrentMetricData"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetCurrentMetricDataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetCurrentMetricDataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetCurrentMetricDataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The filters to apply to returned metrics. You can filter up to the following
     * limits:</p> <ul> <li> <p>Queues: 100</p> </li> <li> <p>Routing profiles: 100</p>
     * </li> <li> <p>Channels: 3 (VOICE, CHAT, and TASK channels are supported.)</p>
     * </li> </ul> <p>Metric data is retrieved only for the resources associated with
     * the queues or routing profiles, and by any channels included in the filter. (You
     * cannot filter by both queue AND routing profile.) You can include both resource
     * IDs and resource ARNs in the same request. </p> <p>Currently tagging is only
     * supported on the resources that are passed in the filter.</p>
     */
    inline const Filters& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters to apply to returned metrics. You can filter up to the following
     * limits:</p> <ul> <li> <p>Queues: 100</p> </li> <li> <p>Routing profiles: 100</p>
     * </li> <li> <p>Channels: 3 (VOICE, CHAT, and TASK channels are supported.)</p>
     * </li> </ul> <p>Metric data is retrieved only for the resources associated with
     * the queues or routing profiles, and by any channels included in the filter. (You
     * cannot filter by both queue AND routing profile.) You can include both resource
     * IDs and resource ARNs in the same request. </p> <p>Currently tagging is only
     * supported on the resources that are passed in the filter.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters to apply to returned metrics. You can filter up to the following
     * limits:</p> <ul> <li> <p>Queues: 100</p> </li> <li> <p>Routing profiles: 100</p>
     * </li> <li> <p>Channels: 3 (VOICE, CHAT, and TASK channels are supported.)</p>
     * </li> </ul> <p>Metric data is retrieved only for the resources associated with
     * the queues or routing profiles, and by any channels included in the filter. (You
     * cannot filter by both queue AND routing profile.) You can include both resource
     * IDs and resource ARNs in the same request. </p> <p>Currently tagging is only
     * supported on the resources that are passed in the filter.</p>
     */
    inline void SetFilters(const Filters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters to apply to returned metrics. You can filter up to the following
     * limits:</p> <ul> <li> <p>Queues: 100</p> </li> <li> <p>Routing profiles: 100</p>
     * </li> <li> <p>Channels: 3 (VOICE, CHAT, and TASK channels are supported.)</p>
     * </li> </ul> <p>Metric data is retrieved only for the resources associated with
     * the queues or routing profiles, and by any channels included in the filter. (You
     * cannot filter by both queue AND routing profile.) You can include both resource
     * IDs and resource ARNs in the same request. </p> <p>Currently tagging is only
     * supported on the resources that are passed in the filter.</p>
     */
    inline void SetFilters(Filters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters to apply to returned metrics. You can filter up to the following
     * limits:</p> <ul> <li> <p>Queues: 100</p> </li> <li> <p>Routing profiles: 100</p>
     * </li> <li> <p>Channels: 3 (VOICE, CHAT, and TASK channels are supported.)</p>
     * </li> </ul> <p>Metric data is retrieved only for the resources associated with
     * the queues or routing profiles, and by any channels included in the filter. (You
     * cannot filter by both queue AND routing profile.) You can include both resource
     * IDs and resource ARNs in the same request. </p> <p>Currently tagging is only
     * supported on the resources that are passed in the filter.</p>
     */
    inline GetCurrentMetricDataRequest& WithFilters(const Filters& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters to apply to returned metrics. You can filter up to the following
     * limits:</p> <ul> <li> <p>Queues: 100</p> </li> <li> <p>Routing profiles: 100</p>
     * </li> <li> <p>Channels: 3 (VOICE, CHAT, and TASK channels are supported.)</p>
     * </li> </ul> <p>Metric data is retrieved only for the resources associated with
     * the queues or routing profiles, and by any channels included in the filter. (You
     * cannot filter by both queue AND routing profile.) You can include both resource
     * IDs and resource ARNs in the same request. </p> <p>Currently tagging is only
     * supported on the resources that are passed in the filter.</p>
     */
    inline GetCurrentMetricDataRequest& WithFilters(Filters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline const Aws::Vector<Grouping>& GetGroupings() const{ return m_groupings; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline void SetGroupings(const Aws::Vector<Grouping>& value) { m_groupingsHasBeenSet = true; m_groupings = value; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline void SetGroupings(Aws::Vector<Grouping>&& value) { m_groupingsHasBeenSet = true; m_groupings = std::move(value); }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& WithGroupings(const Aws::Vector<Grouping>& value) { SetGroupings(value); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& WithGroupings(Aws::Vector<Grouping>&& value) { SetGroupings(std::move(value)); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& AddGroupings(const Grouping& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * <code>QUEUE</code>, the metrics returned apply to each queue rather than
     * aggregated for all queues. </p> <ul> <li> <p>If you group by
     * <code>CHANNEL</code>, you should include a Channels filter. VOICE, CHAT, and
     * TASK channels are supported.</p> </li> <li> <p>If you group by
     * <code>ROUTING_PROFILE</code>, you must include either a queue or routing profile
     * filter. In addition, a routing profile filter is required for metrics
     * <code>CONTACTS_SCHEDULED</code>, <code>CONTACTS_IN_QUEUE</code>, and <code>
     * OLDEST_CONTACT_AGE</code>.</p> </li> <li> <p>If no <code>Grouping</code> is
     * included in the request, a summary of metrics is returned.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& AddGroupings(Grouping&& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(std::move(value)); return *this; }


    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline const Aws::Vector<CurrentMetric>& GetCurrentMetrics() const{ return m_currentMetrics; }

    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline bool CurrentMetricsHasBeenSet() const { return m_currentMetricsHasBeenSet; }

    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline void SetCurrentMetrics(const Aws::Vector<CurrentMetric>& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics = value; }

    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline void SetCurrentMetrics(Aws::Vector<CurrentMetric>&& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics = std::move(value); }

    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline GetCurrentMetricDataRequest& WithCurrentMetrics(const Aws::Vector<CurrentMetric>& value) { SetCurrentMetrics(value); return *this;}

    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline GetCurrentMetricDataRequest& WithCurrentMetrics(Aws::Vector<CurrentMetric>&& value) { SetCurrentMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline GetCurrentMetricDataRequest& AddCurrentMetrics(const CurrentMetric& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics.push_back(value); return *this; }

    /**
     * <p>The metrics to retrieve. Specify the name and unit for each metric. The
     * following metrics are available. For a description of all the metrics, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html">Real-time
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     * <dl> <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#aftercallwork-real-time">ACW</a>
     * </p> </dd> <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#available-real-time">Available</a>
     * </p> </dd> <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#error-real-time">Error</a>
     * </p> </dd> <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#non-productive-time-real-time">NPT
     * (Non-Productive Time)</a> </p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit:
     * COUNT</p> <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ON_CONTACT</dt> <dd> <p>Unit: COUNT</p>
     * <p>Name in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#on-call-real-time">On
     * contact</a> </p> </dd> <dt>AGENTS_ONLINE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#online-real-time">Online</a>
     * </p> </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#staffed-real-time">Staffed</a>
     * </p> </dd> <dt>CONTACTS_IN_QUEUE</dt> <dd> <p>Unit: COUNT</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#in-queue-real-time">In
     * queue</a> </p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> <p>Name
     * in real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#scheduled-real-time">Scheduled</a>
     * </p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit: SECONDS</p> <p>When you use
     * groupings, Unit says SECONDS and the Value is returned in SECONDS. </p> <p>When
     * you do not use groupings, Unit says SECONDS but the Value is returned in
     * MILLISECONDS. For example, if you get a response like this:</p> <p> <code>{
     * "Metric": { "Name": "OLDEST_CONTACT_AGE", "Unit": "SECONDS" }, "Value": 24113.0
     * </code>}</p> <p>The actual OLDEST_CONTACT_AGE is 24 seconds.</p> <p>Name in
     * real-time metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#oldest-real-time">Oldest</a>
     * </p> </dd> <dt>SLOTS_ACTIVE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#active-real-time">Active</a>
     * </p> </dd> <dt>SLOTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> <p>Name in real-time
     * metrics report: <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/real-time-metrics-definitions.html#availability-real-time">Availability</a>
     * </p> </dd> </dl>
     */
    inline GetCurrentMetricDataRequest& AddCurrentMetrics(CurrentMetric&& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline GetCurrentMetricDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline GetCurrentMetricDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the token must use the same request parameters as the request that
     * generated the token.</p>
     */
    inline GetCurrentMetricDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline GetCurrentMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline const Aws::Vector<CurrentMetricSortCriteria>& GetSortCriteria() const{ return m_sortCriteria; }

    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline bool SortCriteriaHasBeenSet() const { return m_sortCriteriaHasBeenSet; }

    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline void SetSortCriteria(const Aws::Vector<CurrentMetricSortCriteria>& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = value; }

    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline void SetSortCriteria(Aws::Vector<CurrentMetricSortCriteria>&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria = std::move(value); }

    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& WithSortCriteria(const Aws::Vector<CurrentMetricSortCriteria>& value) { SetSortCriteria(value); return *this;}

    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& WithSortCriteria(Aws::Vector<CurrentMetricSortCriteria>&& value) { SetSortCriteria(std::move(value)); return *this;}

    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& AddSortCriteria(const CurrentMetricSortCriteria& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(value); return *this; }

    /**
     * <p>The way to sort the resulting response based on metrics. You can enter one
     * sort criteria. By default resources are sorted based on
     * <code>AGENTS_ONLINE</code>, <code>DESCENDING</code>. The metric collection is
     * sorted based on the input metrics.</p> <p>Note the following:</p> <ul> <li>
     * <p>Sorting on <code>SLOTS_ACTIVE</code> and <code>SLOTS_AVAILABLE</code> is not
     * supported.</p> </li> </ul>
     */
    inline GetCurrentMetricDataRequest& AddSortCriteria(CurrentMetricSortCriteria&& value) { m_sortCriteriaHasBeenSet = true; m_sortCriteria.push_back(std::move(value)); return *this; }

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

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<CurrentMetricSortCriteria> m_sortCriteria;
    bool m_sortCriteriaHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
