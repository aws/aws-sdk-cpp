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
   * <p>Describes a security group rule.</p> <p>You must specify exactly one of the
   * following parameters, based on the rule type:</p> <ul> <li> <p>CidrIpv4</p>
   * </li> <li> <p>CidrIpv6</p> </li> <li> <p>PrefixListId</p> </li> <li>
   * <p>ReferencedGroupId</p> </li> </ul> <p>When you modify a rule, you cannot
   * change the rule type. For example, if the rule uses an IPv4 address range, you
   * must use <code>CidrIpv4</code> to specify a new IPv4 address
   * range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SecurityGroupRuleRequest">AWS
   * API Reference</a></p>
   */
  class SecurityGroupRuleRequest
  {
  public:
    AWS_EC2_API SecurityGroupRuleRequest();
    AWS_EC2_API SecurityGroupRuleRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SecurityGroupRuleRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>,
     * <code>icmpv6</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>Use <code>-1</code> to specify all protocols.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }
    inline SecurityGroupRuleRequest& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}
    inline SecurityGroupRuleRequest& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}
    inline SecurityGroupRuleRequest& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the start of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP type or -1 (all ICMP types).</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline SecurityGroupRuleRequest& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the end of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP code or -1 (all ICMP codes). If the
     * start port is -1 (all ICMP types), then the end port must be -1 (all ICMP
     * codes).</p>
     */
    inline int GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline SecurityGroupRuleRequest& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 CIDR range. To specify a single IPv4 address, use the /32 prefix
     * length. </p>
     */
    inline const Aws::String& GetCidrIpv4() const{ return m_cidrIpv4; }
    inline bool CidrIpv4HasBeenSet() const { return m_cidrIpv4HasBeenSet; }
    inline void SetCidrIpv4(const Aws::String& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = value; }
    inline void SetCidrIpv4(Aws::String&& value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4 = std::move(value); }
    inline void SetCidrIpv4(const char* value) { m_cidrIpv4HasBeenSet = true; m_cidrIpv4.assign(value); }
    inline SecurityGroupRuleRequest& WithCidrIpv4(const Aws::String& value) { SetCidrIpv4(value); return *this;}
    inline SecurityGroupRuleRequest& WithCidrIpv4(Aws::String&& value) { SetCidrIpv4(std::move(value)); return *this;}
    inline SecurityGroupRuleRequest& WithCidrIpv4(const char* value) { SetCidrIpv4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 CIDR range. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline const Aws::String& GetCidrIpv6() const{ return m_cidrIpv6; }
    inline bool CidrIpv6HasBeenSet() const { return m_cidrIpv6HasBeenSet; }
    inline void SetCidrIpv6(const Aws::String& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = value; }
    inline void SetCidrIpv6(Aws::String&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = std::move(value); }
    inline void SetCidrIpv6(const char* value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6.assign(value); }
    inline SecurityGroupRuleRequest& WithCidrIpv6(const Aws::String& value) { SetCidrIpv6(value); return *this;}
    inline SecurityGroupRuleRequest& WithCidrIpv6(Aws::String&& value) { SetCidrIpv6(std::move(value)); return *this;}
    inline SecurityGroupRuleRequest& WithCidrIpv6(const char* value) { SetCidrIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }
    inline SecurityGroupRuleRequest& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}
    inline SecurityGroupRuleRequest& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}
    inline SecurityGroupRuleRequest& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the security group that is referenced in the security group
     * rule.</p>
     */
    inline const Aws::String& GetReferencedGroupId() const{ return m_referencedGroupId; }
    inline bool ReferencedGroupIdHasBeenSet() const { return m_referencedGroupIdHasBeenSet; }
    inline void SetReferencedGroupId(const Aws::String& value) { m_referencedGroupIdHasBeenSet = true; m_referencedGroupId = value; }
    inline void SetReferencedGroupId(Aws::String&& value) { m_referencedGroupIdHasBeenSet = true; m_referencedGroupId = std::move(value); }
    inline void SetReferencedGroupId(const char* value) { m_referencedGroupIdHasBeenSet = true; m_referencedGroupId.assign(value); }
    inline SecurityGroupRuleRequest& WithReferencedGroupId(const Aws::String& value) { SetReferencedGroupId(value); return *this;}
    inline SecurityGroupRuleRequest& WithReferencedGroupId(Aws::String&& value) { SetReferencedGroupId(std::move(value)); return *this;}
    inline SecurityGroupRuleRequest& WithReferencedGroupId(const char* value) { SetReferencedGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the security group rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SecurityGroupRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SecurityGroupRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SecurityGroupRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

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
