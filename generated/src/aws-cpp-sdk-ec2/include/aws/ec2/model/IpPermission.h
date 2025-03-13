/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/UserIdGroupPair.h>
#include <aws/ec2/model/IpRange.h>
#include <aws/ec2/model/Ipv6Range.h>
#include <aws/ec2/model/PrefixListId.h>
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
   * <p>Describes the permissions for a security group rule.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpPermission">AWS
   * API Reference</a></p>
   */
  class IpPermission
  {
  public:
    AWS_EC2_API IpPermission() = default;
    AWS_EC2_API IpPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>,
     * <code>icmpv6</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>).</p> <p>Use <code>-1</code> to specify all protocols. When
     * authorizing security group rules, specifying <code>-1</code> or a protocol
     * number other than <code>tcp</code>, <code>udp</code>, <code>icmp</code>, or
     * <code>icmpv6</code> allows traffic on all ports, regardless of any port range
     * you specify. For <code>tcp</code>, <code>udp</code>, and <code>icmp</code>, you
     * must specify a port range. For <code>icmpv6</code>, the port range is optional;
     * if you omit the port range, traffic for all types and codes is allowed.</p>
     */
    inline const Aws::String& GetIpProtocol() const { return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    template<typename IpProtocolT = Aws::String>
    void SetIpProtocol(IpProtocolT&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::forward<IpProtocolT>(value); }
    template<typename IpProtocolT = Aws::String>
    IpPermission& WithIpProtocol(IpProtocolT&& value) { SetIpProtocol(std::forward<IpProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the start of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP type or -1 (all ICMP types).</p>
     */
    inline int GetFromPort() const { return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline IpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}
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
    inline IpPermission& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline const Aws::Vector<UserIdGroupPair>& GetUserIdGroupPairs() const { return m_userIdGroupPairs; }
    inline bool UserIdGroupPairsHasBeenSet() const { return m_userIdGroupPairsHasBeenSet; }
    template<typename UserIdGroupPairsT = Aws::Vector<UserIdGroupPair>>
    void SetUserIdGroupPairs(UserIdGroupPairsT&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = std::forward<UserIdGroupPairsT>(value); }
    template<typename UserIdGroupPairsT = Aws::Vector<UserIdGroupPair>>
    IpPermission& WithUserIdGroupPairs(UserIdGroupPairsT&& value) { SetUserIdGroupPairs(std::forward<UserIdGroupPairsT>(value)); return *this;}
    template<typename UserIdGroupPairsT = UserIdGroupPair>
    IpPermission& AddUserIdGroupPairs(UserIdGroupPairsT&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.emplace_back(std::forward<UserIdGroupPairsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv4 address ranges.</p>
     */
    inline const Aws::Vector<IpRange>& GetIpRanges() const { return m_ipRanges; }
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }
    template<typename IpRangesT = Aws::Vector<IpRange>>
    void SetIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::forward<IpRangesT>(value); }
    template<typename IpRangesT = Aws::Vector<IpRange>>
    IpPermission& WithIpRanges(IpRangesT&& value) { SetIpRanges(std::forward<IpRangesT>(value)); return *this;}
    template<typename IpRangesT = IpRange>
    IpPermission& AddIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.emplace_back(std::forward<IpRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 address ranges.</p>
     */
    inline const Aws::Vector<Ipv6Range>& GetIpv6Ranges() const { return m_ipv6Ranges; }
    inline bool Ipv6RangesHasBeenSet() const { return m_ipv6RangesHasBeenSet; }
    template<typename Ipv6RangesT = Aws::Vector<Ipv6Range>>
    void SetIpv6Ranges(Ipv6RangesT&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges = std::forward<Ipv6RangesT>(value); }
    template<typename Ipv6RangesT = Aws::Vector<Ipv6Range>>
    IpPermission& WithIpv6Ranges(Ipv6RangesT&& value) { SetIpv6Ranges(std::forward<Ipv6RangesT>(value)); return *this;}
    template<typename Ipv6RangesT = Ipv6Range>
    IpPermission& AddIpv6Ranges(Ipv6RangesT&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges.emplace_back(std::forward<Ipv6RangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prefix list IDs.</p>
     */
    inline const Aws::Vector<PrefixListId>& GetPrefixListIds() const { return m_prefixListIds; }
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }
    template<typename PrefixListIdsT = Aws::Vector<PrefixListId>>
    void SetPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::forward<PrefixListIdsT>(value); }
    template<typename PrefixListIdsT = Aws::Vector<PrefixListId>>
    IpPermission& WithPrefixListIds(PrefixListIdsT&& value) { SetPrefixListIds(std::forward<PrefixListIdsT>(value)); return *this;}
    template<typename PrefixListIdsT = PrefixListId>
    IpPermission& AddPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.emplace_back(std::forward<PrefixListIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    int m_fromPort{0};
    bool m_fromPortHasBeenSet = false;

    int m_toPort{0};
    bool m_toPortHasBeenSet = false;

    Aws::Vector<UserIdGroupPair> m_userIdGroupPairs;
    bool m_userIdGroupPairsHasBeenSet = false;

    Aws::Vector<IpRange> m_ipRanges;
    bool m_ipRangesHasBeenSet = false;

    Aws::Vector<Ipv6Range> m_ipv6Ranges;
    bool m_ipv6RangesHasBeenSet = false;

    Aws::Vector<PrefixListId> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
