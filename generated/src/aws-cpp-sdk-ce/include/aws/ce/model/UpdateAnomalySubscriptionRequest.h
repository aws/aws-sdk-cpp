/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnomalySubscriptionFrequency.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/Expression.h>
#include <aws/ce/model/Subscriber.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class UpdateAnomalySubscriptionRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API UpdateAnomalySubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnomalySubscription"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetSubscriptionArn() const { return m_subscriptionArn; }
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }
    template<typename SubscriptionArnT = Aws::String>
    void SetSubscriptionArn(SubscriptionArnT&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::forward<SubscriptionArnT>(value); }
    template<typename SubscriptionArnT = Aws::String>
    UpdateAnomalySubscriptionRequest& WithSubscriptionArn(SubscriptionArnT&& value) { SetSubscriptionArn(std::forward<SubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update to the frequency value that subscribers receive notifications.
     * </p>
     */
    inline AnomalySubscriptionFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(AnomalySubscriptionFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline UpdateAnomalySubscriptionRequest& WithFrequency(AnomalySubscriptionFrequency value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMonitorArnList() const { return m_monitorArnList; }
    inline bool MonitorArnListHasBeenSet() const { return m_monitorArnListHasBeenSet; }
    template<typename MonitorArnListT = Aws::Vector<Aws::String>>
    void SetMonitorArnList(MonitorArnListT&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = std::forward<MonitorArnListT>(value); }
    template<typename MonitorArnListT = Aws::Vector<Aws::String>>
    UpdateAnomalySubscriptionRequest& WithMonitorArnList(MonitorArnListT&& value) { SetMonitorArnList(std::forward<MonitorArnListT>(value)); return *this;}
    template<typename MonitorArnListT = Aws::String>
    UpdateAnomalySubscriptionRequest& AddMonitorArnList(MonitorArnListT&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.emplace_back(std::forward<MonitorArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The update to the subscriber list. </p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const { return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    template<typename SubscribersT = Aws::Vector<Subscriber>>
    void SetSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::forward<SubscribersT>(value); }
    template<typename SubscribersT = Aws::Vector<Subscriber>>
    UpdateAnomalySubscriptionRequest& WithSubscribers(SubscribersT&& value) { SetSubscribers(std::forward<SubscribersT>(value)); return *this;}
    template<typename SubscribersT = Subscriber>
    UpdateAnomalySubscriptionRequest& AddSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers.emplace_back(std::forward<SubscribersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new name of the subscription. </p>
     */
    inline const Aws::String& GetSubscriptionName() const { return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    template<typename SubscriptionNameT = Aws::String>
    void SetSubscriptionName(SubscriptionNameT&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::forward<SubscriptionNameT>(value); }
    template<typename SubscriptionNameT = Aws::String>
    UpdateAnomalySubscriptionRequest& WithSubscriptionName(SubscriptionNameT&& value) { SetSubscriptionName(std::forward<SubscriptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The update to the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to specify the anomalies that you want to generate alerts for. This
     * supports dimensions and nested expressions. The supported dimensions are
     * <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code>, corresponding to an anomaly’s
     * TotalImpact and TotalImpactPercentage, respectively (see <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Impact.html">Impact</a>
     * for more details). The supported nested expression types are <code>AND</code>
     * and <code>OR</code>. The match option <code>GREATER_THAN_OR_EQUAL</code> is
     * required. Values must be numbers between 0 and 10,000,000,000 in string
     * format.</p> <p>You can specify either Threshold or ThresholdExpression, but not
     * both.</p> <p>The following are examples of valid ThresholdExpressions:</p> <ul>
     * <li> <p>Absolute threshold: <code>{ "Dimensions": { "Key":
     * "ANOMALY_TOTAL_IMPACT_ABSOLUTE", "MatchOptions": [ "GREATER_THAN_OR_EQUAL" ],
     * "Values": [ "100" ] } }</code> </p> </li> <li> <p>Percentage threshold: <code>{
     * "Dimensions": { "Key": "ANOMALY_TOTAL_IMPACT_PERCENTAGE", "MatchOptions": [
     * "GREATER_THAN_OR_EQUAL" ], "Values": [ "100" ] } }</code> </p> </li> <li> <p>
     * <code>AND</code> two thresholds together: <code>{ "And": [ { "Dimensions": {
     * "Key": "ANOMALY_TOTAL_IMPACT_ABSOLUTE", "MatchOptions": [
     * "GREATER_THAN_OR_EQUAL" ], "Values": [ "100" ] } }, { "Dimensions": { "Key":
     * "ANOMALY_TOTAL_IMPACT_PERCENTAGE", "MatchOptions": [ "GREATER_THAN_OR_EQUAL" ],
     * "Values": [ "100" ] } } ] }</code> </p> </li> <li> <p> <code>OR</code> two
     * thresholds together: <code>{ "Or": [ { "Dimensions": { "Key":
     * "ANOMALY_TOTAL_IMPACT_ABSOLUTE", "MatchOptions": [ "GREATER_THAN_OR_EQUAL" ],
     * "Values": [ "100" ] } }, { "Dimensions": { "Key":
     * "ANOMALY_TOTAL_IMPACT_PERCENTAGE", "MatchOptions": [ "GREATER_THAN_OR_EQUAL" ],
     * "Values": [ "100" ] } } ] }</code> </p> </li> </ul>
     */
    inline const Expression& GetThresholdExpression() const { return m_thresholdExpression; }
    inline bool ThresholdExpressionHasBeenSet() const { return m_thresholdExpressionHasBeenSet; }
    template<typename ThresholdExpressionT = Expression>
    void SetThresholdExpression(ThresholdExpressionT&& value) { m_thresholdExpressionHasBeenSet = true; m_thresholdExpression = std::forward<ThresholdExpressionT>(value); }
    template<typename ThresholdExpressionT = Expression>
    UpdateAnomalySubscriptionRequest& WithThresholdExpression(ThresholdExpressionT&& value) { SetThresholdExpression(std::forward<ThresholdExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    AnomalySubscriptionFrequency m_frequency{AnomalySubscriptionFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;

    Aws::Vector<Aws::String> m_monitorArnList;
    bool m_monitorArnListHasBeenSet = false;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet = false;

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Expression m_thresholdExpression;
    bool m_thresholdExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
