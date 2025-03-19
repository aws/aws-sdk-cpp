/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Transfer
{
namespace Model
{
  class ListSecurityPoliciesResult
  {
  public:
    AWS_TRANSFER_API ListSecurityPoliciesResult() = default;
    AWS_TRANSFER_API ListSecurityPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListSecurityPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSecurityPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityPolicyNames() const { return m_securityPolicyNames; }
    template<typename SecurityPolicyNamesT = Aws::Vector<Aws::String>>
    void SetSecurityPolicyNames(SecurityPolicyNamesT&& value) { m_securityPolicyNamesHasBeenSet = true; m_securityPolicyNames = std::forward<SecurityPolicyNamesT>(value); }
    template<typename SecurityPolicyNamesT = Aws::Vector<Aws::String>>
    ListSecurityPoliciesResult& WithSecurityPolicyNames(SecurityPolicyNamesT&& value) { SetSecurityPolicyNames(std::forward<SecurityPolicyNamesT>(value)); return *this;}
    template<typename SecurityPolicyNamesT = Aws::String>
    ListSecurityPoliciesResult& AddSecurityPolicyNames(SecurityPolicyNamesT&& value) { m_securityPolicyNamesHasBeenSet = true; m_securityPolicyNames.emplace_back(std::forward<SecurityPolicyNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSecurityPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityPolicyNames;
    bool m_securityPolicyNamesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
