﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpRange.h>
#include <aws/ec2/model/Ipv6Range.h>
#include <aws/ec2/model/PrefixListId.h>
#include <aws/ec2/model/UserIdGroupPair.h>
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
    AWS_EC2_API IpPermission();
    AWS_EC2_API IpPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the start of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP type or -1 (all ICMP types).</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }
    inline IpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

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
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }
    inline IpPermission& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}
    inline IpPermission& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}
    inline IpPermission& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address ranges.</p>
     */
    inline const Aws::Vector<IpRange>& GetIpRanges() const{ return m_ipRanges; }
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }
    inline void SetIpRanges(const Aws::Vector<IpRange>& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }
    inline void SetIpRanges(Aws::Vector<IpRange>&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::move(value); }
    inline IpPermission& WithIpRanges(const Aws::Vector<IpRange>& value) { SetIpRanges(value); return *this;}
    inline IpPermission& WithIpRanges(Aws::Vector<IpRange>&& value) { SetIpRanges(std::move(value)); return *this;}
    inline IpPermission& AddIpRanges(const IpRange& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }
    inline IpPermission& AddIpRanges(IpRange&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IPv6 address ranges.</p>
     */
    inline const Aws::Vector<Ipv6Range>& GetIpv6Ranges() const{ return m_ipv6Ranges; }
    inline bool Ipv6RangesHasBeenSet() const { return m_ipv6RangesHasBeenSet; }
    inline void SetIpv6Ranges(const Aws::Vector<Ipv6Range>& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges = value; }
    inline void SetIpv6Ranges(Aws::Vector<Ipv6Range>&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges = std::move(value); }
    inline IpPermission& WithIpv6Ranges(const Aws::Vector<Ipv6Range>& value) { SetIpv6Ranges(value); return *this;}
    inline IpPermission& WithIpv6Ranges(Aws::Vector<Ipv6Range>&& value) { SetIpv6Ranges(std::move(value)); return *this;}
    inline IpPermission& AddIpv6Ranges(const Ipv6Range& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges.push_back(value); return *this; }
    inline IpPermission& AddIpv6Ranges(Ipv6Range&& value) { m_ipv6RangesHasBeenSet = true; m_ipv6Ranges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prefix list IDs.</p>
     */
    inline const Aws::Vector<PrefixListId>& GetPrefixListIds() const{ return m_prefixListIds; }
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }
    inline void SetPrefixListIds(const Aws::Vector<PrefixListId>& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = value; }
    inline void SetPrefixListIds(Aws::Vector<PrefixListId>&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::move(value); }
    inline IpPermission& WithPrefixListIds(const Aws::Vector<PrefixListId>& value) { SetPrefixListIds(value); return *this;}
    inline IpPermission& WithPrefixListIds(Aws::Vector<PrefixListId>&& value) { SetPrefixListIds(std::move(value)); return *this;}
    inline IpPermission& AddPrefixListIds(const PrefixListId& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }
    inline IpPermission& AddPrefixListIds(PrefixListId&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(std::move(value)); return *this; }
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
    inline IpPermission& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group and Amazon Web Services account ID pairs.</p>
     */
    inline const Aws::Vector<UserIdGroupPair>& GetUserIdGroupPairs() const{ return m_userIdGroupPairs; }
    inline bool UserIdGroupPairsHasBeenSet() const { return m_userIdGroupPairsHasBeenSet; }
    inline void SetUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = value; }
    inline void SetUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = std::move(value); }
    inline IpPermission& WithUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { SetUserIdGroupPairs(value); return *this;}
    inline IpPermission& WithUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { SetUserIdGroupPairs(std::move(value)); return *this;}
    inline IpPermission& AddUserIdGroupPairs(const UserIdGroupPair& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(value); return *this; }
    inline IpPermission& AddUserIdGroupPairs(UserIdGroupPair&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    Aws::Vector<IpRange> m_ipRanges;
    bool m_ipRangesHasBeenSet = false;

    Aws::Vector<Ipv6Range> m_ipv6Ranges;
    bool m_ipv6RangesHasBeenSet = false;

    Aws::Vector<PrefixListId> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    Aws::Vector<UserIdGroupPair> m_userIdGroupPairs;
    bool m_userIdGroupPairsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
