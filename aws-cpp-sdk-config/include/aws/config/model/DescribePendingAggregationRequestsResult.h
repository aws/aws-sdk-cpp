/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/PendingAggregationRequest.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribePendingAggregationRequestsResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribePendingAggregationRequestsResult();
    AWS_CONFIGSERVICE_API DescribePendingAggregationRequestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribePendingAggregationRequestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline const Aws::Vector<PendingAggregationRequest>& GetPendingAggregationRequests() const{ return m_pendingAggregationRequests; }

    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline void SetPendingAggregationRequests(const Aws::Vector<PendingAggregationRequest>& value) { m_pendingAggregationRequests = value; }

    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline void SetPendingAggregationRequests(Aws::Vector<PendingAggregationRequest>&& value) { m_pendingAggregationRequests = std::move(value); }

    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline DescribePendingAggregationRequestsResult& WithPendingAggregationRequests(const Aws::Vector<PendingAggregationRequest>& value) { SetPendingAggregationRequests(value); return *this;}

    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline DescribePendingAggregationRequestsResult& WithPendingAggregationRequests(Aws::Vector<PendingAggregationRequest>&& value) { SetPendingAggregationRequests(std::move(value)); return *this;}

    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline DescribePendingAggregationRequestsResult& AddPendingAggregationRequests(const PendingAggregationRequest& value) { m_pendingAggregationRequests.push_back(value); return *this; }

    /**
     * <p>Returns a PendingAggregationRequests object.</p>
     */
    inline DescribePendingAggregationRequestsResult& AddPendingAggregationRequests(PendingAggregationRequest&& value) { m_pendingAggregationRequests.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribePendingAggregationRequestsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribePendingAggregationRequestsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline DescribePendingAggregationRequestsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PendingAggregationRequest> m_pendingAggregationRequests;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
