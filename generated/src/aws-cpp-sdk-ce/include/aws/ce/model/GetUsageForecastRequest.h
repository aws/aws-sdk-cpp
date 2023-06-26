/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/ce/model/Metric.h>
#include <aws/ce/model/Granularity.h>
#include <aws/ce/model/Expression.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class GetUsageForecastRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetUsageForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsageForecast"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The start and end dates of the period that you want to retrieve usage
     * forecast for. The start date is included in the period, but the end date isn't
     * included in the period. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>. The
     * start date must be equal to or later than the current date to avoid a validation
     * error.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The start and end dates of the period that you want to retrieve usage
     * forecast for. The start date is included in the period, but the end date isn't
     * included in the period. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>. The
     * start date must be equal to or later than the current date to avoid a validation
     * error.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The start and end dates of the period that you want to retrieve usage
     * forecast for. The start date is included in the period, but the end date isn't
     * included in the period. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>. The
     * start date must be equal to or later than the current date to avoid a validation
     * error.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The start and end dates of the period that you want to retrieve usage
     * forecast for. The start date is included in the period, but the end date isn't
     * included in the period. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>. The
     * start date must be equal to or later than the current date to avoid a validation
     * error.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The start and end dates of the period that you want to retrieve usage
     * forecast for. The start date is included in the period, but the end date isn't
     * included in the period. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>. The
     * start date must be equal to or later than the current date to avoid a validation
     * error.</p>
     */
    inline GetUsageForecastRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The start and end dates of the period that you want to retrieve usage
     * forecast for. The start date is included in the period, but the end date isn't
     * included in the period. For example, if <code>start</code> is
     * <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>. The
     * start date must be equal to or later than the current date to avoid a validation
     * error.</p>
     */
    inline GetUsageForecastRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Which metric Cost Explorer uses to create your forecast.</p> <p>Valid values
     * for a <code>GetUsageForecast</code> call are the following:</p> <ul> <li>
     * <p>USAGE_QUANTITY</p> </li> <li> <p>NORMALIZED_USAGE_AMOUNT</p> </li> </ul>
     */
    inline const Metric& GetMetric() const{ return m_metric; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast.</p> <p>Valid values
     * for a <code>GetUsageForecast</code> call are the following:</p> <ul> <li>
     * <p>USAGE_QUANTITY</p> </li> <li> <p>NORMALIZED_USAGE_AMOUNT</p> </li> </ul>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast.</p> <p>Valid values
     * for a <code>GetUsageForecast</code> call are the following:</p> <ul> <li>
     * <p>USAGE_QUANTITY</p> </li> <li> <p>NORMALIZED_USAGE_AMOUNT</p> </li> </ul>
     */
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast.</p> <p>Valid values
     * for a <code>GetUsageForecast</code> call are the following:</p> <ul> <li>
     * <p>USAGE_QUANTITY</p> </li> <li> <p>NORMALIZED_USAGE_AMOUNT</p> </li> </ul>
     */
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast.</p> <p>Valid values
     * for a <code>GetUsageForecast</code> call are the following:</p> <ul> <li>
     * <p>USAGE_QUANTITY</p> </li> <li> <p>NORMALIZED_USAGE_AMOUNT</p> </li> </ul>
     */
    inline GetUsageForecastRequest& WithMetric(const Metric& value) { SetMetric(value); return *this;}

    /**
     * <p>Which metric Cost Explorer uses to create your forecast.</p> <p>Valid values
     * for a <code>GetUsageForecast</code> call are the following:</p> <ul> <li>
     * <p>USAGE_QUANTITY</p> </li> <li> <p>NORMALIZED_USAGE_AMOUNT</p> </li> </ul>
     */
    inline GetUsageForecastRequest& WithMetric(Metric&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetUsageForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetUsageForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetUsageForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetUsageForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetUsageForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetUsageForecastRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetUsageForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetUsageForecastRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetUsageForecast</code> API supports filtering by the following
     * dimensions:</p> <ul> <li> <p> <code>AZ</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE</code> </p> </li> <li> <p> <code>LINKED_ACCOUNT</code> </p>
     * </li> <li> <p> <code>LINKED_ACCOUNT_NAME</code> </p> </li> <li> <p>
     * <code>OPERATION</code> </p> </li> <li> <p> <code>PURCHASE_TYPE</code> </p> </li>
     * <li> <p> <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li>
     * <li> <p> <code>USAGE_TYPE</code> </p> </li> <li> <p>
     * <code>USAGE_TYPE_GROUP</code> </p> </li> <li> <p> <code>RECORD_TYPE</code> </p>
     * </li> <li> <p> <code>OPERATING_SYSTEM</code> </p> </li> <li> <p>
     * <code>TENANCY</code> </p> </li> <li> <p> <code>SCOPE</code> </p> </li> <li> <p>
     * <code>PLATFORM</code> </p> </li> <li> <p> <code>SUBSCRIPTION_ID</code> </p>
     * </li> <li> <p> <code>LEGAL_ENTITY_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_OPTION</code> </p> </li> <li> <p> <code>DATABASE_ENGINE</code>
     * </p> </li> <li> <p> <code>INSTANCE_TYPE_FAMILY</code> </p> </li> <li> <p>
     * <code>BILLING_ENTITY</code> </p> </li> <li> <p> <code>RESERVATION_ID</code> </p>
     * </li> <li> <p> <code>SAVINGS_PLAN_ARN</code> </p> </li> </ul>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetUsageForecast</code> API supports filtering by the following
     * dimensions:</p> <ul> <li> <p> <code>AZ</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE</code> </p> </li> <li> <p> <code>LINKED_ACCOUNT</code> </p>
     * </li> <li> <p> <code>LINKED_ACCOUNT_NAME</code> </p> </li> <li> <p>
     * <code>OPERATION</code> </p> </li> <li> <p> <code>PURCHASE_TYPE</code> </p> </li>
     * <li> <p> <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li>
     * <li> <p> <code>USAGE_TYPE</code> </p> </li> <li> <p>
     * <code>USAGE_TYPE_GROUP</code> </p> </li> <li> <p> <code>RECORD_TYPE</code> </p>
     * </li> <li> <p> <code>OPERATING_SYSTEM</code> </p> </li> <li> <p>
     * <code>TENANCY</code> </p> </li> <li> <p> <code>SCOPE</code> </p> </li> <li> <p>
     * <code>PLATFORM</code> </p> </li> <li> <p> <code>SUBSCRIPTION_ID</code> </p>
     * </li> <li> <p> <code>LEGAL_ENTITY_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_OPTION</code> </p> </li> <li> <p> <code>DATABASE_ENGINE</code>
     * </p> </li> <li> <p> <code>INSTANCE_TYPE_FAMILY</code> </p> </li> <li> <p>
     * <code>BILLING_ENTITY</code> </p> </li> <li> <p> <code>RESERVATION_ID</code> </p>
     * </li> <li> <p> <code>SAVINGS_PLAN_ARN</code> </p> </li> </ul>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetUsageForecast</code> API supports filtering by the following
     * dimensions:</p> <ul> <li> <p> <code>AZ</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE</code> </p> </li> <li> <p> <code>LINKED_ACCOUNT</code> </p>
     * </li> <li> <p> <code>LINKED_ACCOUNT_NAME</code> </p> </li> <li> <p>
     * <code>OPERATION</code> </p> </li> <li> <p> <code>PURCHASE_TYPE</code> </p> </li>
     * <li> <p> <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li>
     * <li> <p> <code>USAGE_TYPE</code> </p> </li> <li> <p>
     * <code>USAGE_TYPE_GROUP</code> </p> </li> <li> <p> <code>RECORD_TYPE</code> </p>
     * </li> <li> <p> <code>OPERATING_SYSTEM</code> </p> </li> <li> <p>
     * <code>TENANCY</code> </p> </li> <li> <p> <code>SCOPE</code> </p> </li> <li> <p>
     * <code>PLATFORM</code> </p> </li> <li> <p> <code>SUBSCRIPTION_ID</code> </p>
     * </li> <li> <p> <code>LEGAL_ENTITY_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_OPTION</code> </p> </li> <li> <p> <code>DATABASE_ENGINE</code>
     * </p> </li> <li> <p> <code>INSTANCE_TYPE_FAMILY</code> </p> </li> <li> <p>
     * <code>BILLING_ENTITY</code> </p> </li> <li> <p> <code>RESERVATION_ID</code> </p>
     * </li> <li> <p> <code>SAVINGS_PLAN_ARN</code> </p> </li> </ul>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetUsageForecast</code> API supports filtering by the following
     * dimensions:</p> <ul> <li> <p> <code>AZ</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE</code> </p> </li> <li> <p> <code>LINKED_ACCOUNT</code> </p>
     * </li> <li> <p> <code>LINKED_ACCOUNT_NAME</code> </p> </li> <li> <p>
     * <code>OPERATION</code> </p> </li> <li> <p> <code>PURCHASE_TYPE</code> </p> </li>
     * <li> <p> <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li>
     * <li> <p> <code>USAGE_TYPE</code> </p> </li> <li> <p>
     * <code>USAGE_TYPE_GROUP</code> </p> </li> <li> <p> <code>RECORD_TYPE</code> </p>
     * </li> <li> <p> <code>OPERATING_SYSTEM</code> </p> </li> <li> <p>
     * <code>TENANCY</code> </p> </li> <li> <p> <code>SCOPE</code> </p> </li> <li> <p>
     * <code>PLATFORM</code> </p> </li> <li> <p> <code>SUBSCRIPTION_ID</code> </p>
     * </li> <li> <p> <code>LEGAL_ENTITY_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_OPTION</code> </p> </li> <li> <p> <code>DATABASE_ENGINE</code>
     * </p> </li> <li> <p> <code>INSTANCE_TYPE_FAMILY</code> </p> </li> <li> <p>
     * <code>BILLING_ENTITY</code> </p> </li> <li> <p> <code>RESERVATION_ID</code> </p>
     * </li> <li> <p> <code>SAVINGS_PLAN_ARN</code> </p> </li> </ul>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetUsageForecast</code> API supports filtering by the following
     * dimensions:</p> <ul> <li> <p> <code>AZ</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE</code> </p> </li> <li> <p> <code>LINKED_ACCOUNT</code> </p>
     * </li> <li> <p> <code>LINKED_ACCOUNT_NAME</code> </p> </li> <li> <p>
     * <code>OPERATION</code> </p> </li> <li> <p> <code>PURCHASE_TYPE</code> </p> </li>
     * <li> <p> <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li>
     * <li> <p> <code>USAGE_TYPE</code> </p> </li> <li> <p>
     * <code>USAGE_TYPE_GROUP</code> </p> </li> <li> <p> <code>RECORD_TYPE</code> </p>
     * </li> <li> <p> <code>OPERATING_SYSTEM</code> </p> </li> <li> <p>
     * <code>TENANCY</code> </p> </li> <li> <p> <code>SCOPE</code> </p> </li> <li> <p>
     * <code>PLATFORM</code> </p> </li> <li> <p> <code>SUBSCRIPTION_ID</code> </p>
     * </li> <li> <p> <code>LEGAL_ENTITY_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_OPTION</code> </p> </li> <li> <p> <code>DATABASE_ENGINE</code>
     * </p> </li> <li> <p> <code>INSTANCE_TYPE_FAMILY</code> </p> </li> <li> <p>
     * <code>BILLING_ENTITY</code> </p> </li> <li> <p> <code>RESERVATION_ID</code> </p>
     * </li> <li> <p> <code>SAVINGS_PLAN_ARN</code> </p> </li> </ul>
     */
    inline GetUsageForecastRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetUsageForecast</code> API supports filtering by the following
     * dimensions:</p> <ul> <li> <p> <code>AZ</code> </p> </li> <li> <p>
     * <code>INSTANCE_TYPE</code> </p> </li> <li> <p> <code>LINKED_ACCOUNT</code> </p>
     * </li> <li> <p> <code>LINKED_ACCOUNT_NAME</code> </p> </li> <li> <p>
     * <code>OPERATION</code> </p> </li> <li> <p> <code>PURCHASE_TYPE</code> </p> </li>
     * <li> <p> <code>REGION</code> </p> </li> <li> <p> <code>SERVICE</code> </p> </li>
     * <li> <p> <code>USAGE_TYPE</code> </p> </li> <li> <p>
     * <code>USAGE_TYPE_GROUP</code> </p> </li> <li> <p> <code>RECORD_TYPE</code> </p>
     * </li> <li> <p> <code>OPERATING_SYSTEM</code> </p> </li> <li> <p>
     * <code>TENANCY</code> </p> </li> <li> <p> <code>SCOPE</code> </p> </li> <li> <p>
     * <code>PLATFORM</code> </p> </li> <li> <p> <code>SUBSCRIPTION_ID</code> </p>
     * </li> <li> <p> <code>LEGAL_ENTITY_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_OPTION</code> </p> </li> <li> <p> <code>DATABASE_ENGINE</code>
     * </p> </li> <li> <p> <code>INSTANCE_TYPE_FAMILY</code> </p> </li> <li> <p>
     * <code>BILLING_ENTITY</code> </p> </li> <li> <p> <code>RESERVATION_ID</code> </p>
     * </li> <li> <p> <code>SAVINGS_PLAN_ARN</code> </p> </li> </ul>
     */
    inline GetUsageForecastRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Amazon Web Services Cost Explorer always returns the mean forecast as a
     * single point. You can request a prediction interval around the mean by
     * specifying a confidence level. The higher the confidence level, the more
     * confident Cost Explorer is about the actual value falling in the prediction
     * interval. Higher confidence levels result in wider prediction intervals.</p>
     */
    inline int GetPredictionIntervalLevel() const{ return m_predictionIntervalLevel; }

    /**
     * <p>Amazon Web Services Cost Explorer always returns the mean forecast as a
     * single point. You can request a prediction interval around the mean by
     * specifying a confidence level. The higher the confidence level, the more
     * confident Cost Explorer is about the actual value falling in the prediction
     * interval. Higher confidence levels result in wider prediction intervals.</p>
     */
    inline bool PredictionIntervalLevelHasBeenSet() const { return m_predictionIntervalLevelHasBeenSet; }

    /**
     * <p>Amazon Web Services Cost Explorer always returns the mean forecast as a
     * single point. You can request a prediction interval around the mean by
     * specifying a confidence level. The higher the confidence level, the more
     * confident Cost Explorer is about the actual value falling in the prediction
     * interval. Higher confidence levels result in wider prediction intervals.</p>
     */
    inline void SetPredictionIntervalLevel(int value) { m_predictionIntervalLevelHasBeenSet = true; m_predictionIntervalLevel = value; }

    /**
     * <p>Amazon Web Services Cost Explorer always returns the mean forecast as a
     * single point. You can request a prediction interval around the mean by
     * specifying a confidence level. The higher the confidence level, the more
     * confident Cost Explorer is about the actual value falling in the prediction
     * interval. Higher confidence levels result in wider prediction intervals.</p>
     */
    inline GetUsageForecastRequest& WithPredictionIntervalLevel(int value) { SetPredictionIntervalLevel(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Metric m_metric;
    bool m_metricHasBeenSet = false;

    Granularity m_granularity;
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    int m_predictionIntervalLevel;
    bool m_predictionIntervalLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
