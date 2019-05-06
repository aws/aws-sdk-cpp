/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CONNECT_API GetMetricDataRequest : public ConnectRequest
  {
  public:
    GetMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMetricData"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline GetMetricDataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline GetMetricDataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline GetMetricDataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>
     * <code>StartTime</code> cannot be earlier than 24 hours before the time of the
     * request. Historical metrics are available in Amazon Connect only for 24
     * hours.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>
     * <code>StartTime</code> cannot be earlier than 24 hours before the time of the
     * request. Historical metrics are available in Amazon Connect only for 24
     * hours.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>
     * <code>StartTime</code> cannot be earlier than 24 hours before the time of the
     * request. Historical metrics are available in Amazon Connect only for 24
     * hours.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>
     * <code>StartTime</code> cannot be earlier than 24 hours before the time of the
     * request. Historical metrics are available in Amazon Connect only for 24
     * hours.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>
     * <code>StartTime</code> cannot be earlier than 24 hours before the time of the
     * request. Historical metrics are available in Amazon Connect only for 24
     * hours.</p>
     */
    inline GetMetricDataRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to start the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using a multiple of 5 minutes, such as 10:05, 10:10, 10:15.</p> <p>
     * <code>StartTime</code> cannot be earlier than 24 hours before the time of the
     * request. Historical metrics are available in Amazon Connect only for 24
     * hours.</p>
     */
    inline GetMetricDataRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the <code>StartTime</code> timestamp.</p> <p>The time range
     * between <code>StartTime</code> and <code>EndTime</code> must be less than 24
     * hours.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the <code>StartTime</code> timestamp.</p> <p>The time range
     * between <code>StartTime</code> and <code>EndTime</code> must be less than 24
     * hours.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the <code>StartTime</code> timestamp.</p> <p>The time range
     * between <code>StartTime</code> and <code>EndTime</code> must be less than 24
     * hours.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the <code>StartTime</code> timestamp.</p> <p>The time range
     * between <code>StartTime</code> and <code>EndTime</code> must be less than 24
     * hours.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the <code>StartTime</code> timestamp.</p> <p>The time range
     * between <code>StartTime</code> and <code>EndTime</code> must be less than 24
     * hours.</p>
     */
    inline GetMetricDataRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The timestamp, in UNIX Epoch time format, at which to end the reporting
     * interval for the retrieval of historical metrics data. The time must be
     * specified using an interval of 5 minutes, such as 11:00, 11:05, 11:10, and must
     * be later than the <code>StartTime</code> timestamp.</p> <p>The time range
     * between <code>StartTime</code> and <code>EndTime</code> must be less than 24
     * hours.</p>
     */
    inline GetMetricDataRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or a list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the IDs, ARNs, or Channels included in the filter. You can use both IDs and ARNs
     * together in a request. Only VOICE is supported for Channel.</p> <p>To find the
     * ARN for a queue, open the queue you want to use in the Amazon Connect Queue
     * editor. The ARN for the queue is displayed in the address bar as part of the
     * URL. For example, the queue ARN is the set of characters at the end of the URL,
     * after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline const Filters& GetFilters() const{ return m_filters; }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or a list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the IDs, ARNs, or Channels included in the filter. You can use both IDs and ARNs
     * together in a request. Only VOICE is supported for Channel.</p> <p>To find the
     * ARN for a queue, open the queue you want to use in the Amazon Connect Queue
     * editor. The ARN for the queue is displayed in the address bar as part of the
     * URL. For example, the queue ARN is the set of characters at the end of the URL,
     * after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or a list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the IDs, ARNs, or Channels included in the filter. You can use both IDs and ARNs
     * together in a request. Only VOICE is supported for Channel.</p> <p>To find the
     * ARN for a queue, open the queue you want to use in the Amazon Connect Queue
     * editor. The ARN for the queue is displayed in the address bar as part of the
     * URL. For example, the queue ARN is the set of characters at the end of the URL,
     * after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline void SetFilters(const Filters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or a list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the IDs, ARNs, or Channels included in the filter. You can use both IDs and ARNs
     * together in a request. Only VOICE is supported for Channel.</p> <p>To find the
     * ARN for a queue, open the queue you want to use in the Amazon Connect Queue
     * editor. The ARN for the queue is displayed in the address bar as part of the
     * URL. For example, the queue ARN is the set of characters at the end of the URL,
     * after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline void SetFilters(Filters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or a list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the IDs, ARNs, or Channels included in the filter. You can use both IDs and ARNs
     * together in a request. Only VOICE is supported for Channel.</p> <p>To find the
     * ARN for a queue, open the queue you want to use in the Amazon Connect Queue
     * editor. The ARN for the queue is displayed in the address bar as part of the
     * URL. For example, the queue ARN is the set of characters at the end of the URL,
     * after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline GetMetricDataRequest& WithFilters(const Filters& value) { SetFilters(value); return *this;}

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or a list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the IDs, ARNs, or Channels included in the filter. You can use both IDs and ARNs
     * together in a request. Only VOICE is supported for Channel.</p> <p>To find the
     * ARN for a queue, open the queue you want to use in the Amazon Connect Queue
     * editor. The ARN for the queue is displayed in the address bar as part of the
     * URL. For example, the queue ARN is the set of characters at the end of the URL,
     * after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline GetMetricDataRequest& WithFilters(Filters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline const Aws::Vector<Grouping>& GetGroupings() const{ return m_groupings; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline void SetGroupings(const Aws::Vector<Grouping>& value) { m_groupingsHasBeenSet = true; m_groupings = value; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline void SetGroupings(Aws::Vector<Grouping>&& value) { m_groupingsHasBeenSet = true; m_groupings = std::move(value); }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline GetMetricDataRequest& WithGroupings(const Aws::Vector<Grouping>& value) { SetGroupings(value); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline GetMetricDataRequest& WithGroupings(Aws::Vector<Grouping>&& value) { SetGroupings(std::move(value)); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline GetMetricDataRequest& AddGroupings(const Grouping& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when results are
     * grouped by queueId, the metrics returned are grouped by queue. The values
     * returned apply to the metrics for each queue rather than aggregated for all
     * queues.</p> <p>The current version supports grouping by Queue</p> <p>If no
     * <code>Grouping</code> is included in the request, a summary of
     * <code>HistoricalMetrics</code> for all queues is returned.</p>
     */
    inline GetMetricDataRequest& AddGroupings(Grouping&& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
     */
    inline const Aws::Vector<HistoricalMetric>& GetHistoricalMetrics() const{ return m_historicalMetrics; }

    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
     */
    inline bool HistoricalMetricsHasBeenSet() const { return m_historicalMetricsHasBeenSet; }

    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
     */
    inline void SetHistoricalMetrics(const Aws::Vector<HistoricalMetric>& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics = value; }

    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
     */
    inline void SetHistoricalMetrics(Aws::Vector<HistoricalMetric>&& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics = std::move(value); }

    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
     */
    inline GetMetricDataRequest& WithHistoricalMetrics(const Aws::Vector<HistoricalMetric>& value) { SetHistoricalMetrics(value); return *this;}

    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
     */
    inline GetMetricDataRequest& WithHistoricalMetrics(Aws::Vector<HistoricalMetric>&& value) { SetHistoricalMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
     */
    inline GetMetricDataRequest& AddHistoricalMetrics(const HistoricalMetric& value) { m_historicalMetricsHasBeenSet = true; m_historicalMetrics.push_back(value); return *this; }

    /**
     * <p>A list of <code>HistoricalMetric</code> objects that contain the metrics to
     * retrieve with the request.</p> <p>A <code>HistoricalMetric</code> object
     * contains: <code>HistoricalMetricName</code>, <code>Statistic</code>,
     * <code>Threshold</code>, and <code>Unit</code>.</p> <p>You must list each metric
     * to retrieve data for in the request. For each historical metric you include in
     * the request, you must include a <code>Unit</code> and a <code>Statistic</code>.
     * </p> <p>The following historical metrics are available:</p> <dl>
     * <dt>CONTACTS_QUEUED</dt> <dd> <p>Unit: COUNT</p> <p>Statistic: SUM</p> </dd>
     * <dt>CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_ABANDONED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_CONSULTED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_AGENT_HUNG_UP_FIRST</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CONTACTS_HANDLED_INCOMING</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HANDLED_OUTBOUND</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_HOLD_ABANDONS</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_IN</dt>
     * <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CONTACTS_TRANSFERRED_OUT</dt> <dd> <p>Unit: COUNT</p> <p>Statistics: SUM</p>
     * </dd> <dt>CONTACTS_TRANSFERRED_IN_FROM_QUEUE</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>CONTACTS_TRANSFERRED_OUT_FROM_QUEUE</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd>
     * <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p> <p>Statistics:
     * SUM</p> </dd> <dt>CALLBACK_CONTACTS_HANDLED</dt> <dd> <p>Unit: COUNT</p>
     * <p>Statistics: SUM</p> </dd> <dt>API_CONTACTS_HANDLED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>CONTACTS_MISSED</dt> <dd> <p>Unit:
     * COUNT</p> <p>Statistics: SUM</p> </dd> <dt>OCCUPANCY</dt> <dd> <p>Unit:
     * PERCENT</p> <p>Statistics: AVG</p> </dd> <dt>HANDLE_TIME</dt> <dd> <p>Unit:
     * SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>AFTER_CONTACT_WORK_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>QUEUED_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: MAX</p> </dd> <dt>ABANDON_TIME</dt> <dd>
     * <p>Unit: COUNT</p> <p>Statistics: SUM</p> </dd> <dt>QUEUE_ANSWER_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>HOLD_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd> <dt>INTERACTION_TIME</dt> <dd>
     * <p>Unit: SECONDS</p> <p>Statistics: AVG</p> </dd>
     * <dt>INTERACTION_AND_HOLD_TIME</dt> <dd> <p>Unit: SECONDS</p> <p>Statistics:
     * AVG</p> </dd> <dt>SERVICE_LEVEL</dt> <dd> <p>Unit: PERCENT</p> <p>Statistics:
     * AVG</p> <p>Threshold: Only "Less than" comparisons are supported, with the
     * following service level thresholds: 15, 20, 25, 30, 45, 60, 90, 120, 180, 240,
     * 300, 600</p> </dd> </dl>
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
     * <p>Indicates the maximum number of results to return per page in the response,
     * between 1-100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Indicates the maximum number of results to return per page in the response,
     * between 1-100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Indicates the maximum number of results to return per page in the response,
     * between 1-100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Indicates the maximum number of results to return per page in the response,
     * between 1-100.</p>
     */
    inline GetMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Filters m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Grouping> m_groupings;
    bool m_groupingsHasBeenSet;

    Aws::Vector<HistoricalMetric> m_historicalMetrics;
    bool m_historicalMetricsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
