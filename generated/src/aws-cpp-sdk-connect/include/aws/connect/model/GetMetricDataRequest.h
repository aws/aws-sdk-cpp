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
    AWS_CONNECT_API GetMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricData"; }

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
    inline GetMetricDataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetMetricDataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline GetMetricDataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>The
     * start time cannot be earlier than 24 hours before the time of the request.
     * Historical metrics are available only for 24 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>The
     * start time cannot be earlier than 24 hours before the time of the request.
     * Historical metrics are available only for 24 hours.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>The
     * start time cannot be earlier than 24 hours before the time of the request.
     * Historical metrics are available only for 24 hours.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>The
     * start time cannot be earlier than 24 hours before the time of the request.
     * Historical metrics are available only for 24 hours.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>The
     * start time cannot be earlier than 24 hours before the time of the request.
     * Historical metrics are available only for 24 hours.</p>
     */
    inline GetMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>The
     * start time cannot be earlier than 24 hours before the time of the request.
     * Historical metrics are available only for 24 hours.</p>
     */
    inline GetMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the start time timestamp.</p> <p>The time range between the start
     * and end time must be less than 24 hours.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the start time timestamp.</p> <p>The time range between the start
     * and end time must be less than 24 hours.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the start time timestamp.</p> <p>The time range between the start
     * and end time must be less than 24 hours.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the start time timestamp.</p> <p>The time range between the start
     * and end time must be less than 24 hours.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the start time timestamp.</p> <p>The time range between the start
     * and end time must be less than 24 hours.</p>
     */
    inline GetMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the start time timestamp.</p> <p>The time range between the start
     * and end time must be less than 24 hours.</p>
     */
    inline GetMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The queues, up to 100, or channels, to use to filter the metrics returned.
     * Metric data is retrieved only for the resources associated with the queues or
     * channels included in the filter. You can include both queue IDs and queue ARNs
     * in the same request. VOICE, CHAT, and TASK channels are supported.</p> 
     * <p>To filter by <code>Queues</code>, enter the queue ID/ARN, not the name of the
     * queue.</p> 
     */
    inline const Filters& GetFilters() const{ return m_filters; }

    /**
     * <p>The queues, up to 100, or channels, to use to filter the metrics returned.
     * Metric data is retrieved only for the resources associated with the queues or
     * channels included in the filter. You can include both queue IDs and queue ARNs
     * in the same request. VOICE, CHAT, and TASK channels are supported.</p> 
     * <p>To filter by <code>Queues</code>, enter the queue ID/ARN, not the name of the
     * queue.</p> 
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The queues, up to 100, or channels, to use to filter the metrics returned.
     * Metric data is retrieved only for the resources associated with the queues or
     * channels included in the filter. You can include both queue IDs and queue ARNs
     * in the same request. VOICE, CHAT, and TASK channels are supported.</p> 
     * <p>To filter by <code>Queues</code>, enter the queue ID/ARN, not the name of the
     * queue.</p> 
     */
    inline void SetFilters(const Filters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The queues, up to 100, or channels, to use to filter the metrics returned.
     * Metric data is retrieved only for the resources associated with the queues or
     * channels included in the filter. You can include both queue IDs and queue ARNs
     * in the same request. VOICE, CHAT, and TASK channels are supported.</p> 
     * <p>To filter by <code>Queues</code>, enter the queue ID/ARN, not the name of the
     * queue.</p> 
     */
    inline void SetFilters(Filters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The queues, up to 100, or channels, to use to filter the metrics returned.
     * Metric data is retrieved only for the resources associated with the queues or
     * channels included in the filter. You can include both queue IDs and queue ARNs
     * in the same request. VOICE, CHAT, and TASK channels are supported.</p> 
     * <p>To filter by <code>Queues</code>, enter the queue ID/ARN, not the name of the
     * queue.</p> 
     */
    inline GetMetricDataRequest& WithFilters(const Filters& value) { SetFilters(value); return *this;}

    /**
     * <p>The queues, up to 100, or channels, to use to filter the metrics returned.
     * Metric data is retrieved only for the resources associated with the queues or
     * channels included in the filter. You can include both queue IDs and queue ARNs
     * in the same request. VOICE, CHAT, and TASK channels are supported.</p> 
     * <p>To filter by <code>Queues</code>, enter the queue ID/ARN, not the name of the
     * queue.</p> 
     */
    inline GetMetricDataRequest& WithFilters(Filters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline const Aws::Vector<Grouping>& GetGroupings() const{ return m_groupings; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline void SetGroupings(const Aws::Vector<Grouping>& value) { m_groupingsHasBeenSet = true; m_groupings = value; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline void SetGroupings(Aws::Vector<Grouping>&& value) { m_groupingsHasBeenSet = true; m_groupings = std::move(value); }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline GetMetricDataRequest& WithGroupings(const Aws::Vector<Grouping>& value) { SetGroupings(value); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline GetMetricDataRequest& WithGroupings(Aws::Vector<Grouping>&& value) { SetGroupings(std::move(value)); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline GetMetricDataRequest& AddGroupings(const Grouping& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queue, the metrics returned are grouped by queue. The values returned
     * apply to the metrics for each queue rather than aggregated for all queues.</p>
     * <p>If no grouping is specified, a summary of metrics for all queues is
     * returned.</p>
     */
    inline GetMetricDataRequest& AddGroupings(Grouping&& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(std::move(value)); return *this; }


    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline const Aws::Vector<HistoricalMetric>& GetHistoricalMetrics() const{ return m_historicalMetrics; }

    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline bool HistoricalMetricsHasBeenSet() const { return m_historicalMetricsHasBeenSet; }

    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline void SetHistoricalMetrics(const Aws::Vector<HistoricalMetric>& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics = value; }

    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline void SetHistoricalMetrics(Aws::Vector<HistoricalMetric>&& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics = std::move(value); }

    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline GetMetricDataRequest& WithHistoricalMetrics(const Aws::Vector<HistoricalMetric>& value) { SetHistoricalMetrics(value); return *this;}

    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline GetMetricDataRequest& WithHistoricalMetrics(Aws::Vector<HistoricalMetric>&& value) { SetHistoricalMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline GetMetricDataRequest& AddHistoricalMetrics(const HistoricalMetric& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics.push_back(value); return *this; }

    /**
     * <p>The metrics to retrieve. Specify the name, unit, and statistic for each
     * metric. The following historical metrics are available. For a description of
     * each metric, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/historical-metrics-definitions.html">Historical
     * Metrics Definitions</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     *  <p>This API does not support a contacts incoming metric (there's no
     * CONTACTS_INCOMING metric missing from the documented list). </p>  <dl>
     * <dt>ABANDON_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p> </dd>
     * <dt>AFTER_CONTACT_WORK_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistic: AVG</p>
     * </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p>
     * </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic:
     * SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistic: SUM</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p>
     * <p>Statistic: AVG</p> </dd> <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistic: AVG</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistic: MAX</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>You can
     * include up to 20 SERVICE_LEVEL metrics in a request.</p> <p>Unit: PERCENT</p>
     * <p>Statistic: AVG</p> <p>Threshold: For <code>ThresholdValue</code>, enter any
     * whole number from 1 to 604800 (inclusive), in seconds. For
     * <code>Comparison</code>, you must enter <code>LT</code> (for "Less than"). </p>
     * </dd> </dl>
     */
    inline GetMetricDataRequest& AddHistoricalMetrics(HistoricalMetric&& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline GetMetricDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline GetMetricDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline GetMetricDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline GetMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Filters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Grouping> m_groupings;
    bool m_groupingsHasBeenSet = false;

    Aws::Vector<HistoricalMetric> m_historicalMetrics;
    bool m_historicalMetricsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
