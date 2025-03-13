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
  class AuthorizeSecurityGroupEgressResponse
  {
  public:
    AWS_EC2_API AuthorizeSecurityGroupEgressResponse() = default;
    AWS_EC2_API AuthorizeSecurityGroupEgressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AuthorizeSecurityGroupEgressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline bool GetReturn() const { return m_return; }
    inline void SetReturn(bool value) { m_returnHasBeenSet = true; m_return = value; }
    inline AuthorizeSecurityGroupEgressResponse& WithReturn(bool value) { SetReturn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the outbound (egress) security group rules that were
     * added.</p>
     */
    inline const Aws::Vector<SecurityGroupRule>& GetSecurityGroupRules() const { return m_securityGroupRules; }
    template<typename SecurityGroupRulesT = Aws::Vector<SecurityGroupRule>>
    void SetSecurityGroupRules(SecurityGroupRulesT&& value) { m_securityGroupRulesHasBeenSet = true; m_securityGroupRules = std::forward<SecurityGroupRulesT>(value); }
    template<typename SecurityGroupRulesT = Aws::Vector<SecurityGroupRule>>
    AuthorizeSecurityGroupEgressResponse& WithSecurityGroupRules(SecurityGroupRulesT&& value) { SetSecurityGroupRules(std::forward<SecurityGroupRulesT>(value)); return *this;}
    template<typename SecurityGroupRulesT = SecurityGroupRule>
    AuthorizeSecurityGroupEgressResponse& AddSecurityGroupRules(SecurityGroupRulesT&& value) { m_securityGroupRulesHasBeenSet = true; m_securityGroupRules.emplace_back(std::forward<SecurityGroupRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AuthorizeSecurityGroupEgressResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_return{false};
    bool m_returnHasBeenSet = false;

    Aws::Vector<SecurityGroupRule> m_securityGroupRules;
    bool m_securityGroupRulesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
