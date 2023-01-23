/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SecurityGroupRule.h>
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
  class DescribeSecurityGroupRulesResponse
  {
  public:
    AWS_EC2_API DescribeSecurityGroupRulesResponse();
    AWS_EC2_API DescribeSecurityGroupRulesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSecurityGroupRulesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about security group rules.</p>
     */
    inline const Aws::Vector<SecurityGroupRule>& GetSecurityGroupRules() const{ return m_securityGroupRules; }

    /**
     * <p>Information about security group rules.</p>
     */
    inline void SetSecurityGroupRules(const Aws::Vector<SecurityGroupRule>& value) { m_securityGroupRules = value; }

    /**
     * <p>Information about security group rules.</p>
     */
    inline void SetSecurityGroupRules(Aws::Vector<SecurityGroupRule>&& value) { m_securityGroupRules = std::move(value); }

    /**
     * <p>Information about security group rules.</p>
     */
    inline DescribeSecurityGroupRulesResponse& WithSecurityGroupRules(const Aws::Vector<SecurityGroupRule>& value) { SetSecurityGroupRules(value); return *this;}

    /**
     * <p>Information about security group rules.</p>
     */
    inline DescribeSecurityGroupRulesResponse& WithSecurityGroupRules(Aws::Vector<SecurityGroupRule>&& value) { SetSecurityGroupRules(std::move(value)); return *this;}

    /**
     * <p>Information about security group rules.</p>
     */
    inline DescribeSecurityGroupRulesResponse& AddSecurityGroupRules(const SecurityGroupRule& value) { m_securityGroupRules.push_back(value); return *this; }

    /**
     * <p>Information about security group rules.</p>
     */
    inline DescribeSecurityGroupRulesResponse& AddSecurityGroupRules(SecurityGroupRule&& value) { m_securityGroupRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline DescribeSecurityGroupRulesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline DescribeSecurityGroupRulesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline DescribeSecurityGroupRulesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSecurityGroupRulesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSecurityGroupRulesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SecurityGroupRule> m_securityGroupRules;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
