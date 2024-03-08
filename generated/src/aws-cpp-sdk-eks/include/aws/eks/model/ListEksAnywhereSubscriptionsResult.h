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
    AWS_EKS_API ListEksAnywhereSubscriptionsResult();
    AWS_EKS_API ListEksAnywhereSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListEksAnywhereSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline const Aws::Vector<EksAnywhereSubscription>& GetSubscriptions() const{ return m_subscriptions; }

    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline void SetSubscriptions(const Aws::Vector<EksAnywhereSubscription>& value) { m_subscriptions = value; }

    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline void SetSubscriptions(Aws::Vector<EksAnywhereSubscription>&& value) { m_subscriptions = std::move(value); }

    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline ListEksAnywhereSubscriptionsResult& WithSubscriptions(const Aws::Vector<EksAnywhereSubscription>& value) { SetSubscriptions(value); return *this;}

    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline ListEksAnywhereSubscriptionsResult& WithSubscriptions(Aws::Vector<EksAnywhereSubscription>&& value) { SetSubscriptions(std::move(value)); return *this;}

    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline ListEksAnywhereSubscriptionsResult& AddSubscriptions(const EksAnywhereSubscription& value) { m_subscriptions.push_back(value); return *this; }

    /**
     * <p>A list of all subscription objects in the region, filtered by includeStatus
     * and paginated by nextToken and maxResults.</p>
     */
    inline ListEksAnywhereSubscriptionsResult& AddSubscriptions(EksAnywhereSubscription&& value) { m_subscriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline ListEksAnywhereSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline ListEksAnywhereSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken value to include in a future ListEksAnywhereSubscriptions
     * request. When the results of a ListEksAnywhereSubscriptions request exceed
     * maxResults, you can use this value to retrieve the next page of results. This
     * value is null when there are no more results to return.</p>
     */
    inline ListEksAnywhereSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEksAnywhereSubscriptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEksAnywhereSubscriptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEksAnywhereSubscriptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EksAnywhereSubscription> m_subscriptions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
