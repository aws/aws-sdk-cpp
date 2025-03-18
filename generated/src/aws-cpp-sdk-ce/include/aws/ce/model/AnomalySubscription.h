/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/AnomalySubscriptionFrequency.h>
#include <aws/ce/model/Expression.h>
#include <aws/ce/model/Subscriber.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>An <code>AnomalySubscription</code> resource (also referred to as an alert
   * subscription) sends notifications about specific anomalies that meet an alerting
   * criteria defined by you.</p> <p>You can specify the frequency of the alerts and
   * the subscribers to notify.</p> <p>Anomaly subscriptions can be associated with
   * one or more <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_AnomalyMonitor.html">
   * <code>AnomalyMonitor</code> </a> resources, and they only send notifications
   * about anomalies detected by those associated monitors. You can also configure a
   * threshold to further control which anomalies are included in the
   * notifications.</p> <p>Anomalies that don’t exceed the chosen threshold and
   * therefore don’t trigger notifications from an anomaly subscription will still be
   * available on the console and from the <a
   * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetAnomalies.html">
   * <code>GetAnomalies</code> </a> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/AnomalySubscription">AWS
   * API Reference</a></p>
   */
  class AnomalySubscription
  {
  public:
    AWS_COSTEXPLORER_API AnomalySubscription() = default;
    AWS_COSTEXPLORER_API AnomalySubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnomalySubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetSubscriptionArn() const { return m_subscriptionArn; }
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }
    template<typename SubscriptionArnT = Aws::String>
    void SetSubscriptionArn(SubscriptionArnT&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::forward<SubscriptionArnT>(value); }
    template<typename SubscriptionArnT = Aws::String>
    AnomalySubscription& WithSubscriptionArn(SubscriptionArnT&& value) { SetSubscriptionArn(std::forward<SubscriptionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your unique account identifier. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AnomalySubscription& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cost anomaly monitors. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMonitorArnList() const { return m_monitorArnList; }
    inline bool MonitorArnListHasBeenSet() const { return m_monitorArnListHasBeenSet; }
    template<typename MonitorArnListT = Aws::Vector<Aws::String>>
    void SetMonitorArnList(MonitorArnListT&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = std::forward<MonitorArnListT>(value); }
    template<typename MonitorArnListT = Aws::Vector<Aws::String>>
    AnomalySubscription& WithMonitorArnList(MonitorArnListT&& value) { SetMonitorArnList(std::forward<MonitorArnListT>(value)); return *this;}
    template<typename MonitorArnListT = Aws::String>
    AnomalySubscription& AddMonitorArnList(MonitorArnListT&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.emplace_back(std::forward<MonitorArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of subscribers to notify. </p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const { return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    template<typename SubscribersT = Aws::Vector<Subscriber>>
    void SetSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::forward<SubscribersT>(value); }
    template<typename SubscribersT = Aws::Vector<Subscriber>>
    AnomalySubscription& WithSubscribers(SubscribersT&& value) { SetSubscribers(std::forward<SubscribersT>(value)); return *this;}
    template<typename SubscribersT = Subscriber>
    AnomalySubscription& AddSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers.emplace_back(std::forward<SubscribersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The frequency that anomaly notifications are sent. Notifications are sent
     * either over email (for DAILY and WEEKLY frequencies) or SNS (for IMMEDIATE
     * frequency). For more information, see <a
     * href="https://docs.aws.amazon.com/cost-management/latest/userguide/ad-SNS.html">Creating
     * an Amazon SNS topic for anomaly notifications</a>.</p>
     */
    inline AnomalySubscriptionFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(AnomalySubscriptionFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline AnomalySubscription& WithFrequency(AnomalySubscriptionFrequency value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the subscription. </p>
     */
    inline const Aws::String& GetSubscriptionName() const { return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    template<typename SubscriptionNameT = Aws::String>
    void SetSubscriptionName(SubscriptionNameT&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::forward<SubscriptionNameT>(value); }
    template<typename SubscriptionNameT = Aws::String>
    AnomalySubscription& WithSubscriptionName(SubscriptionNameT&& value) { SetSubscriptionName(std::forward<SubscriptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
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
     * format.</p> <p>One of Threshold or ThresholdExpression is required for this
     * resource. You cannot specify both.</p> <p>The following are examples of valid
     * ThresholdExpressions:</p> <ul> <li> <p>Absolute threshold: <code>{ "Dimensions":
     * { "Key": "ANOMALY_TOTAL_IMPACT_ABSOLUTE", "MatchOptions": [
     * "GREATER_THAN_OR_EQUAL" ], "Values": [ "100" ] } }</code> </p> </li> <li>
     * <p>Percentage threshold: <code>{ "Dimensions": { "Key":
     * "ANOMALY_TOTAL_IMPACT_PERCENTAGE", "MatchOptions": [ "GREATER_THAN_OR_EQUAL" ],
     * "Values": [ "100" ] } }</code> </p> </li> <li> <p> <code>AND</code> two
     * thresholds together: <code>{ "And": [ { "Dimensions": { "Key":
     * "ANOMALY_TOTAL_IMPACT_ABSOLUTE", "MatchOptions": [ "GREATER_THAN_OR_EQUAL" ],
     * "Values": [ "100" ] } }, { "Dimensions": { "Key":
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
    AnomalySubscription& WithThresholdExpression(ThresholdExpressionT&& value) { SetThresholdExpression(std::forward<ThresholdExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_monitorArnList;
    bool m_monitorArnListHasBeenSet = false;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet = false;

    AnomalySubscriptionFrequency m_frequency{AnomalySubscriptionFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Expression m_thresholdExpression;
    bool m_thresholdExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
