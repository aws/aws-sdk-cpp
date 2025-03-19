/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ThirdPartyFirewallFirewallPolicy.h>
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
  class ListThirdPartyFirewallFirewallPoliciesResult
  {
  public:
    AWS_FMS_API ListThirdPartyFirewallFirewallPoliciesResult() = default;
    AWS_FMS_API ListThirdPartyFirewallFirewallPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FMS_API ListThirdPartyFirewallFirewallPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains one <code>ThirdPartyFirewallFirewallPolicies</code>
     * element for each third-party firewall policies that the specified third-party
     * firewall vendor is associated with. Each
     * <code>ThirdPartyFirewallFirewallPolicies</code> element contains the firewall
     * policy name and ID.</p>
     */
    inline const Aws::Vector<ThirdPartyFirewallFirewallPolicy>& GetThirdPartyFirewallFirewallPolicies() const { return m_thirdPartyFirewallFirewallPolicies; }
    template<typename ThirdPartyFirewallFirewallPoliciesT = Aws::Vector<ThirdPartyFirewallFirewallPolicy>>
    void SetThirdPartyFirewallFirewallPolicies(ThirdPartyFirewallFirewallPoliciesT&& value) { m_thirdPartyFirewallFirewallPoliciesHasBeenSet = true; m_thirdPartyFirewallFirewallPolicies = std::forward<ThirdPartyFirewallFirewallPoliciesT>(value); }
    template<typename ThirdPartyFirewallFirewallPoliciesT = Aws::Vector<ThirdPartyFirewallFirewallPolicy>>
    ListThirdPartyFirewallFirewallPoliciesResult& WithThirdPartyFirewallFirewallPolicies(ThirdPartyFirewallFirewallPoliciesT&& value) { SetThirdPartyFirewallFirewallPolicies(std::forward<ThirdPartyFirewallFirewallPoliciesT>(value)); return *this;}
    template<typename ThirdPartyFirewallFirewallPoliciesT = ThirdPartyFirewallFirewallPolicy>
    ListThirdPartyFirewallFirewallPoliciesResult& AddThirdPartyFirewallFirewallPolicies(ThirdPartyFirewallFirewallPoliciesT&& value) { m_thirdPartyFirewallFirewallPoliciesHasBeenSet = true; m_thirdPartyFirewallFirewallPolicies.emplace_back(std::forward<ThirdPartyFirewallFirewallPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListThirdPartyFirewallFirewallPolicies</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThirdPartyFirewallFirewallPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThirdPartyFirewallFirewallPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ThirdPartyFirewallFirewallPolicy> m_thirdPartyFirewallFirewallPolicies;
    bool m_thirdPartyFirewallFirewallPoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
