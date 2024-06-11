﻿/**
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
    AWS_FMS_API ListThirdPartyFirewallFirewallPoliciesResult();
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
    inline const Aws::Vector<ThirdPartyFirewallFirewallPolicy>& GetThirdPartyFirewallFirewallPolicies() const{ return m_thirdPartyFirewallFirewallPolicies; }
    inline void SetThirdPartyFirewallFirewallPolicies(const Aws::Vector<ThirdPartyFirewallFirewallPolicy>& value) { m_thirdPartyFirewallFirewallPolicies = value; }
    inline void SetThirdPartyFirewallFirewallPolicies(Aws::Vector<ThirdPartyFirewallFirewallPolicy>&& value) { m_thirdPartyFirewallFirewallPolicies = std::move(value); }
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithThirdPartyFirewallFirewallPolicies(const Aws::Vector<ThirdPartyFirewallFirewallPolicy>& value) { SetThirdPartyFirewallFirewallPolicies(value); return *this;}
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithThirdPartyFirewallFirewallPolicies(Aws::Vector<ThirdPartyFirewallFirewallPolicy>&& value) { SetThirdPartyFirewallFirewallPolicies(std::move(value)); return *this;}
    inline ListThirdPartyFirewallFirewallPoliciesResult& AddThirdPartyFirewallFirewallPolicies(const ThirdPartyFirewallFirewallPolicy& value) { m_thirdPartyFirewallFirewallPolicies.push_back(value); return *this; }
    inline ListThirdPartyFirewallFirewallPoliciesResult& AddThirdPartyFirewallFirewallPolicies(ThirdPartyFirewallFirewallPolicy&& value) { m_thirdPartyFirewallFirewallPolicies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value that you will use for <code>NextToken</code> in the next
     * <code>ListThirdPartyFirewallFirewallPolicies</code> request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListThirdPartyFirewallFirewallPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ThirdPartyFirewallFirewallPolicy> m_thirdPartyFirewallFirewallPolicies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
