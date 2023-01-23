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
    AWS_TRANSFER_API ListSecurityPoliciesResult();
    AWS_TRANSFER_API ListSecurityPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListSecurityPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline ListSecurityPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline ListSecurityPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the
     * <code>ListSecurityPolicies</code> operation, a <code>NextToken</code> parameter
     * is returned in the output. In a following command, you can pass in the
     * <code>NextToken</code> parameter to continue listing security policies.</p>
     */
    inline ListSecurityPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityPolicyNames() const{ return m_securityPolicyNames; }

    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline void SetSecurityPolicyNames(const Aws::Vector<Aws::String>& value) { m_securityPolicyNames = value; }

    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline void SetSecurityPolicyNames(Aws::Vector<Aws::String>&& value) { m_securityPolicyNames = std::move(value); }

    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline ListSecurityPoliciesResult& WithSecurityPolicyNames(const Aws::Vector<Aws::String>& value) { SetSecurityPolicyNames(value); return *this;}

    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline ListSecurityPoliciesResult& WithSecurityPolicyNames(Aws::Vector<Aws::String>&& value) { SetSecurityPolicyNames(std::move(value)); return *this;}

    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline ListSecurityPoliciesResult& AddSecurityPolicyNames(const Aws::String& value) { m_securityPolicyNames.push_back(value); return *this; }

    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline ListSecurityPoliciesResult& AddSecurityPolicyNames(Aws::String&& value) { m_securityPolicyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of security policies that were listed.</p>
     */
    inline ListSecurityPoliciesResult& AddSecurityPolicyNames(const char* value) { m_securityPolicyNames.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_securityPolicyNames;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
