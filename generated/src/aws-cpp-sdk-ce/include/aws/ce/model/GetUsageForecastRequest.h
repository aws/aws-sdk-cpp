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
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_COSTEXPLORER_API GetUsageForecastRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUsageForecast"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
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
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    GetUsageForecastRequest& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Which metric Cost Explorer uses to create your forecast.</p> <p>Valid values
     * for a <code>GetUsageForecast</code> call are the following:</p> <ul> <li>
     * <p>USAGE_QUANTITY</p> </li> <li> <p>NORMALIZED_USAGE_AMOUNT</p> </li> </ul>
     */
    inline Metric GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(Metric value) { m_metricHasBeenSet = true; m_metric = value; }
    inline GetUsageForecastRequest& WithMetric(Metric value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How granular you want the forecast to be. You can get 3 months of
     * <code>DAILY</code> forecasts or 12 months of <code>MONTHLY</code> forecasts.</p>
     * <p>The <code>GetUsageForecast</code> operation supports only <code>DAILY</code>
     * and <code>MONTHLY</code> granularities.</p>
     */
    inline Granularity GetGranularity() const { return m_granularity; }
    inline bool GranularityHasBeenSet() const { return m_granularityHasBeenSet; }
    inline void SetGranularity(Granularity value) { m_granularityHasBeenSet = true; m_granularity = value; }
    inline GetUsageForecastRequest& WithGranularity(Granularity value) { SetGranularity(value); return *this;}
    ///@}

    ///@{
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
    inline const Expression& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Expression>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Expression>
    GetUsageForecastRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies a specific billing
     * view. The ARN is used to specify which particular billing view you want to
     * interact with or retrieve information from when making API calls related to
     * Amazon Web Services Billing and Cost Management features. The BillingViewArn can
     * be retrieved by calling the ListBillingViews API.</p>
     */
    inline const Aws::String& GetBillingViewArn() const { return m_billingViewArn; }
    inline bool BillingViewArnHasBeenSet() const { return m_billingViewArnHasBeenSet; }
    template<typename BillingViewArnT = Aws::String>
    void SetBillingViewArn(BillingViewArnT&& value) { m_billingViewArnHasBeenSet = true; m_billingViewArn = std::forward<BillingViewArnT>(value); }
    template<typename BillingViewArnT = Aws::String>
    GetUsageForecastRequest& WithBillingViewArn(BillingViewArnT&& value) { SetBillingViewArn(std::forward<BillingViewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Cost Explorer always returns the mean forecast as a
     * single point. You can request a prediction interval around the mean by
     * specifying a confidence level. The higher the confidence level, the more
     * confident Cost Explorer is about the actual value falling in the prediction
     * interval. Higher confidence levels result in wider prediction intervals.</p>
     */
    inline int GetPredictionIntervalLevel() const { return m_predictionIntervalLevel; }
    inline bool PredictionIntervalLevelHasBeenSet() const { return m_predictionIntervalLevelHasBeenSet; }
    inline void SetPredictionIntervalLevel(int value) { m_predictionIntervalLevelHasBeenSet = true; m_predictionIntervalLevel = value; }
    inline GetUsageForecastRequest& WithPredictionIntervalLevel(int value) { SetPredictionIntervalLevel(value); return *this;}
    ///@}
  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Metric m_metric{Metric::NOT_SET};
    bool m_metricHasBeenSet = false;

    Granularity m_granularity{Granularity::NOT_SET};
    bool m_granularityHasBeenSet = false;

    Expression m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_billingViewArn;
    bool m_billingViewArnHasBeenSet = false;

    int m_predictionIntervalLevel{0};
    bool m_predictionIntervalLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
