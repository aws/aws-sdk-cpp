/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/EKSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/EksAnywhereSubscriptionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EKS
{
namespace Model
{

  /**
   */
  class ListEksAnywhereSubscriptionsRequest : public EKSRequest
  {
  public:
    AWS_EKS_API ListEksAnywhereSubscriptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEksAnywhereSubscriptions"; }

    AWS_EKS_API Aws::String SerializePayload() const override;

    AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of cluster results returned by
     * ListEksAnywhereSubscriptions in paginated output. When you use this parameter,
     * ListEksAnywhereSubscriptions returns only maxResults results in a single page
     * along with a nextToken response element. You can see the remaining results of
     * the initial request by sending another ListEksAnywhereSubscriptions request with
     * the returned nextToken value. This value can be between 1 and 100. If you don't
     * use this parameter, ListEksAnywhereSubscriptions returns up to 10 results and a
     * nextToken value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEksAnywhereSubscriptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>ListEksAnywhereSubscriptions</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEksAnywhereSubscriptionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of subscription statuses to filter on.</p>
     */
    inline const Aws::Vector<EksAnywhereSubscriptionStatus>& GetIncludeStatus() const { return m_includeStatus; }
    inline bool IncludeStatusHasBeenSet() const { return m_includeStatusHasBeenSet; }
    template<typename IncludeStatusT = Aws::Vector<EksAnywhereSubscriptionStatus>>
    void SetIncludeStatus(IncludeStatusT&& value) { m_includeStatusHasBeenSet = true; m_includeStatus = std::forward<IncludeStatusT>(value); }
    template<typename IncludeStatusT = Aws::Vector<EksAnywhereSubscriptionStatus>>
    ListEksAnywhereSubscriptionsRequest& WithIncludeStatus(IncludeStatusT&& value) { SetIncludeStatus(std::forward<IncludeStatusT>(value)); return *this;}
    inline ListEksAnywhereSubscriptionsRequest& AddIncludeStatus(EksAnywhereSubscriptionStatus value) { m_includeStatusHasBeenSet = true; m_includeStatus.push_back(value); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<EksAnywhereSubscriptionStatus> m_includeStatus;
    bool m_includeStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
