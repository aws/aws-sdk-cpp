/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/IpPermission.h>
#include <aws/ec2/model/RevokedSecurityGroupRule.h>
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
  class RevokeSecurityGroupIngressResponse
  {
  public:
    AWS_EC2_API RevokeSecurityGroupIngressResponse() = default;
    AWS_EC2_API RevokeSecurityGroupIngressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RevokeSecurityGroupIngressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline bool GetReturn() const { return m_return; }
    inline void SetReturn(bool value) { m_returnHasBeenSet = true; m_return = value; }
    inline RevokeSecurityGroupIngressResponse& WithReturn(bool value) { SetReturn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline const Aws::Vector<IpPermission>& GetUnknownIpPermissions() const { return m_unknownIpPermissions; }
    template<typename UnknownIpPermissionsT = Aws::Vector<IpPermission>>
    void SetUnknownIpPermissions(UnknownIpPermissionsT&& value) { m_unknownIpPermissionsHasBeenSet = true; m_unknownIpPermissions = std::forward<UnknownIpPermissionsT>(value); }
    template<typename UnknownIpPermissionsT = Aws::Vector<IpPermission>>
    RevokeSecurityGroupIngressResponse& WithUnknownIpPermissions(UnknownIpPermissionsT&& value) { SetUnknownIpPermissions(std::forward<UnknownIpPermissionsT>(value)); return *this;}
    template<typename UnknownIpPermissionsT = IpPermission>
    RevokeSecurityGroupIngressResponse& AddUnknownIpPermissions(UnknownIpPermissionsT&& value) { m_unknownIpPermissionsHasBeenSet = true; m_unknownIpPermissions.emplace_back(std::forward<UnknownIpPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the revoked security group rules.</p>
     */
    inline const Aws::Vector<RevokedSecurityGroupRule>& GetRevokedSecurityGroupRules() const { return m_revokedSecurityGroupRules; }
    template<typename RevokedSecurityGroupRulesT = Aws::Vector<RevokedSecurityGroupRule>>
    void SetRevokedSecurityGroupRules(RevokedSecurityGroupRulesT&& value) { m_revokedSecurityGroupRulesHasBeenSet = true; m_revokedSecurityGroupRules = std::forward<RevokedSecurityGroupRulesT>(value); }
    template<typename RevokedSecurityGroupRulesT = Aws::Vector<RevokedSecurityGroupRule>>
    RevokeSecurityGroupIngressResponse& WithRevokedSecurityGroupRules(RevokedSecurityGroupRulesT&& value) { SetRevokedSecurityGroupRules(std::forward<RevokedSecurityGroupRulesT>(value)); return *this;}
    template<typename RevokedSecurityGroupRulesT = RevokedSecurityGroupRule>
    RevokeSecurityGroupIngressResponse& AddRevokedSecurityGroupRules(RevokedSecurityGroupRulesT&& value) { m_revokedSecurityGroupRulesHasBeenSet = true; m_revokedSecurityGroupRules.emplace_back(std::forward<RevokedSecurityGroupRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RevokeSecurityGroupIngressResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_return{false};
    bool m_returnHasBeenSet = false;

    Aws::Vector<IpPermission> m_unknownIpPermissions;
    bool m_unknownIpPermissionsHasBeenSet = false;

    Aws::Vector<RevokedSecurityGroupRule> m_revokedSecurityGroupRules;
    bool m_revokedSecurityGroupRulesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
