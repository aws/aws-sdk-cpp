/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/AnomalySubscriptionFrequency.h>
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
   * <p> The association between a monitor, threshold, and list of subscribers used
   * to deliver notifications about anomalies detected by a monitor that exceeds a
   * threshold. The content consists of the detailed metadata and the current status
   * of the <code>AnomalySubscription</code> object. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/AnomalySubscription">AWS
   * API Reference</a></p>
   */
  class AWS_COSTEXPLORER_API AnomalySubscription
  {
  public:
    AnomalySubscription();
    AnomalySubscription(Aws::Utils::Json::JsonView jsonValue);
    AnomalySubscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }

    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }

    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }

    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline AnomalySubscription& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline AnomalySubscription& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p> The <code>AnomalySubscription</code> Amazon Resource Name (ARN). </p>
     */
    inline AnomalySubscription& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}


    /**
     * <p> Your unique account identifier. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> Your unique account identifier. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> Your unique account identifier. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> Your unique account identifier. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> Your unique account identifier. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> Your unique account identifier. </p>
     */
    inline AnomalySubscription& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> Your unique account identifier. </p>
     */
    inline AnomalySubscription& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> Your unique account identifier. </p>
     */
    inline AnomalySubscription& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMonitorArnList() const{ return m_monitorArnList; }

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline bool MonitorArnListHasBeenSet() const { return m_monitorArnListHasBeenSet; }

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline void SetMonitorArnList(const Aws::Vector<Aws::String>& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = value; }

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline void SetMonitorArnList(Aws::Vector<Aws::String>&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = std::move(value); }

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline AnomalySubscription& WithMonitorArnList(const Aws::Vector<Aws::String>& value) { SetMonitorArnList(value); return *this;}

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline AnomalySubscription& WithMonitorArnList(Aws::Vector<Aws::String>&& value) { SetMonitorArnList(std::move(value)); return *this;}

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline AnomalySubscription& AddMonitorArnList(const Aws::String& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline AnomalySubscription& AddMonitorArnList(Aws::String&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of cost anomaly monitors. </p>
     */
    inline AnomalySubscription& AddMonitorArnList(const char* value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }


    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline AnomalySubscription& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline AnomalySubscription& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline AnomalySubscription& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    /**
     * <p> A list of subscribers to notify. </p>
     */
    inline AnomalySubscription& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }


    /**
     * <p> The dollar value that triggers a notification if the threshold is exceeded.
     * </p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p> The dollar value that triggers a notification if the threshold is exceeded.
     * </p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p> The dollar value that triggers a notification if the threshold is exceeded.
     * </p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p> The dollar value that triggers a notification if the threshold is exceeded.
     * </p>
     */
    inline AnomalySubscription& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p> The frequency at which anomaly reports are sent over email. </p>
     */
    inline const AnomalySubscriptionFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p> The frequency at which anomaly reports are sent over email. </p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p> The frequency at which anomaly reports are sent over email. </p>
     */
    inline void SetFrequency(const AnomalySubscriptionFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p> The frequency at which anomaly reports are sent over email. </p>
     */
    inline void SetFrequency(AnomalySubscriptionFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p> The frequency at which anomaly reports are sent over email. </p>
     */
    inline AnomalySubscription& WithFrequency(const AnomalySubscriptionFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p> The frequency at which anomaly reports are sent over email. </p>
     */
    inline AnomalySubscription& WithFrequency(AnomalySubscriptionFrequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * <p> The name for the subscription. </p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p> The name for the subscription. </p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p> The name for the subscription. </p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p> The name for the subscription. </p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p> The name for the subscription. </p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p> The name for the subscription. </p>
     */
    inline AnomalySubscription& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p> The name for the subscription. </p>
     */
    inline AnomalySubscription& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p> The name for the subscription. </p>
     */
    inline AnomalySubscription& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}

  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::Vector<Aws::String> m_monitorArnList;
    bool m_monitorArnListHasBeenSet;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet;

    double m_threshold;
    bool m_thresholdHasBeenSet;

    AnomalySubscriptionFrequency m_frequency;
    bool m_frequencyHasBeenSet;

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
