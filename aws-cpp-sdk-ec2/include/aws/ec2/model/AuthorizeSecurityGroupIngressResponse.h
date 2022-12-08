/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AuthorizeSecurityGroupIngressResponse
  {
  public:
    AWS_EC2_API AuthorizeSecurityGroupIngressResponse();
    AWS_EC2_API AuthorizeSecurityGroupIngressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AuthorizeSecurityGroupIngressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline bool GetReturn() const{ return m_return; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline void SetReturn(bool value) { m_return = value; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline AuthorizeSecurityGroupIngressResponse& WithReturn(bool value) { SetReturn(value); return *this;}


    /**
     * <p>Information about the inbound (ingress) security group rules that were
     * added.</p>
     */
    inline const Aws::Vector<SecurityGroupRule>& GetSecurityGroupRules() const{ return m_securityGroupRules; }

    /**
     * <p>Information about the inbound (ingress) security group rules that were
     * added.</p>
     */
    inline void SetSecurityGroupRules(const Aws::Vector<SecurityGroupRule>& value) { m_securityGroupRules = value; }

    /**
     * <p>Information about the inbound (ingress) security group rules that were
     * added.</p>
     */
    inline void SetSecurityGroupRules(Aws::Vector<SecurityGroupRule>&& value) { m_securityGroupRules = std::move(value); }

    /**
     * <p>Information about the inbound (ingress) security group rules that were
     * added.</p>
     */
    inline AuthorizeSecurityGroupIngressResponse& WithSecurityGroupRules(const Aws::Vector<SecurityGroupRule>& value) { SetSecurityGroupRules(value); return *this;}

    /**
     * <p>Information about the inbound (ingress) security group rules that were
     * added.</p>
     */
    inline AuthorizeSecurityGroupIngressResponse& WithSecurityGroupRules(Aws::Vector<SecurityGroupRule>&& value) { SetSecurityGroupRules(std::move(value)); return *this;}

    /**
     * <p>Information about the inbound (ingress) security group rules that were
     * added.</p>
     */
    inline AuthorizeSecurityGroupIngressResponse& AddSecurityGroupRules(const SecurityGroupRule& value) { m_securityGroupRules.push_back(value); return *this; }

    /**
     * <p>Information about the inbound (ingress) security group rules that were
     * added.</p>
     */
    inline AuthorizeSecurityGroupIngressResponse& AddSecurityGroupRules(SecurityGroupRule&& value) { m_securityGroupRules.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AuthorizeSecurityGroupIngressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AuthorizeSecurityGroupIngressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_return;

    Aws::Vector<SecurityGroupRule> m_securityGroupRules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
