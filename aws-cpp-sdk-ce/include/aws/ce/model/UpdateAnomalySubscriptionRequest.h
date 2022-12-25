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
    AWS_COSTEXPLORER_API UpdateAnomalySubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnomalySubscription"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }

    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }

    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }

    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}


    /**
     * <p>The update to the frequency value that subscribers receive notifications.
     * </p>
     */
    inline const AnomalySubscriptionFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p>The update to the frequency value that subscribers receive notifications.
     * </p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>The update to the frequency value that subscribers receive notifications.
     * </p>
     */
    inline void SetFrequency(const AnomalySubscriptionFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The update to the frequency value that subscribers receive notifications.
     * </p>
     */
    inline void SetFrequency(AnomalySubscriptionFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p>The update to the frequency value that subscribers receive notifications.
     * </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithFrequency(const AnomalySubscriptionFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p>The update to the frequency value that subscribers receive notifications.
     * </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithFrequency(AnomalySubscriptionFrequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMonitorArnList() const{ return m_monitorArnList; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline bool MonitorArnListHasBeenSet() const { return m_monitorArnListHasBeenSet; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline void SetMonitorArnList(const Aws::Vector<Aws::String>& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = value; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline void SetMonitorArnList(Aws::Vector<Aws::String>&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = std::move(value); }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithMonitorArnList(const Aws::Vector<Aws::String>& value) { SetMonitorArnList(value); return *this;}

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithMonitorArnList(Aws::Vector<Aws::String>&& value) { SetMonitorArnList(std::move(value)); return *this;}

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddMonitorArnList(const Aws::String& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddMonitorArnList(Aws::String&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cost anomaly monitor ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddMonitorArnList(const char* value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }


    /**
     * <p>The update to the subscriber list. </p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    /**
     * <p>The update to the subscriber list. </p>
     */
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    /**
     * <p>The update to the subscriber list. </p>
     */
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    /**
     * <p>The update to the subscriber list. </p>
     */
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    /**
     * <p>The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    /**
     * <p>The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * <p>The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    /**
     * <p>The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }


    /**
     * <p>The new name of the subscription. </p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p>The new name of the subscription. </p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p>The new name of the subscription. </p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p>The new name of the subscription. </p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p>The new name of the subscription. </p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p>The new name of the subscription. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p>The new name of the subscription. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p>The new name of the subscription. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}


    /**
     * <p>The update to the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to specify the anomalies that you want to generate alerts for. This
     * supports dimensions and nested expressions. The supported dimensions are
     * <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code>. The supported nested expression
     * types are <code>AND</code> and <code>OR</code>. The match option
     * <code>GREATER_THAN_OR_EQUAL</code> is required. Values must be numbers between 0
     * and 10,000,000,000.</p> <p>The following are examples of valid
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

    /**
     * <p>The update to the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to specify the anomalies that you want to generate alerts for. This
     * supports dimensions and nested expressions. The supported dimensions are
     * <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code>. The supported nested expression
     * types are <code>AND</code> and <code>OR</code>. The match option
     * <code>GREATER_THAN_OR_EQUAL</code> is required. Values must be numbers between 0
     * and 10,000,000,000.</p> <p>The following are examples of valid
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
    inline bool ThresholdExpressionHasBeenSet() const { return m_thresholdExpressionHasBeenSet; }

    /**
     * <p>The update to the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to specify the anomalies that you want to generate alerts for. This
     * supports dimensions and nested expressions. The supported dimensions are
     * <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code>. The supported nested expression
     * types are <code>AND</code> and <code>OR</code>. The match option
     * <code>GREATER_THAN_OR_EQUAL</code> is required. Values must be numbers between 0
     * and 10,000,000,000.</p> <p>The following are examples of valid
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
    inline void SetThresholdExpression(const Expression& value) { m_thresholdExpressionHasBeenSet = true; m_thresholdExpression = value; }

    /**
     * <p>The update to the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to specify the anomalies that you want to generate alerts for. This
     * supports dimensions and nested expressions. The supported dimensions are
     * <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code>. The supported nested expression
     * types are <code>AND</code> and <code>OR</code>. The match option
     * <code>GREATER_THAN_OR_EQUAL</code> is required. Values must be numbers between 0
     * and 10,000,000,000.</p> <p>The following are examples of valid
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
    inline void SetThresholdExpression(Expression&& value) { m_thresholdExpressionHasBeenSet = true; m_thresholdExpression = std::move(value); }

    /**
     * <p>The update to the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to specify the anomalies that you want to generate alerts for. This
     * supports dimensions and nested expressions. The supported dimensions are
     * <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code>. The supported nested expression
     * types are <code>AND</code> and <code>OR</code>. The match option
     * <code>GREATER_THAN_OR_EQUAL</code> is required. Values must be numbers between 0
     * and 10,000,000,000.</p> <p>The following are examples of valid
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
    inline UpdateAnomalySubscriptionRequest& WithThresholdExpression(const Expression& value) { SetThresholdExpression(value); return *this;}

    /**
     * <p>The update to the <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>
     * object used to specify the anomalies that you want to generate alerts for. This
     * supports dimensions and nested expressions. The supported dimensions are
     * <code>ANOMALY_TOTAL_IMPACT_ABSOLUTE</code> and
     * <code>ANOMALY_TOTAL_IMPACT_PERCENTAGE</code>. The supported nested expression
     * types are <code>AND</code> and <code>OR</code>. The match option
     * <code>GREATER_THAN_OR_EQUAL</code> is required. Values must be numbers between 0
     * and 10,000,000,000.</p> <p>The following are examples of valid
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
    inline UpdateAnomalySubscriptionRequest& WithThresholdExpression(Expression&& value) { SetThresholdExpression(std::move(value)); return *this;}

  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    AnomalySubscriptionFrequency m_frequency;
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
