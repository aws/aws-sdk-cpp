/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/AnomalySubscription.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class AWS_COSTEXPLORER_API CreateAnomalySubscriptionRequest : public CostExplorerRequest
  {
  public:
    CreateAnomalySubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAnomalySubscription"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The cost anomaly subscription object that you want to create. </p>
     */
    inline const AnomalySubscription& GetAnomalySubscription() const{ return m_anomalySubscription; }

    /**
     * <p> The cost anomaly subscription object that you want to create. </p>
     */
    inline bool AnomalySubscriptionHasBeenSet() const { return m_anomalySubscriptionHasBeenSet; }

    /**
     * <p> The cost anomaly subscription object that you want to create. </p>
     */
    inline void SetAnomalySubscription(const AnomalySubscription& value) { m_anomalySubscriptionHasBeenSet = true; m_anomalySubscription = value; }

    /**
     * <p> The cost anomaly subscription object that you want to create. </p>
     */
    inline void SetAnomalySubscription(AnomalySubscription&& value) { m_anomalySubscriptionHasBeenSet = true; m_anomalySubscription = std::move(value); }

    /**
     * <p> The cost anomaly subscription object that you want to create. </p>
     */
    inline CreateAnomalySubscriptionRequest& WithAnomalySubscription(const AnomalySubscription& value) { SetAnomalySubscription(value); return *this;}

    /**
     * <p> The cost anomaly subscription object that you want to create. </p>
     */
    inline CreateAnomalySubscriptionRequest& WithAnomalySubscription(AnomalySubscription&& value) { SetAnomalySubscription(std::move(value)); return *this;}

  private:

    AnomalySubscription m_anomalySubscription;
    bool m_anomalySubscriptionHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
