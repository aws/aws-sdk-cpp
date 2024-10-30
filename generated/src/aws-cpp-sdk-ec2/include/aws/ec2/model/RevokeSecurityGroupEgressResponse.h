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
  class RevokeSecurityGroupEgressResponse
  {
  public:
    AWS_EC2_API RevokeSecurityGroupEgressResponse();
    AWS_EC2_API RevokeSecurityGroupEgressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RevokeSecurityGroupEgressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, returns an
     * error.</p>
     */
    inline bool GetReturn() const{ return m_return; }
    inline void SetReturn(bool value) { m_return = value; }
    inline RevokeSecurityGroupEgressResponse& WithReturn(bool value) { SetReturn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The outbound rules that were unknown to the service. In some cases,
     * <code>unknownIpPermissionSet</code> might be in a different format from the
     * request parameter. </p>
     */
    inline const Aws::Vector<IpPermission>& GetUnknownIpPermissions() const{ return m_unknownIpPermissions; }
    inline void SetUnknownIpPermissions(const Aws::Vector<IpPermission>& value) { m_unknownIpPermissions = value; }
    inline void SetUnknownIpPermissions(Aws::Vector<IpPermission>&& value) { m_unknownIpPermissions = std::move(value); }
    inline RevokeSecurityGroupEgressResponse& WithUnknownIpPermissions(const Aws::Vector<IpPermission>& value) { SetUnknownIpPermissions(value); return *this;}
    inline RevokeSecurityGroupEgressResponse& WithUnknownIpPermissions(Aws::Vector<IpPermission>&& value) { SetUnknownIpPermissions(std::move(value)); return *this;}
    inline RevokeSecurityGroupEgressResponse& AddUnknownIpPermissions(const IpPermission& value) { m_unknownIpPermissions.push_back(value); return *this; }
    inline RevokeSecurityGroupEgressResponse& AddUnknownIpPermissions(IpPermission&& value) { m_unknownIpPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about the revoked security group rules.</p>
     */
    inline const Aws::Vector<RevokedSecurityGroupRule>& GetRevokedSecurityGroupRules() const{ return m_revokedSecurityGroupRules; }
    inline void SetRevokedSecurityGroupRules(const Aws::Vector<RevokedSecurityGroupRule>& value) { m_revokedSecurityGroupRules = value; }
    inline void SetRevokedSecurityGroupRules(Aws::Vector<RevokedSecurityGroupRule>&& value) { m_revokedSecurityGroupRules = std::move(value); }
    inline RevokeSecurityGroupEgressResponse& WithRevokedSecurityGroupRules(const Aws::Vector<RevokedSecurityGroupRule>& value) { SetRevokedSecurityGroupRules(value); return *this;}
    inline RevokeSecurityGroupEgressResponse& WithRevokedSecurityGroupRules(Aws::Vector<RevokedSecurityGroupRule>&& value) { SetRevokedSecurityGroupRules(std::move(value)); return *this;}
    inline RevokeSecurityGroupEgressResponse& AddRevokedSecurityGroupRules(const RevokedSecurityGroupRule& value) { m_revokedSecurityGroupRules.push_back(value); return *this; }
    inline RevokeSecurityGroupEgressResponse& AddRevokedSecurityGroupRules(RevokedSecurityGroupRule&& value) { m_revokedSecurityGroupRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RevokeSecurityGroupEgressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RevokeSecurityGroupEgressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    bool m_return;

    Aws::Vector<IpPermission> m_unknownIpPermissions;

    Aws::Vector<RevokedSecurityGroupRule> m_revokedSecurityGroupRules;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
