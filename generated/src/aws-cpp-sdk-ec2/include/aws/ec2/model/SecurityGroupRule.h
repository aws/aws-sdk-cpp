/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReferencedSecurityGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a security group rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupRule">AWS
   * API Reference</a></p>
   */
  class SecurityGroupRule
  {
  public:
    AWS_EC2_API SecurityGroupRule() = default;
    AWS_EC2_API SecurityGroupRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the security group rule.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleId() const { return m_securityGroupRuleId; }
    inline bool SecurityGroupRuleIdHasBeenSet() const { return m_securityGroupRuleIdHasBeenSet; }
    template<typename SecurityGroupRuleIdT = Aws::String>
    void SetSecurityGroupRuleId(SecurityGroupRuleIdT&& value) { m_securityGroupRuleIdHasBeenSet = true; m_securityGroupRuleId = std::forward<SecurityGroupRuleIdT>(value); }
    template<typename SecurityGroupRuleIdT = Aws::String>
    SecurityGroupRule& WithSecurityGroupRuleId(SecurityGroupRuleIdT&& value) { SetSecurityGroupRuleId(std::forward<SecurityGroupRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    SecurityGroupRule& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the security group. </p>
     */
    inline const Aws::String& GetGroupOwnerId() const { return m_groupOwnerId; }
    inline bool GroupOwnerIdHasBeenSet() const { return m_groupOwnerIdHasBeenSet; }
    template<typename GroupOwnerIdT = Aws::String>
    void SetGroupOwnerId(GroupOwnerIdT&& value) { m_groupOwnerIdHasBeenSet = true; m_groupOwnerId = std::forward<GroupOwnerIdT>(value); }
    template<typename GroupOwnerIdT = Aws::String>
    SecurityGroupRule& WithGroupOwnerId(GroupOwnerIdT&& value) { SetGroupOwnerId(std::forward<GroupOwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the security group rule is an outbound rule.</p>
     */
    inline bool GetIsEgress() const { return m_isEgress; }
    inline bool IsEgressHasBeenSet() const { return m_isEgressHasBeenSet; }
    inline void SetIsEgress(bool value) { m_isEgressHasBeenSet = true; m_isEgress = value; }
    inline SecurityGroupRule& WithIsEgress(bool value) { SetIsEgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>,
     * <code>icmpv6</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>Use <code>-1</code> to specify all protocols.</p>
     */
    inline const Aws::String& GetIpProtocol() const { return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    template<typename IpProtocolT = Aws::String>
    void SetIpProtocol(IpProtocolT&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::forward<IpProtocolT>(value); }
    template<typename IpProtocolT = Aws::String>
    SecurityGroupRule& WithIpProtocol(IpProtocolT&& value) { SetIpProtocol(std::forward<IpProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the start of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP type or -1 (all ICMP types).</p>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline SecurityGroupRule& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the end of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP code or -1 (all ICMP codes). If the
     * start port is -1 (all ICMP types), then the end port must be -1 (all ICMP
     * codes).</p>
     */
    inline int GetToPort() const { return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline SecurityGroupRule& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR range.</p>
     */
    inline const Aws::String& GetCidrIpv4() const { return m_cidrIpv4; }
    inline bool CidrIpv4HasBeenSet() const { return m_cidrIpv4HasBeenSet; }
    template<typename CidrIpv4T = Aws::String>
    void SetCidrIpv4(CidrIpv4T&& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = std::forward<CidrIpv4T>(value); }
    template<typename CidrIpv4T = Aws::String>
    SecurityGroupRule& WithCidrIpv4(CidrIpv4T&& value) { SetCidrIpv4(std::forward<CidrIpv4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR range.</p>
     */
    inline const Aws::String& GetCidrIpv6() const { return m_cidrIpv6; }
    inline bool CidrIpv6HasBeenSet() const { return m_cidrIpv6HasBeenSet; }
    template<typename CidrIpv6T = Aws::String>
    void SetCidrIpv6(CidrIpv6T&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = std::forward<CidrIpv6T>(value); }
    template<typename CidrIpv6T = Aws::String>
    SecurityGroupRule& WithCidrIpv6(CidrIpv6T&& value) { SetCidrIpv6(std::forward<CidrIpv6T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const { return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    template<typename PrefixListIdT = Aws::String>
    void SetPrefixListId(PrefixListIdT&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::forward<PrefixListIdT>(value); }
    template<typename PrefixListIdT = Aws::String>
    SecurityGroupRule& WithPrefixListId(PrefixListIdT&& value) { SetPrefixListId(std::forward<PrefixListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the security group that is referenced in the rule.</p>
     */
    inline const ReferencedSecurityGroup& GetReferencedGroupInfo() const { return m_referencedGroupInfo; }
    inline bool ReferencedGroupInfoHasBeenSet() const { return m_referencedGroupInfoHasBeenSet; }
    template<typename ReferencedGroupInfoT = ReferencedSecurityGroup>
    void SetReferencedGroupInfo(ReferencedGroupInfoT&& value) { m_referencedGroupInfoHasBeenSet = true; m_referencedGroupInfo = std::forward<ReferencedGroupInfoT>(value); }
    template<typename ReferencedGroupInfoT = ReferencedSecurityGroup>
    SecurityGroupRule& WithReferencedGroupInfo(ReferencedGroupInfoT&& value) { SetReferencedGroupInfo(std::forward<ReferencedGroupInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group rule description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SecurityGroupRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags applied to the security group rule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    SecurityGroupRule& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    SecurityGroupRule& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the security group rule.</p>
     */
    inline const Aws::String& GetSecurityGroupRuleArn() const { return m_securityGroupRuleArn; }
    inline bool SecurityGroupRuleArnHasBeenSet() const { return m_securityGroupRuleArnHasBeenSet; }
    template<typename SecurityGroupRuleArnT = Aws::String>
    void SetSecurityGroupRuleArn(SecurityGroupRuleArnT&& value) { m_securityGroupRuleArnHasBeenSet = true; m_securityGroupRuleArn = std::forward<SecurityGroupRuleArnT>(value); }
    template<typename SecurityGroupRuleArnT = Aws::String>
    SecurityGroupRule& WithSecurityGroupRuleArn(SecurityGroupRuleArnT&& value) { SetSecurityGroupRuleArn(std::forward<SecurityGroupRuleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityGroupRuleId;
    bool m_securityGroupRuleIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupOwnerId;
    bool m_groupOwnerIdHasBeenSet = false;

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

    ReferencedSecurityGroup m_referencedGroupInfo;
    bool m_referencedGroupInfoHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_securityGroupRuleArn;
    bool m_securityGroupRuleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
