/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AccessPolicy.h>
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
  class ListAccessPoliciesResult
  {
  public:
    AWS_EKS_API ListAccessPoliciesResult() = default;
    AWS_EKS_API ListAccessPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListAccessPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<AccessPolicy>& GetAccessPolicies() const { return m_accessPolicies; }
    template<typename AccessPoliciesT = Aws::Vector<AccessPolicy>>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = Aws::Vector<AccessPolicy>>
    ListAccessPoliciesResult& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    template<typename AccessPoliciesT = AccessPolicy>
    ListAccessPoliciesResult& AddAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.emplace_back(std::forward<AccessPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccessPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccessPolicy> m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
