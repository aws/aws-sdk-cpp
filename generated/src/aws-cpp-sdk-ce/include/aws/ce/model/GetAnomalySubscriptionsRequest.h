/**
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
    AWS_COSTEXPLORER_API GetAnomalySubscriptionsRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetSubscriptionArnList() const { return m_subscriptionArnList; }
    inline bool SubscriptionArnListHasBeenSet() const { return m_subscriptionArnListHasBeenSet; }
    template<typename SubscriptionArnListT = Aws::Vector<Aws::String>>
    void SetSubscriptionArnList(SubscriptionArnListT&& value) { m_subscriptionArnListHasBeenSet = true; m_subscriptionArnList = std::forward<SubscriptionArnListT>(value); }
    template<typename SubscriptionArnListT = Aws::Vector<Aws::String>>
    GetAnomalySubscriptionsRequest& WithSubscriptionArnList(SubscriptionArnListT&& value) { SetSubscriptionArnList(std::forward<SubscriptionArnListT>(value)); return *this;}
    template<typename SubscriptionArnListT = Aws::String>
    GetAnomalySubscriptionsRequest& AddSubscriptionArnList(SubscriptionArnListT&& value) { m_subscriptionArnListHasBeenSet = true; m_subscriptionArnList.emplace_back(std::forward<SubscriptionArnListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Cost anomaly monitor ARNs. </p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    GetAnomalySubscriptionsRequest& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetAnomalySubscriptionsRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of entries a paginated response contains. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
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

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
