/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/PolicySummary.h>
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
namespace FMS
{
namespace Model
{
  class ListPoliciesResult
  {
  public:
    AWS_FMS_API ListPoliciesResult() = default;
    AWS_FMS_API ListPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>PolicySummary</code> objects.</p>
     */
    inline const Aws::Vector<PolicySummary>& GetPolicyList() const { return m_policyList; }
    template<typename PolicyListT = Aws::Vector<PolicySummary>>
    void SetPolicyList(PolicyListT&& value) { m_policyListHasBeenSet = true; m_policyList = std::forward<PolicyListT>(value); }
    template<typename PolicyListT = Aws::Vector<PolicySummary>>
    ListPoliciesResult& WithPolicyList(PolicyListT&& value) { SetPolicyList(std::forward<PolicyListT>(value)); return *this;}
    template<typename PolicyListT = PolicySummary>
    ListPoliciesResult& AddPolicyList(PolicyListT&& value) { m_policyListHasBeenSet = true; m_policyList.emplace_back(std::forward<PolicyListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you have more <code>PolicySummary</code> objects than the number that you
     * specified for <code>MaxResults</code> in the request, the response includes a
     * <code>NextToken</code> value. To list more <code>PolicySummary</code> objects,
     * submit another <code>ListPolicies</code> request, and specify the
     * <code>NextToken</code> value from the response in the <code>NextToken</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicySummary> m_policyList;
    bool m_policyListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
