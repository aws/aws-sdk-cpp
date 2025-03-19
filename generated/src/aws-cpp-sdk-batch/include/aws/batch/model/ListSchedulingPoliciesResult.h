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
    AWS_BATCH_API ListSchedulingPoliciesResult() = default;
    AWS_BATCH_API ListSchedulingPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API ListSchedulingPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of scheduling policies that match the request.</p>
     */
    inline const Aws::Vector<SchedulingPolicyListingDetail>& GetSchedulingPolicies() const { return m_schedulingPolicies; }
    template<typename SchedulingPoliciesT = Aws::Vector<SchedulingPolicyListingDetail>>
    void SetSchedulingPolicies(SchedulingPoliciesT&& value) { m_schedulingPoliciesHasBeenSet = true; m_schedulingPolicies = std::forward<SchedulingPoliciesT>(value); }
    template<typename SchedulingPoliciesT = Aws::Vector<SchedulingPolicyListingDetail>>
    ListSchedulingPoliciesResult& WithSchedulingPolicies(SchedulingPoliciesT&& value) { SetSchedulingPolicies(std::forward<SchedulingPoliciesT>(value)); return *this;}
    template<typename SchedulingPoliciesT = SchedulingPolicyListingDetail>
    ListSchedulingPoliciesResult& AddSchedulingPolicies(SchedulingPoliciesT&& value) { m_schedulingPoliciesHasBeenSet = true; m_schedulingPolicies.emplace_back(std::forward<SchedulingPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListSchedulingPolicies</code> request. When the results of a
     * <code>ListSchedulingPolicies</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSchedulingPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSchedulingPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchedulingPolicyListingDetail> m_schedulingPolicies;
    bool m_schedulingPoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
