﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetAnomalySubscriptionsRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAnomalySubscriptions"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of cost anomaly subscription ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubscriptionArnList() const{ return m_subscriptionArnList; }
    inline bool SubscriptionArnListHasBeenSet() const { return m_subscriptionArnListHasBeenSet; }
    inline void SetSubscriptionArnList(const Aws::Vector<Aws::String>& value) { m_subscriptionArnListHasBeenSet = true; m_subscriptionArnList = value; }
    inline void SetSubscriptionArnList(Aws::Vector<Aws::String>&& value) { m_subscriptionArnListHasBeenSet = true; m_subscriptionArnList = std::move(value); }
    inline GetAnomalySubscriptionsRequest& WithSubscriptionArnList(const Aws::Vector<Aws::String>& value) { SetSubscriptionArnList(value); return *this;}
    inline GetAnomalySubscriptionsRequest& WithSubscriptionArnList(Aws::Vector<Aws::String>&& value) { SetSubscriptionArnList(std::move(value)); return *this;}
    inline GetAnomalySubscriptionsRequest& AddSubscriptionArnList(const Aws::String& value) { m_subscriptionArnListHasBeenSet = true; m_subscriptionArnList.push_back(value); return *this; }
    inline GetAnomalySubscriptionsRequest& AddSubscriptionArnList(Aws::String&& value) { m_subscriptionArnListHasBeenSet = true; m_subscriptionArnList.push_back(std::move(value)); return *this; }
    inline GetAnomalySubscriptionsRequest& AddSubscriptionArnList(const char* value) { m_subscriptionArnListHasBeenSet = true; m_subscriptionArnList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Cost anomaly monitor ARNs. </p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }
    inline GetAnomalySubscriptionsRequest& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}
    inline GetAnomalySubscriptionsRequest& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}
    inline GetAnomalySubscriptionsRequest& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }
    inline GetAnomalySubscriptionsRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline GetAnomalySubscriptionsRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline GetAnomalySubscriptionsRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetAnomalySubscriptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subscriptionArnList;
    bool m_subscriptionArnListHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
