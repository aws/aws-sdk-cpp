/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/AuthorizationRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class DescribeClientVpnAuthorizationRulesResponse
  {
  public:
    AWS_EC2_API DescribeClientVpnAuthorizationRulesResponse();
    AWS_EC2_API DescribeClientVpnAuthorizationRulesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeClientVpnAuthorizationRulesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the authorization rules.</p>
     */
    inline const Aws::Vector<AuthorizationRule>& GetAuthorizationRules() const{ return m_authorizationRules; }

    /**
     * <p>Information about the authorization rules.</p>
     */
    inline void SetAuthorizationRules(const Aws::Vector<AuthorizationRule>& value) { m_authorizationRules = value; }

    /**
     * <p>Information about the authorization rules.</p>
     */
    inline void SetAuthorizationRules(Aws::Vector<AuthorizationRule>&& value) { m_authorizationRules = std::move(value); }

    /**
     * <p>Information about the authorization rules.</p>
     */
    inline DescribeClientVpnAuthorizationRulesResponse& WithAuthorizationRules(const Aws::Vector<AuthorizationRule>& value) { SetAuthorizationRules(value); return *this;}

    /**
     * <p>Information about the authorization rules.</p>
     */
    inline DescribeClientVpnAuthorizationRulesResponse& WithAuthorizationRules(Aws::Vector<AuthorizationRule>&& value) { SetAuthorizationRules(std::move(value)); return *this;}

    /**
     * <p>Information about the authorization rules.</p>
     */
    inline DescribeClientVpnAuthorizationRulesResponse& AddAuthorizationRules(const AuthorizationRule& value) { m_authorizationRules.push_back(value); return *this; }

    /**
     * <p>Information about the authorization rules.</p>
     */
    inline DescribeClientVpnAuthorizationRulesResponse& AddAuthorizationRules(AuthorizationRule&& value) { m_authorizationRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnAuthorizationRulesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnAuthorizationRulesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeClientVpnAuthorizationRulesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeClientVpnAuthorizationRulesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClientVpnAuthorizationRulesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AuthorizationRule> m_authorizationRules;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
