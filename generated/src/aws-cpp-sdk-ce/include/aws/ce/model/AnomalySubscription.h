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
    AWS_COSTEXPLORER_API AnomalySubscription();
    AWS_COSTEXPLORER_API AnomalySubscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnomalySubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }
    inline AnomalySubscription& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}
    inline AnomalySubscription& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}
    inline AnomalySubscription& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your unique account identifier. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AnomalySubscription& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AnomalySubscription& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AnomalySubscription& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cost anomaly monitors. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMonitorArnList() const{ return m_monitorArnList; }
    inline bool MonitorArnListHasBeenSet() const { return m_monitorArnListHasBeenSet; }
    inline void SetMonitorArnList(const Aws::Vector<Aws::String>& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = value; }
    inline void SetMonitorArnList(Aws::Vector<Aws::String>&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = std::move(value); }
    inline AnomalySubscription& WithMonitorArnList(const Aws::Vector<Aws::String>& value) { SetMonitorArnList(value); return *this;}
    inline AnomalySubscription& WithMonitorArnList(Aws::Vector<Aws::String>&& value) { SetMonitorArnList(std::move(value)); return *this;}
    inline AnomalySubscription& AddMonitorArnList(const Aws::String& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }
    inline AnomalySubscription& AddMonitorArnList(Aws::String&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(std::move(value)); return *this; }
    inline AnomalySubscription& AddMonitorArnList(const char* value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of subscribers to notify. </p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }
    inline AnomalySubscription& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}
    inline AnomalySubscription& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}
    inline AnomalySubscription& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }
    inline AnomalySubscription& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The frequency that anomaly notifications are sent. Notifications are sent
     * either over email (for DAILY and WEEKLY frequencies) or SNS (for IMMEDIATE
     * frequency). For more information, see <a
     * href="https://docs.aws.amazon.com/cost-management/latest/userguide/ad-SNS.html">Creating
     * an Amazon SNS topic for anomaly notifications</a>.</p>
     */
    inline const AnomalySubscriptionFrequency& GetFrequency() const{ return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(const AnomalySubscriptionFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline void SetFrequency(AnomalySubscriptionFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }
    inline AnomalySubscription& WithFrequency(const AnomalySubscriptionFrequency& value) { SetFrequency(value); return *this;}
    inline AnomalySubscription& WithFrequency(AnomalySubscriptionFrequency&& value) { SetFrequency(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the subscription. </p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }
    inline AnomalySubscription& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}
    inline AnomalySubscription& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}
    inline AnomalySubscription& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}
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
    inline const Expression& GetThresholdExpression() const{ return m_thresholdExpression; }
    inline bool ThresholdExpressionHasBeenSet() const { return m_thresholdExpressionHasBeenSet; }
    inline void SetThresholdExpression(const Expression& value) { m_thresholdExpressionHasBeenSet = true; m_thresholdExpression = value; }
    inline void SetThresholdExpression(Expression&& value) { m_thresholdExpressionHasBeenSet = true; m_thresholdExpression = std::move(value); }
    inline AnomalySubscription& WithThresholdExpression(const Expression& value) { SetThresholdExpression(value); return *this;}
    inline AnomalySubscription& WithThresholdExpression(Expression&& value) { SetThresholdExpression(std::move(value)); return *this;}
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

    AnomalySubscriptionFrequency m_frequency;
    bool m_frequencyHasBeenSet = false;

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Expression m_thresholdExpression;
    bool m_thresholdExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
