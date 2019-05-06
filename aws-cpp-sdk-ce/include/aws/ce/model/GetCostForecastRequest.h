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
  class AWS_COSTEXPLORER_API GetCostForecastRequest : public CostExplorerRequest
  {
  public:
    GetCostForecastRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCostForecast"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The period of time that you want the forecast to cover.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The period of time that you want the forecast to cover.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The period of time that you want the forecast to cover.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The period of time that you want the forecast to cover.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The period of time that you want the forecast to cover.</p>
     */
    inline GetCostForecastRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The period of time that you want the forecast to cover.</p>
     */
    inline GetCostForecastRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AmortizedCost</p> </li> <li> <p>BlendedCost</p> </li> <li>
     * <p>NetAmortizedCost</p> </li> <li> <p>NetUnblendedCost</p> </li> <li>
     * <p>UnblendedCost</p> </li> </ul>
     */
    inline const Metric& GetMetric() const{ return m_metric; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AmortizedCost</p> </li> <li> <p>BlendedCost</p> </li> <li>
     * <p>NetAmortizedCost</p> </li> <li> <p>NetUnblendedCost</p> </li> <li>
     * <p>UnblendedCost</p> </li> </ul>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AmortizedCost</p> </li> <li> <p>BlendedCost</p> </li> <li>
     * <p>NetAmortizedCost</p> </li> <li> <p>NetUnblendedCost</p> </li> <li>
     * <p>UnblendedCost</p> </li> </ul>
     */
    inline void SetMetric(const Metric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AmortizedCost</p> </li> <li> <p>BlendedCost</p> </li> <li>
     * <p>NetAmortizedCost</p> </li> <li> <p>NetUnblendedCost</p> </li> <li>
     * <p>UnblendedCost</p> </li> </ul>
     */
    inline void SetMetric(Metric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AmortizedCost</p> </li> <li> <p>BlendedCost</p> </li> <li>
     * <p>NetAmortizedCost</p> </li> <li> <p>NetUnblendedCost</p> </li> <li>
     * <p>UnblendedCost</p> </li> </ul>
     */
    inline GetCostForecastRequest& WithMetric(const Metric& value) { SetMetric(value); return *this;}

    /**
     * <p>Which metric Cost Explorer uses to create your forecast. For more information
     * about blended and unblended rates, see <a
     * href="https://aws.amazon.com/premiumsupport/knowledge-center/blended-rates-intro/">Why
     * does the "blended" annotation appear on some line items in my bill?</a>. </p>
     * <p>Valid values for a <code>GetCostForecast</code> call are the following:</p>
     * <ul> <li> <p>AmortizedCost</p> </li> <li> <p>BlendedCost</p> </li> <li>
     * <p>NetAmortizedCost</p> </li> <li> <p>NetUnblendedCost</p> </li> <li>
     * <p>UnblendedCost</p> </li> </ul>
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
     * <p>The filters that you want to use to filter your forecast. Cost Explorer API
     * supports all of the Cost Explorer filters.</p>
     */
    inline const Expression& GetFilter() const{ return m_filter; }

    /**
     * <p>The filters that you want to use to filter your forecast. Cost Explorer API
     * supports all of the Cost Explorer filters.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filters that you want to use to filter your forecast. Cost Explorer API
     * supports all of the Cost Explorer filters.</p>
     */
    inline void SetFilter(const Expression& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filters that you want to use to filter your forecast. Cost Explorer API
     * supports all of the Cost Explorer filters.</p>
     */
    inline void SetFilter(Expression&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filters that you want to use to filter your forecast. Cost Explorer API
     * supports all of the Cost Explorer filters.</p>
     */
    inline GetCostForecastRequest& WithFilter(const Expression& value) { SetFilter(value); return *this;}

    /**
     * <p>The filters that you want to use to filter your forecast. Cost Explorer API
     * supports all of the Cost Explorer filters.</p>
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
    bool m_timePeriodHasBeenSet;

    Metric m_metric;
    bool m_metricHasBeenSet;

    Granularity m_granularity;
    bool m_granularityHasBeenSet;

    Expression m_filter;
    bool m_filterHasBeenSet;

    int m_predictionIntervalLevel;
    bool m_predictionIntervalLevelHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
