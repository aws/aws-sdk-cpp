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
    AWS_EC2_API RevokedSecurityGroupRule() = default;
    AWS_EC2_API RevokedSecurityGroupRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RevokedSecurityGroupRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A security group rule ID.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleId() const { return m_securityGroupRuleId; }
    inline bool SecurityGroupRuleIdHasBeenSet() const { return m_securityGroupRuleIdHasBeenSet; }
    template<typename SecurityGroupRuleIdT = Aws::String>
    void SetSecurityGroupRuleId(SecurityGroupRuleIdT&& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = std::forward<SecurityGroupRuleIdT>(value); }
    template<typename SecurityGroupRuleIdT = Aws::String>
    RevokedSecurityGroupRule& WithSecurityGroupRuleId(SecurityGroupRuleIdT&& value) { SetSecurityGroupRuleId(std::forward<SecurityGroupRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A security group ID.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    RevokedSecurityGroupRule& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines if a security group rule is an outbound rule.</p>
     */
    inline bool GetIsEgress() const { return m_isEgress; }
    inline bool IsEgressHasBeenSet() const { return m_isEgressHasBeenSet; }
    inline void SetIsEgress(bool value) { m_isEgressHasBeenSet = true; m_isEgress = value; }
    inline RevokedSecurityGroupRule& WithIsEgress(bool value) { SetIsEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group rule's protocol.</p>
     */
    inline const Aws::String& GetIpProtocol() const { return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    template<typename IpProtocolT = Aws::String>
    void SetIpProtocol(IpProtocolT&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::forward<IpProtocolT>(value); }
    template<typename IpProtocolT = Aws::String>
    RevokedSecurityGroupRule& WithIpProtocol(IpProtocolT&& value) { SetIpProtocol(std::forward<IpProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'from' port number of the security group rule.</p>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline RevokedSecurityGroupRule& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The 'to' port number of the security group rule.</p>
     */
    inline int GetToPort() const { return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline RevokedSecurityGroupRule& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR of the traffic source.</p>
     */
    inline const Aws::String& GetCidrIpv4() const { return m_cidrIpv4; }
    inline bool CidrIpv4HasBeenSet() const { return m_cidrIpv4HasBeenSet; }
    template<typename CidrIpv4T = Aws::String>
    void SetCidrIpv4(CidrIpv4T&& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = std::forward<CidrIpv4T>(value); }
    template<typename CidrIpv4T = Aws::String>
    RevokedSecurityGroupRule& WithCidrIpv4(CidrIpv4T&& value) { SetCidrIpv4(std::forward<CidrIpv4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR of the traffic source.</p>
     */
    inline const Aws::String& GetCidrIpv6() const { return m_cidrIpv6; }
    inline bool CidrIpv6HasBeenSet() const { return m_cidrIpv6HasBeenSet; }
    template<typename CidrIpv6T = Aws::String>
    void SetCidrIpv6(CidrIpv6T&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = std::forward<CidrIpv6T>(value); }
    template<typename CidrIpv6T = Aws::String>
    RevokedSecurityGroupRule& WithCidrIpv6(CidrIpv6T&& value) { SetCidrIpv6(std::forward<CidrIpv6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a prefix list that's the traffic source.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    RevokedSecurityGroupRule& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a referenced security group.</p>
     */
    inline const Aws::String& GetReferencedGroupId() const { return m_referencedGroupId; }
    inline bool ReferencedGroupIdHasBeenSet() const { return m_referencedGroupIdHasBeenSet; }
    template<typename ReferencedGroupIdT = Aws::String>
    void SetReferencedGroupId(ReferencedGroupIdT&& value) { m_referencedGroupIdHasBeenSet = true; m_referencedGroupId = std::forward<ReferencedGroupIdT>(value); }
    template<typename ReferencedGroupIdT = Aws::String>
    RevokedSecurityGroupRule& WithReferencedGroupId(ReferencedGroupIdT&& value) { SetReferencedGroupId(std::forward<ReferencedGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the revoked security group rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RevokedSecurityGroupRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    bool m_isEgress{false};
    bool m_isEgressHasBeenSet = false;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    int m_fromPort{0};
    bool m_fromPortHasBeenSet = false;

    int m_toPort{0};
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
