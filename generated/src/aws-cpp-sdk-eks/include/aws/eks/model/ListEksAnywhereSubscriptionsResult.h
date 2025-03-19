/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/EksAnywhereSubscription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{
  class ListEksAnywhereSubscriptionsResult
  {
  public:
    AWS_EKS_API ListEksAnywhereSubscriptionsResult() = default;
    AWS_EKS_API ListEksAnywhereSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListEksAnywhereSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline const Aws::Vector<EksAnywhereSubscription>& GetSubscriptions() const { return m_subscriptions; }
    template<typename SubscriptionsT = Aws::Vector<EksAnywhereSubscription>>
    void SetSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions = std::forward<SubscriptionsT>(value); }
    template<typename SubscriptionsT = Aws::Vector<EksAnywhereSubscription>>
    ListEksAnywhereSubscriptionsResult& WithSubscriptions(SubscriptionsT&& value) { SetSubscriptions(std::forward<SubscriptionsT>(value)); return *this;}
    template<typename SubscriptionsT = EksAnywhereSubscription>
    ListEksAnywhereSubscriptionsResult& AddSubscriptions(SubscriptionsT&& value) { m_subscriptionsHasBeenSet = true; m_subscriptions.emplace_back(std::forward<SubscriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEksAnywhereSubscriptionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEksAnywhereSubscriptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EksAnywhereSubscription> m_subscriptions;
    bool m_subscriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
