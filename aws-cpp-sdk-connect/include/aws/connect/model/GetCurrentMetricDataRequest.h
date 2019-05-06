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
#include <aws/connect/model/Filters.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/Grouping.h>
#include <aws/connect/model/CurrentMetric.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API GetCurrentMetricDataRequest : public ConnectRequest
  {
  public:
    GetCurrentMetricDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCurrentMetricData"; }

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
    inline GetCurrentMetricDataRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline GetCurrentMetricDataRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline GetCurrentMetricDataRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the queue IDs, ARNs, or Channels included in the filter. You can include both
     * IDs and ARNs in the same request. To retrieve metrics for all queues, add the
     * queue ID or ARN for each queue in your instance. Only VOICE is supported for
     * Channels.</p> <p>To find the ARN for a queue, open the queue you want to use in
     * the Amazon Connect Queue editor. The ARN for the queue is displayed in the
     * address bar as part of the URL. For example, the queue ARN is the set of
     * characters at the end of the URL, after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline const Filters& GetFilters() const{ return m_filters; }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the queue IDs, ARNs, or Channels included in the filter. You can include both
     * IDs and ARNs in the same request. To retrieve metrics for all queues, add the
     * queue ID or ARN for each queue in your instance. Only VOICE is supported for
     * Channels.</p> <p>To find the ARN for a queue, open the queue you want to use in
     * the Amazon Connect Queue editor. The ARN for the queue is displayed in the
     * address bar as part of the URL. For example, the queue ARN is the set of
     * characters at the end of the URL, after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the queue IDs, ARNs, or Channels included in the filter. You can include both
     * IDs and ARNs in the same request. To retrieve metrics for all queues, add the
     * queue ID or ARN for each queue in your instance. Only VOICE is supported for
     * Channels.</p> <p>To find the ARN for a queue, open the queue you want to use in
     * the Amazon Connect Queue editor. The ARN for the queue is displayed in the
     * address bar as part of the URL. For example, the queue ARN is the set of
     * characters at the end of the URL, after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline void SetFilters(const Filters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the queue IDs, ARNs, or Channels included in the filter. You can include both
     * IDs and ARNs in the same request. To retrieve metrics for all queues, add the
     * queue ID or ARN for each queue in your instance. Only VOICE is supported for
     * Channels.</p> <p>To find the ARN for a queue, open the queue you want to use in
     * the Amazon Connect Queue editor. The ARN for the queue is displayed in the
     * address bar as part of the URL. For example, the queue ARN is the set of
     * characters at the end of the URL, after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline void SetFilters(Filters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the queue IDs, ARNs, or Channels included in the filter. You can include both
     * IDs and ARNs in the same request. To retrieve metrics for all queues, add the
     * queue ID or ARN for each queue in your instance. Only VOICE is supported for
     * Channels.</p> <p>To find the ARN for a queue, open the queue you want to use in
     * the Amazon Connect Queue editor. The ARN for the queue is displayed in the
     * address bar as part of the URL. For example, the queue ARN is the set of
     * characters at the end of the URL, after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline GetCurrentMetricDataRequest& WithFilters(const Filters& value) { SetFilters(value); return *this;}

    /**
     * <p>A <code>Filters</code> object that contains a list of queue IDs or queue
     * ARNs, up to 100, or list of Channels to use to filter the metrics returned in
     * the response. Metric data is retrieved only for the resources associated with
     * the queue IDs, ARNs, or Channels included in the filter. You can include both
     * IDs and ARNs in the same request. To retrieve metrics for all queues, add the
     * queue ID or ARN for each queue in your instance. Only VOICE is supported for
     * Channels.</p> <p>To find the ARN for a queue, open the queue you want to use in
     * the Amazon Connect Queue editor. The ARN for the queue is displayed in the
     * address bar as part of the URL. For example, the queue ARN is the set of
     * characters at the end of the URL, after 'id=' such as
     * <code>arn:aws:connect:us-east-1:270923740243:instance/78fb859d-1b7d-44b1-8aa3-12f0835c5855/queue/1d1a4575-9618-40ab-bbeb-81e45795fe61</code>.
     * The queue ID is also included in the URL, and is the string after 'queue/'.</p>
     */
    inline GetCurrentMetricDataRequest& WithFilters(Filters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline const Aws::Vector<Grouping>& GetGroupings() const{ return m_groupings; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline bool GroupingsHasBeenSet() const { return m_groupingsHasBeenSet; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline void SetGroupings(const Aws::Vector<Grouping>& value) { m_groupingsHasBeenSet = true; m_groupings = value; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline void SetGroupings(Aws::Vector<Grouping>&& value) { m_groupingsHasBeenSet = true; m_groupings = std::move(value); }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline GetCurrentMetricDataRequest& WithGroupings(const Aws::Vector<Grouping>& value) { SetGroupings(value); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline GetCurrentMetricDataRequest& WithGroupings(Aws::Vector<Grouping>&& value) { SetGroupings(std::move(value)); return *this;}

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline GetCurrentMetricDataRequest& AddGroupings(const Grouping& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(value); return *this; }

    /**
     * <p>The grouping applied to the metrics returned. For example, when grouped by
     * QUEUE, the metrics returned apply to each queue rather than aggregated for all
     * queues. If you group by CHANNEL, you should include a Channels filter. The only
     * supported channel is VOICE.</p> <p>If no <code>Grouping</code> is included in
     * the request, a summary of <code>CurrentMetrics</code> is returned.</p>
     */
    inline GetCurrentMetricDataRequest& AddGroupings(Grouping&& value) { m_groupingsHasBeenSet = true; m_groupings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline const Aws::Vector<CurrentMetric>& GetCurrentMetrics() const{ return m_currentMetrics; }

    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline bool CurrentMetricsHasBeenSet() const { return m_currentMetricsHasBeenSet; }

    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline void SetCurrentMetrics(const Aws::Vector<CurrentMetric>& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics = value; }

    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline void SetCurrentMetrics(Aws::Vector<CurrentMetric>&& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics = std::move(value); }

    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline GetCurrentMetricDataRequest& WithCurrentMetrics(const Aws::Vector<CurrentMetric>& value) { SetCurrentMetrics(value); return *this;}

    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline GetCurrentMetricDataRequest& WithCurrentMetrics(Aws::Vector<CurrentMetric>&& value) { SetCurrentMetrics(std::move(value)); return *this;}

    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline GetCurrentMetricDataRequest& AddCurrentMetrics(const CurrentMetric& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics.push_back(value); return *this; }

    /**
     * <p>A list of <code>CurrentMetric</code> objects for the metrics to retrieve.
     * Each <code>CurrentMetric</code> includes a name of a metric to retrieve and the
     * unit to use for it. You must list each metric to retrieve data for in the
     * request.</p> <p>The following metrics are available:</p> <dl>
     * <dt>AGENTS_AVAILABLE</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ONLINE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>AGENTS_ON_CALL</dt> <dd> <p>Unit: COUNT</p>
     * </dd> <dt>AGENTS_STAFFED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_AFTER_CONTACT_WORK</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_NON_PRODUCTIVE</dt> <dd> <p>Unit: COUNT</p> </dd>
     * <dt>AGENTS_ERROR</dt> <dd> <p>Unit: COUNT</p> </dd> <dt>CONTACTS_IN_QUEUE</dt>
     * <dd> <p>Unit: COUNT</p> </dd> <dt>OLDEST_CONTACT_AGE</dt> <dd> <p>Unit:
     * SECONDS</p> </dd> <dt>CONTACTS_SCHEDULED</dt> <dd> <p>Unit: COUNT</p> </dd>
     * </dl>
     */
    inline GetCurrentMetricDataRequest& AddCurrentMetrics(CurrentMetric&& value) { m_currentMetricsHasBeenSet = true; m_currentMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline GetCurrentMetricDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline GetCurrentMetricDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p> <p>The
     * token expires after 5 minutes from the time it is created. Subsequent requests
     * that use the <a href="">NextToken</a> must use the same request parameters as
     * the request that generated the token.</p>
     */
    inline GetCurrentMetricDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> <code>MaxResults</code> indicates the maximum number of results to return
     * per page in the response, between 1 and 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> <code>MaxResults</code> indicates the maximum number of results to return
     * per page in the response, between 1 and 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> <code>MaxResults</code> indicates the maximum number of results to return
     * per page in the response, between 1 and 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> <code>MaxResults</code> indicates the maximum number of results to return
     * per page in the response, between 1 and 100.</p>
     */
    inline GetCurrentMetricDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Filters m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Grouping> m_groupings;
    bool m_groupingsHasBeenSet;

    Aws::Vector<CurrentMetric> m_currentMetrics;
    bool m_currentMetricsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
