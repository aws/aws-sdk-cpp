/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/MetricNamespace.h>
#include <aws/sesv2/model/Metric.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/MetricDimensionName.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a single metric data query to include in a batch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/BatchGetMetricDataQuery">AWS
   * API Reference</a></p>
   */
  class BatchGetMetricDataQuery
  {
  public:
    AWS_SESV2_API BatchGetMetricDataQuery();
    AWS_SESV2_API BatchGetMetricDataQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API BatchGetMetricDataQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The query identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The query identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The query identifier.</p>
     */
    inline BatchGetMetricDataQuery& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The query identifier.</p>
     */
    inline BatchGetMetricDataQuery& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The query identifier.</p>
     */
    inline BatchGetMetricDataQuery& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The query namespace - e.g. <code>VDM</code> </p>
     */
    inline const MetricNamespace& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The query namespace - e.g. <code>VDM</code> </p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The query namespace - e.g. <code>VDM</code> </p>
     */
    inline void SetNamespace(const MetricNamespace& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The query namespace - e.g. <code>VDM</code> </p>
     */
    inline void SetNamespace(MetricNamespace&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The query namespace - e.g. <code>VDM</code> </p>
     */
    inline BatchGetMetricDataQuery& WithNamespace(const MetricNamespace& value) { SetNamespace(value); return *this;}

    /**
     * <p>The query namespace - e.g. <code>VDM</code> </p>
     */
    inline BatchGetMetricDataQuery& WithNamespace(MetricNamespace&& value) { SetNamespace(std::move(value)); return *this;}


    /**
     * <p>The queried metric. This can be one of the following:</p> <ul> <li> <p>
     * <code>SEND</code> – Emails sent eligible for tracking in the VDM dashboard. This
     * excludes emails sent to the mailbox simulator and emails addressed to more than
     * one recipient.</p> </li> <li> <p> <code>COMPLAINT</code> – Complaints received
     * for your account. This excludes complaints from the mailbox simulator, those
     * originating from your account-level suppression list (if enabled), and those for
     * emails addressed to more than one recipient</p> </li> <li> <p>
     * <code>PERMANENT_BOUNCE</code> – Permanent bounces - i.e. feedback received for
     * emails sent to non-existent mailboxes. Excludes bounces from the mailbox
     * simulator, those originating from your account-level suppression list (if
     * enabled), and those for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>TRANSIENT_BOUNCE</code> – Transient bounces - i.e. feedback
     * received for delivery failures excluding issues with non-existent mailboxes.
     * Excludes bounces from the mailbox simulator, and those for emails addressed to
     * more than one recipient.</p> </li> <li> <p> <code>OPEN</code> – Unique open
     * events for emails including open trackers. Excludes opens for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> – Unique click
     * events for emails including wrapped links. Excludes clicks for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>DELIVERY</code> –
     * Successful deliveries for email sending attempts. Excludes deliveries to the
     * mailbox simulator and for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>DELIVERY_OPEN</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails without open trackers.</p> </li> <li> <p>
     * <code>DELIVERY_CLICK</code> – Successful deliveries for email sending attempts.
     * Excludes deliveries to the mailbox simulator, for emails addressed to more than
     * one recipient, and emails without click trackers.</p> </li> <li> <p>
     * <code>DELIVERY_COMPLAINT</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails addressed to recipients hosted by ISPs with
     * which Amazon SES does not have a feedback loop agreement.</p> </li> </ul>
     */
    inline const Metric& GetMetric() const{ return m_metric; }

    /**
     * <p>The queried metric. This can be one of the following:</p> <ul> <li> <p>
     * <code>SEND</code> – Emails sent eligible for tracking in the VDM dashboard. This
     * excludes emails sent to the mailbox simulator and emails addressed to more than
     * one recipient.</p> </li> <li> <p> <code>COMPLAINT</code> – Complaints received
     * for your account. This excludes complaints from the mailbox simulator, those
     * originating from your account-level suppression list (if enabled), and those for
     * emails addressed to more than one recipient</p> </li> <li> <p>
     * <code>PERMANENT_BOUNCE</code> – Permanent bounces - i.e. feedback received for
     * emails sent to non-existent mailboxes. Excludes bounces from the mailbox
     * simulator, those originating from your account-level suppression list (if
     * enabled), and those for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>TRANSIENT_BOUNCE</code> – Transient bounces - i.e. feedback
     * received for delivery failures excluding issues with non-existent mailboxes.
     * Excludes bounces from the mailbox simulator, and those for emails addressed to
     * more than one recipient.</p> </li> <li> <p> <code>OPEN</code> – Unique open
     * events for emails including open trackers. Excludes opens for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> – Unique click
     * events for emails including wrapped links. Excludes clicks for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>DELIVERY</code> –
     * Successful deliveries for email sending attempts. Excludes deliveries to the
     * mailbox simulator and for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>DELIVERY_OPEN</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails without open trackers.</p> </li> <li> <p>
     * <code>DELIVERY_CLICK</code> – Successful deliveries for email sending attempts.
     * Excludes deliveries to the mailbox simulator, for emails addressed to more than
     * one recipient, and emails without click trackers.</p> </li> <li> <p>
     * <code>DELIVERY_COMPLAINT</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails addressed to recipients hosted by ISPs with
     * which Amazon SES does not have a feedback loop agreement.</p> </li> </ul>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The queried metric. This can be one of the following:</p> <ul> <li> <p>
     * <code>SEND</code> – Emails sent eligible for tracking in the VDM dashboard. This
     * excludes emails sent to the mailbox simulator and emails addressed to more than
     * one recipient.</p> </li> <li> <p> <code>COMPLAINT</code> – Complaints received
     * for your account. This excludes complaints from the mailbox simulator, those
     * originating from your account-level suppression list (if enabled), and those for
     * emails addressed to more than one recipient</p> </li> <li> <p>
     * <code>PERMANENT_BOUNCE</code> – Permanent bounces - i.e. feedback received for
     * emails sent to non-existent mailboxes. Excludes bounces from the mailbox
     * simulator, those originating from your account-level suppression list (if
     * enabled), and those for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>TRANSIENT_BOUNCE</code> – Transient bounces - i.e. feedback
     * received for delivery failures excluding issues with non-existent mailboxes.
     * Excludes bounces from the mailbox simulator, and those for emails addressed to
     * more than one recipient.</p> </li> <li> <p> <code>OPEN</code> – Unique open
     * events for emails including open trackers. Excludes opens for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> – Unique click
     * events for emails including wrapped links. Excludes clicks for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>DELIVERY</code> –
     * Successful deliveries for email sending attempts. Excludes deliveries to the
     * mailbox simulator and for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>DELIVERY_OPEN</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails without open trackers.</p> </li> <li> <p>
     * <code>DELIVERY_CLICK</code> – Successful deliveries for email sending attempts.
     * Excludes deliveries to the mailbox simulator, for emails addressed to more than
     * one recipient, and emails without click trackers.</p> </li> <li> <p>
     * <code>DELIVERY_COMPLAINT</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails addressed to recipients hosted by ISPs with
     * which Amazon SES does not have a feedback loop agreement.</p> </li> </ul>
     */
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The queried metric. This can be one of the following:</p> <ul> <li> <p>
     * <code>SEND</code> – Emails sent eligible for tracking in the VDM dashboard. This
     * excludes emails sent to the mailbox simulator and emails addressed to more than
     * one recipient.</p> </li> <li> <p> <code>COMPLAINT</code> – Complaints received
     * for your account. This excludes complaints from the mailbox simulator, those
     * originating from your account-level suppression list (if enabled), and those for
     * emails addressed to more than one recipient</p> </li> <li> <p>
     * <code>PERMANENT_BOUNCE</code> – Permanent bounces - i.e. feedback received for
     * emails sent to non-existent mailboxes. Excludes bounces from the mailbox
     * simulator, those originating from your account-level suppression list (if
     * enabled), and those for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>TRANSIENT_BOUNCE</code> – Transient bounces - i.e. feedback
     * received for delivery failures excluding issues with non-existent mailboxes.
     * Excludes bounces from the mailbox simulator, and those for emails addressed to
     * more than one recipient.</p> </li> <li> <p> <code>OPEN</code> – Unique open
     * events for emails including open trackers. Excludes opens for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> – Unique click
     * events for emails including wrapped links. Excludes clicks for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>DELIVERY</code> –
     * Successful deliveries for email sending attempts. Excludes deliveries to the
     * mailbox simulator and for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>DELIVERY_OPEN</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails without open trackers.</p> </li> <li> <p>
     * <code>DELIVERY_CLICK</code> – Successful deliveries for email sending attempts.
     * Excludes deliveries to the mailbox simulator, for emails addressed to more than
     * one recipient, and emails without click trackers.</p> </li> <li> <p>
     * <code>DELIVERY_COMPLAINT</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails addressed to recipients hosted by ISPs with
     * which Amazon SES does not have a feedback loop agreement.</p> </li> </ul>
     */
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The queried metric. This can be one of the following:</p> <ul> <li> <p>
     * <code>SEND</code> – Emails sent eligible for tracking in the VDM dashboard. This
     * excludes emails sent to the mailbox simulator and emails addressed to more than
     * one recipient.</p> </li> <li> <p> <code>COMPLAINT</code> – Complaints received
     * for your account. This excludes complaints from the mailbox simulator, those
     * originating from your account-level suppression list (if enabled), and those for
     * emails addressed to more than one recipient</p> </li> <li> <p>
     * <code>PERMANENT_BOUNCE</code> – Permanent bounces - i.e. feedback received for
     * emails sent to non-existent mailboxes. Excludes bounces from the mailbox
     * simulator, those originating from your account-level suppression list (if
     * enabled), and those for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>TRANSIENT_BOUNCE</code> – Transient bounces - i.e. feedback
     * received for delivery failures excluding issues with non-existent mailboxes.
     * Excludes bounces from the mailbox simulator, and those for emails addressed to
     * more than one recipient.</p> </li> <li> <p> <code>OPEN</code> – Unique open
     * events for emails including open trackers. Excludes opens for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> – Unique click
     * events for emails including wrapped links. Excludes clicks for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>DELIVERY</code> –
     * Successful deliveries for email sending attempts. Excludes deliveries to the
     * mailbox simulator and for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>DELIVERY_OPEN</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails without open trackers.</p> </li> <li> <p>
     * <code>DELIVERY_CLICK</code> – Successful deliveries for email sending attempts.
     * Excludes deliveries to the mailbox simulator, for emails addressed to more than
     * one recipient, and emails without click trackers.</p> </li> <li> <p>
     * <code>DELIVERY_COMPLAINT</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails addressed to recipients hosted by ISPs with
     * which Amazon SES does not have a feedback loop agreement.</p> </li> </ul>
     */
    inline BatchGetMetricDataQuery& WithMetric(const Metric& value) { SetMetric(value); return *this;}

    /**
     * <p>The queried metric. This can be one of the following:</p> <ul> <li> <p>
     * <code>SEND</code> – Emails sent eligible for tracking in the VDM dashboard. This
     * excludes emails sent to the mailbox simulator and emails addressed to more than
     * one recipient.</p> </li> <li> <p> <code>COMPLAINT</code> – Complaints received
     * for your account. This excludes complaints from the mailbox simulator, those
     * originating from your account-level suppression list (if enabled), and those for
     * emails addressed to more than one recipient</p> </li> <li> <p>
     * <code>PERMANENT_BOUNCE</code> – Permanent bounces - i.e. feedback received for
     * emails sent to non-existent mailboxes. Excludes bounces from the mailbox
     * simulator, those originating from your account-level suppression list (if
     * enabled), and those for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>TRANSIENT_BOUNCE</code> – Transient bounces - i.e. feedback
     * received for delivery failures excluding issues with non-existent mailboxes.
     * Excludes bounces from the mailbox simulator, and those for emails addressed to
     * more than one recipient.</p> </li> <li> <p> <code>OPEN</code> – Unique open
     * events for emails including open trackers. Excludes opens for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> – Unique click
     * events for emails including wrapped links. Excludes clicks for emails addressed
     * to more than one recipient.</p> </li> <li> <p> <code>DELIVERY</code> –
     * Successful deliveries for email sending attempts. Excludes deliveries to the
     * mailbox simulator and for emails addressed to more than one recipient.</p> </li>
     * <li> <p> <code>DELIVERY_OPEN</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails without open trackers.</p> </li> <li> <p>
     * <code>DELIVERY_CLICK</code> – Successful deliveries for email sending attempts.
     * Excludes deliveries to the mailbox simulator, for emails addressed to more than
     * one recipient, and emails without click trackers.</p> </li> <li> <p>
     * <code>DELIVERY_COMPLAINT</code> – Successful deliveries for email sending
     * attempts. Excludes deliveries to the mailbox simulator, for emails addressed to
     * more than one recipient, and emails addressed to recipients hosted by ISPs with
     * which Amazon SES does not have a feedback loop agreement.</p> </li> </ul>
     */
    inline BatchGetMetricDataQuery& WithMetric(Metric&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline const Aws::Map<MetricDimensionName, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline void SetDimensions(const Aws::Map<MetricDimensionName, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline void SetDimensions(Aws::Map<MetricDimensionName, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& WithDimensions(const Aws::Map<MetricDimensionName, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& WithDimensions(Aws::Map<MetricDimensionName, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& AddDimensions(const MetricDimensionName& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& AddDimensions(MetricDimensionName&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& AddDimensions(const MetricDimensionName& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& AddDimensions(MetricDimensionName&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& AddDimensions(MetricDimensionName&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that contains mapping between <code>MetricDimensionName</code> and
     * <code>MetricDimensionValue</code> to filter metrics by.</p>
     */
    inline BatchGetMetricDataQuery& AddDimensions(const MetricDimensionName& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }


    /**
     * <p>Represents the start date for the query interval.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>Represents the start date for the query interval.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>Represents the start date for the query interval.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>Represents the start date for the query interval.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>Represents the start date for the query interval.</p>
     */
    inline BatchGetMetricDataQuery& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>Represents the start date for the query interval.</p>
     */
    inline BatchGetMetricDataQuery& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>Represents the end date for the query interval.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>Represents the end date for the query interval.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>Represents the end date for the query interval.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>Represents the end date for the query interval.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>Represents the end date for the query interval.</p>
     */
    inline BatchGetMetricDataQuery& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>Represents the end date for the query interval.</p>
     */
    inline BatchGetMetricDataQuery& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    MetricNamespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    Metric m_metric;
    bool m_metricHasBeenSet = false;

    Aws::Map<MetricDimensionName, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
