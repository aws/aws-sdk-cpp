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
  class GetCostForecastRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetCostForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostForecast"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The period of time that you want the forecast to cover. The start date must
     * be equal to or no later than the current date to avoid a validation error.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The period of time that you want the forecast to cover. The start date must
     * be equal to or no later than the current date to avoid a validation error.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The period of time that you want the forecast to cover. The start date must
     * be equal to or no later than the current date to avoid a validation error.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The period of time that you want the forecast to cover. The start date must
     * be equal to or no later than the current date to avoid a validation error.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The period of time that you want the forecast to cover. The start date must
     * be equal to or no later than the current date to avoid a validation error.</p>
     */
    inline GetCostForecastRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The period of time that you want the forecast to cover. The start date must
     * be equal to or no later than the current date to avoid a validation error.</p>
     */
    inline GetCostForecastRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AMORTIZED_COST</p> </li> <li> <p>BLENDED_COST</p> </li> <li>
     * <p>NET_AMORTIZED_COST</p> </li> <li> <p>NET_UNBLENDED_COST</p> </li> <li>
     * <p>UNBLENDED_COST</p> </li> </ul>
     */
    inline const Metric& GetMetric() const{ return m_metric; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AMORTIZED_COST</p> </li> <li> <p>BLENDED_COST</p> </li> <li>
     * <p>NET_AMORTIZED_COST</p> </li> <li> <p>NET_UNBLENDED_COST</p> </li> <li>
     * <p>UNBLENDED_COST</p> </li> </ul>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AMORTIZED_COST</p> </li> <li> <p>BLENDED_COST</p> </li> <li>
     * <p>NET_AMORTIZED_COST</p> </li> <li> <p>NET_UNBLENDED_COST</p> </li> <li>
     * <p>UNBLENDED_COST</p> </li> </ul>
     */
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AMORTIZED_COST</p> </li> <li> <p>BLENDED_COST</p> </li> <li>
     * <p>NET_AMORTIZED_COST</p> </li> <li> <p>NET_UNBLENDED_COST</p> </li> <li>
     * <p>UNBLENDED_COST</p> </li> </ul>
     */
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AMORTIZED_COST</p> </li> <li> <p>BLENDED_COST</p> </li> <li>
     * <p>NET_AMORTIZED_COST</p> </li> <li> <p>NET_UNBLENDED_COST</p> </li> <li>
     * <p>UNBLENDED_COST</p> </li> </ul>
     */
    inline GetCostForecastRequest& WithMetric(const Metric& value) { SetMetric(value); return *this;}

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="http://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AMORTIZED_COST</p> </li> <li> <p>BLENDED_COST</p> </li> <li>
     * <p>NET_AMORTIZED_COST</p> </li> <li> <p>NET_UNBLENDED_COST</p> </li> <li>
     * <p>UNBLENDED_COST</p> </li> </ul>
     */
    inline GetCostForecastRequest& WithMetric(Metric&& value) { SetMetric(std::move(value)); return *this;}


    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetCostForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline const Granularity& GetGranularity() const{ return m_granularity; }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetCostForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetCostForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(const Granularity& value) { m_granularityHasBeenSet = true; m_granularity = value; }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetCostForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline void SetGranularity(Granularity&& value) { m_granularityHasBeenSet = true; m_granularity = std::move(value); }

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetCostForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetCostForecastRequest& WithGranularity(const Granularity& value) { SetGranularity(value); return *this;}

    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetCostForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline GetCostForecastRequest& WithGranularity(Granularity&& value) { SetGranularity(std::move(value)); return *this;}


    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetCostForecast</code> API supports filtering by the following
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
     * <code>GetCostForecast</code> API supports filtering by the following
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
     * <code>GetCostForecast</code> API supports filtering by the following
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
     * <code>GetCostForecast</code> API supports filtering by the following
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
     * <code>GetCostForecast</code> API supports filtering by the following
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
    inline GetCostForecastRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>The filters that you want to use to filter your forecast. The
     * <code>GetCostForecast</code> API supports filtering by the following
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
    inline GetCostForecastRequest& WithFilter(Expression&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Cost Explorer always returns the mean forecast as a single point. You can
     * request a prediction interval around the mean by specifying a confidence level.
     * The higher the confidence level, the more confident Cost Explorer is about the
     * actual value falling in the prediction interval. Higher confidence levels result
     * in wider prediction intervals.</p>
     */
    inline int GetPredictionIntervalLevel() const{ return m_predictionIntervalLevel; }

    /**
     * <p>Cost Explorer always returns the mean forecast as a single point. You can
     * request a prediction interval around the mean by specifying a confidence level.
     * The higher the confidence level, the more confident Cost Explorer is about the
     * actual value falling in the prediction interval. Higher confidence levels result
     * in wider prediction intervals.</p>
     */
    inline bool PredictionIntervalLevelHasBeenSet() const { return m_predictionIntervalLevelHasBeenSet; }

    /**
     * <p>Cost Explorer always returns the mean forecast as a single point. You can
     * request a prediction interval around the mean by specifying a confidence level.
     * The higher the confidence level, the more confident Cost Explorer is about the
     * actual value falling in the prediction interval. Higher confidence levels result
     * in wider prediction intervals.</p>
     */
    inline void SetPredictionIntervalLevel(int value) { m_predictionIntervalLevelHasBeenSet = true; m_predictionIntervalLevel = value; }

    /**
     * <p>Cost Explorer always returns the mean forecast as a single point. You can
     * request a prediction interval around the mean by specifying a confidence level.
     * The higher the confidence level, the more confident Cost Explorer is about the
     * actual value falling in the prediction interval. Higher confidence levels result
     * in wider prediction intervals.</p>
     */
    inline GetCostForecastRequest& WithPredictionIntervalLevel(int value) { SetPredictionIntervalLevel(value); return *this;}

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
