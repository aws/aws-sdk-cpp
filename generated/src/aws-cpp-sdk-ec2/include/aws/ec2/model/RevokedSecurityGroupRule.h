/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>A security group rule removed with <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RevokeSecurityGroupEgress.html">RevokeSecurityGroupEgress</a>
   * or <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RevokeSecurityGroupIngress.html">RevokeSecurityGroupIngress</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RevokedSecurityGroupRule">AWS
   * API Reference</a></p>
   */
  class RevokedSecurityGroupRule
  {
  public:
    AWS_EC2_API RevokedSecurityGroupRule();
    AWS_EC2_API RevokedSecurityGroupRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RevokedSecurityGroupRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A security group rule ID.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleId() const{ return m_securityGroupRuleId; }
    inline bool SecurityGroupRuleIdHasBeenSet() const { return m_securityGroupRuleIdHasBeenSet; }
    inline void SetSecurityGroupRuleId(const Aws::String& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = value; }
    inline void SetSecurityGroupRuleId(Aws::String&& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = std::move(value); }
    inline void SetSecurityGroupRuleId(const char* value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId.assign(value); }
    inline RevokedSecurityGroupRule& WithSecurityGroupRuleId(const Aws::String& value) { SetSecurityGroupRuleId(value); return *this;}
    inline RevokedSecurityGroupRule& WithSecurityGroupRuleId(Aws::String&& value) { SetSecurityGroupRuleId(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithSecurityGroupRuleId(const char* value) { SetSecurityGroupRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A security group ID.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline RevokedSecurityGroupRule& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline RevokedSecurityGroupRule& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if a security group rule is an outbound rule.</p>
     */
    inline bool GetIsEgress() const{ return m_isEgress; }
    inline bool IsEgressHasBeenSet() const { return m_isEgressHasBeenSet; }
    inline void SetIsEgress(bool value) { m_isEgressHasBeenSet = true; m_isEgress = value; }
    inline RevokedSecurityGroupRule& WithIsEgress(bool value) { SetIsEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group rule's protocol.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }
    inline RevokedSecurityGroupRule& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}
    inline RevokedSecurityGroupRule& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'from' port number of the security group rule.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline RevokedSecurityGroupRule& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'to' port number of the security group rule.</p>
     */
    inline int GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline RevokedSecurityGroupRule& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR of the traffic source.</p>
     */
    inline const Aws::String& GetCidrIpv4() const{ return m_cidrIpv4; }
    inline bool CidrIpv4HasBeenSet() const { return m_cidrIpv4HasBeenSet; }
    inline void SetCidrIpv4(const Aws::String& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = value; }
    inline void SetCidrIpv4(Aws::String&& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = std::move(value); }
    inline void SetCidrIpv4(const char* value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4.assign(value); }
    inline RevokedSecurityGroupRule& WithCidrIpv4(const Aws::String& value) { SetCidrIpv4(value); return *this;}
    inline RevokedSecurityGroupRule& WithCidrIpv4(Aws::String&& value) { SetCidrIpv4(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithCidrIpv4(const char* value) { SetCidrIpv4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR of the traffic source.</p>
     */
    inline const Aws::String& GetCidrIpv6() const{ return m_cidrIpv6; }
    inline bool CidrIpv6HasBeenSet() const { return m_cidrIpv6HasBeenSet; }
    inline void SetCidrIpv6(const Aws::String& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = value; }
    inline void SetCidrIpv6(Aws::String&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = std::move(value); }
    inline void SetCidrIpv6(const char* value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6.assign(value); }
    inline RevokedSecurityGroupRule& WithCidrIpv6(const Aws::String& value) { SetCidrIpv6(value); return *this;}
    inline RevokedSecurityGroupRule& WithCidrIpv6(Aws::String&& value) { SetCidrIpv6(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithCidrIpv6(const char* value) { SetCidrIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a prefix list that's the traffic source.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline RevokedSecurityGroupRule& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline RevokedSecurityGroupRule& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a referenced security group.</p>
     */
    inline const Aws::String& GetReferencedGroupId() const{ return m_referencedGroupId; }
    inline bool ReferencedGroupIdHasBeenSet() const { return m_referencedGroupIdHasBeenSet; }
    inline void SetReferencedGroupId(const Aws::String& value) { m_referencedGroupIdHasBeenSet = true; m_referencedGroupId = value; }
    inline void SetReferencedGroupId(Aws::String&& value) { m_referencedGroupIdHasBeenSet = true; m_referencedGroupId = std::move(value); }
    inline void SetReferencedGroupId(const char* value) { m_referencedGroupIdHasBeenSet = true; m_referencedGroupId.assign(value); }
    inline RevokedSecurityGroupRule& WithReferencedGroupId(const Aws::String& value) { SetReferencedGroupId(value); return *this;}
    inline RevokedSecurityGroupRule& WithReferencedGroupId(Aws::String&& value) { SetReferencedGroupId(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithReferencedGroupId(const char* value) { SetReferencedGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the revoked security group rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RevokedSecurityGroupRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RevokedSecurityGroupRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RevokedSecurityGroupRule& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    bool m_isEgress;
    bool m_isEgressHasBeenSet = false;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    Aws::String m_cidrIpv4;
    bool m_cidrIpv4HasBeenSet = false;

    Aws::String m_cidrIpv6;
    bool m_cidrIpv6HasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    Aws::String m_referencedGroupId;
    bool m_referencedGroupIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
