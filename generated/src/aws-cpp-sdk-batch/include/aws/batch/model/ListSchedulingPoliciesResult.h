/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/SchedulingPolicyListingDetail.h>
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
namespace Batch
{
namespace Model
{
  class ListSchedulingPoliciesResult
  {
  public:
    AWS_BATCH_API ListSchedulingPoliciesResult();
    AWS_BATCH_API ListSchedulingPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API ListSchedulingPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline const Aws::Vector<SchedulingPolicyListingDetail>& GetSchedulingPolicies() const{ return m_schedulingPolicies; }

    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline void SetSchedulingPolicies(const Aws::Vector<SchedulingPolicyListingDetail>& value) { m_schedulingPolicies = value; }

    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline void SetSchedulingPolicies(Aws::Vector<SchedulingPolicyListingDetail>&& value) { m_schedulingPolicies = std::move(value); }

    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline ListSchedulingPoliciesResult& WithSchedulingPolicies(const Aws::Vector<SchedulingPolicyListingDetail>& value) { SetSchedulingPolicies(value); return *this;}

    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline ListSchedulingPoliciesResult& WithSchedulingPolicies(Aws::Vector<SchedulingPolicyListingDetail>&& value) { SetSchedulingPolicies(std::move(value)); return *this;}

    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline ListSchedulingPoliciesResult& AddSchedulingPolicies(const SchedulingPolicyListingDetail& value) { m_schedulingPolicies.push_back(value); return *this; }

    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline ListSchedulingPoliciesResult& AddSchedulingPolicies(SchedulingPolicyListingDetail&& value) { m_schedulingPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSchedulingPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSchedulingPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSchedulingPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SchedulingPolicyListingDetail> m_schedulingPolicies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
