﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes a stale rule in a security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/StaleIpPermission">AWS
   * API Reference</a></p>
   */
  class StaleIpPermission
  {
  public:
    AWS_EC2_API StaleIpPermission();
    AWS_EC2_API StaleIpPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API StaleIpPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline StaleIpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>,
     * <code>icmpv6</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }
    inline StaleIpPermission& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}
    inline StaleIpPermission& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}
    inline StaleIpPermission& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpRanges() const{ return m_ipRanges; }
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }
    inline void SetIpRanges(const Aws::Vector<Aws::String>& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }
    inline void SetIpRanges(Aws::Vector<Aws::String>&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::move(value); }
    inline StaleIpPermission& WithIpRanges(const Aws::Vector<Aws::String>& value) { SetIpRanges(value); return *this;}
    inline StaleIpPermission& WithIpRanges(Aws::Vector<Aws::String>&& value) { SetIpRanges(std::move(value)); return *this;}
    inline StaleIpPermission& AddIpRanges(const Aws::String& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }
    inline StaleIpPermission& AddIpRanges(Aws::String&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(std::move(value)); return *this; }
    inline StaleIpPermission& AddIpRanges(const char* value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The prefix list IDs. Not applicable for stale security group rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrefixListIds() const{ return m_prefixListIds; }
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }
    inline void SetPrefixListIds(const Aws::Vector<Aws::String>& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = value; }
    inline void SetPrefixListIds(Aws::Vector<Aws::String>&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::move(value); }
    inline StaleIpPermission& WithPrefixListIds(const Aws::Vector<Aws::String>& value) { SetPrefixListIds(value); return *this;}
    inline StaleIpPermission& WithPrefixListIds(Aws::Vector<Aws::String>&& value) { SetPrefixListIds(std::move(value)); return *this;}
    inline StaleIpPermission& AddPrefixListIds(const Aws::String& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }
    inline StaleIpPermission& AddPrefixListIds(Aws::String&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(std::move(value)); return *this; }
    inline StaleIpPermission& AddPrefixListIds(const char* value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the protocol is TCP or UDP, this is the end of the port range. If the
     * protocol is ICMP or ICMPv6, this is the ICMP code or -1 (all ICMP codes).</p>
     */
    inline int GetToPort() const{ return m_toPort; }
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }
    inline StaleIpPermission& WithToPort(int value) { SetToPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline const Aws::Vector<UserIdGroupPair>& GetUserIdGroupPairs() const{ return m_userIdGroupPairs; }
    inline bool UserIdGroupPairsHasBeenSet() const { return m_userIdGroupPairsHasBeenSet; }
    inline void SetUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = value; }
    inline void SetUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = std::move(value); }
    inline StaleIpPermission& WithUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { SetUserIdGroupPairs(value); return *this;}
    inline StaleIpPermission& WithUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { SetUserIdGroupPairs(std::move(value)); return *this;}
    inline StaleIpPermission& AddUserIdGroupPairs(const UserIdGroupPair& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(value); return *this; }
    inline StaleIpPermission& AddUserIdGroupPairs(UserIdGroupPair&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet = false;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipRanges;
    bool m_ipRangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet = false;

    int m_toPort;
    bool m_toPortHasBeenSet = false;

    Aws::Vector<UserIdGroupPair> m_userIdGroupPairs;
    bool m_userIdGroupPairsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
