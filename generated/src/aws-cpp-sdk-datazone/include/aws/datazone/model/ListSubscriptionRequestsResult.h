/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SubscriptionRequestSummary.h>
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
namespace DataZone
{
namespace Model
{
  class ListSubscriptionRequestsResult
  {
  public:
    AWS_DATAZONE_API ListSubscriptionRequestsResult();
    AWS_DATAZONE_API ListSubscriptionRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListSubscriptionRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The results of the <code>ListSubscriptionRequests</code> action. </p>
     */
    inline const Aws::Vector<SubscriptionRequestSummary>& GetItems() const{ return m_items; }

    /**
     * <p>The results of the <code>ListSubscriptionRequests</code> action. </p>
     */
    inline void SetItems(const Aws::Vector<SubscriptionRequestSummary>& value) { m_items = value; }

    /**
     * <p>The results of the <code>ListSubscriptionRequests</code> action. </p>
     */
    inline void SetItems(Aws::Vector<SubscriptionRequestSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>The results of the <code>ListSubscriptionRequests</code> action. </p>
     */
    inline ListSubscriptionRequestsResult& WithItems(const Aws::Vector<SubscriptionRequestSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>The results of the <code>ListSubscriptionRequests</code> action. </p>
     */
    inline ListSubscriptionRequestsResult& WithItems(Aws::Vector<SubscriptionRequestSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The results of the <code>ListSubscriptionRequests</code> action. </p>
     */
    inline ListSubscriptionRequestsResult& AddItems(const SubscriptionRequestSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The results of the <code>ListSubscriptionRequests</code> action. </p>
     */
    inline ListSubscriptionRequestsResult& AddItems(SubscriptionRequestSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline ListSubscriptionRequestsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline ListSubscriptionRequestsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of subscription requests is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of subscription
     * requests, the response includes a pagination token named <code>NextToken</code>.
     * You can specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListSubscriptionRequests</code> to list the next set of subscription
     * requests.</p>
     */
    inline ListSubscriptionRequestsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSubscriptionRequestsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSubscriptionRequestsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSubscriptionRequestsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SubscriptionRequestSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
