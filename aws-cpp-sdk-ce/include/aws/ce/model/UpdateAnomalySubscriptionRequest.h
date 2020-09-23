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
  class AWS_COSTEXPLORER_API UpdateAnomalySubscriptionRequest : public CostExplorerRequest
  {
  public:
    UpdateAnomalySubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAnomalySubscription"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }

    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }

    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }

    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p> A cost anomaly subscription Amazon Resource Name (ARN). </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}


    /**
     * <p> The update to the threshold value for receiving notifications. </p>
     */
    inline double GetThreshold() const{ return m_threshold; }

    /**
     * <p> The update to the threshold value for receiving notifications. </p>
     */
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }

    /**
     * <p> The update to the threshold value for receiving notifications. </p>
     */
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }

    /**
     * <p> The update to the threshold value for receiving notifications. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithThreshold(double value) { SetThreshold(value); return *this;}


    /**
     * <p> The update to the frequency value at which subscribers will receive
     * notifications. </p>
     */
    inline const AnomalySubscriptionFrequency& GetFrequency() const{ return m_frequency; }

    /**
     * <p> The update to the frequency value at which subscribers will receive
     * notifications. </p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p> The update to the frequency value at which subscribers will receive
     * notifications. </p>
     */
    inline void SetFrequency(const AnomalySubscriptionFrequency& value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p> The update to the frequency value at which subscribers will receive
     * notifications. </p>
     */
    inline void SetFrequency(AnomalySubscriptionFrequency&& value) { m_frequencyHasBeenSet = true; m_frequency = std::move(value); }

    /**
     * <p> The update to the frequency value at which subscribers will receive
     * notifications. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithFrequency(const AnomalySubscriptionFrequency& value) { SetFrequency(value); return *this;}

    /**
     * <p> The update to the frequency value at which subscribers will receive
     * notifications. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithFrequency(AnomalySubscriptionFrequency&& value) { SetFrequency(std::move(value)); return *this;}


    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetMonitorArnList() const{ return m_monitorArnList; }

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline bool MonitorArnListHasBeenSet() const { return m_monitorArnListHasBeenSet; }

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline void SetMonitorArnList(const Aws::Vector<Aws::String>& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = value; }

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline void SetMonitorArnList(Aws::Vector<Aws::String>&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList = std::move(value); }

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithMonitorArnList(const Aws::Vector<Aws::String>& value) { SetMonitorArnList(value); return *this;}

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithMonitorArnList(Aws::Vector<Aws::String>&& value) { SetMonitorArnList(std::move(value)); return *this;}

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddMonitorArnList(const Aws::String& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddMonitorArnList(Aws::String&& value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of cost anomaly subscription ARNs. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddMonitorArnList(const char* value) { m_monitorArnListHasBeenSet = true; m_monitorArnList.push_back(value); return *this; }


    /**
     * <p> The update to the subscriber list. </p>
     */
    inline const Aws::Vector<Subscriber>& GetSubscribers() const{ return m_subscribers; }

    /**
     * <p> The update to the subscriber list. </p>
     */
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }

    /**
     * <p> The update to the subscriber list. </p>
     */
    inline void SetSubscribers(const Aws::Vector<Subscriber>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }

    /**
     * <p> The update to the subscriber list. </p>
     */
    inline void SetSubscribers(Aws::Vector<Subscriber>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }

    /**
     * <p> The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscribers(const Aws::Vector<Subscriber>& value) { SetSubscribers(value); return *this;}

    /**
     * <p> The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscribers(Aws::Vector<Subscriber>&& value) { SetSubscribers(std::move(value)); return *this;}

    /**
     * <p> The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddSubscribers(const Subscriber& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }

    /**
     * <p> The update to the subscriber list. </p>
     */
    inline UpdateAnomalySubscriptionRequest& AddSubscribers(Subscriber&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }


    /**
     * <p> The subscription's new name. </p>
     */
    inline const Aws::String& GetSubscriptionName() const{ return m_subscriptionName; }

    /**
     * <p> The subscription's new name. </p>
     */
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }

    /**
     * <p> The subscription's new name. </p>
     */
    inline void SetSubscriptionName(const Aws::String& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = value; }

    /**
     * <p> The subscription's new name. </p>
     */
    inline void SetSubscriptionName(Aws::String&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::move(value); }

    /**
     * <p> The subscription's new name. </p>
     */
    inline void SetSubscriptionName(const char* value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName.assign(value); }

    /**
     * <p> The subscription's new name. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionName(const Aws::String& value) { SetSubscriptionName(value); return *this;}

    /**
     * <p> The subscription's new name. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionName(Aws::String&& value) { SetSubscriptionName(std::move(value)); return *this;}

    /**
     * <p> The subscription's new name. </p>
     */
    inline UpdateAnomalySubscriptionRequest& WithSubscriptionName(const char* value) { SetSubscriptionName(value); return *this;}

  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet;

    double m_threshold;
    bool m_thresholdHasBeenSet;

    AnomalySubscriptionFrequency m_frequency;
    bool m_frequencyHasBeenSet;

    Aws::Vector<Aws::String> m_monitorArnList;
    bool m_monitorArnListHasBeenSet;

    Aws::Vector<Subscriber> m_subscribers;
    bool m_subscribersHasBeenSet;

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
