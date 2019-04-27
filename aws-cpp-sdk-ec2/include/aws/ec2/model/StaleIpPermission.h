/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API StaleIpPermission
  {
  public:
    StaleIpPermission();
    StaleIpPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    StaleIpPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline bool FromPortHasBeenSet() const { return m_fromPortHasBeenSet; }

    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The start of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline StaleIpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}


    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline bool IpProtocolHasBeenSet() const { return m_ipProtocolHasBeenSet; }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline StaleIpPermission& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline StaleIpPermission& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers)</a>.</p>
     */
    inline StaleIpPermission& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}


    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpRanges() const{ return m_ipRanges; }

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline void SetIpRanges(const Aws::Vector<Aws::String>& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline void SetIpRanges(Aws::Vector<Aws::String>&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::move(value); }

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline StaleIpPermission& WithIpRanges(const Aws::Vector<Aws::String>& value) { SetIpRanges(value); return *this;}

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline StaleIpPermission& WithIpRanges(Aws::Vector<Aws::String>&& value) { SetIpRanges(std::move(value)); return *this;}

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline StaleIpPermission& AddIpRanges(const Aws::String& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline StaleIpPermission& AddIpRanges(Aws::String&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP ranges. Not applicable for stale security group rules.</p>
     */
    inline StaleIpPermission& AddIpRanges(const char* value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }


    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrefixListIds() const{ return m_prefixListIds; }

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline void SetPrefixListIds(const Aws::Vector<Aws::String>& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = value; }

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline void SetPrefixListIds(Aws::Vector<Aws::String>&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::move(value); }

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline StaleIpPermission& WithPrefixListIds(const Aws::Vector<Aws::String>& value) { SetPrefixListIds(value); return *this;}

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline StaleIpPermission& WithPrefixListIds(Aws::Vector<Aws::String>&& value) { SetPrefixListIds(std::move(value)); return *this;}

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline StaleIpPermission& AddPrefixListIds(const Aws::String& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline StaleIpPermission& AddPrefixListIds(Aws::String&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The prefix list IDs for an AWS service. Not applicable for stale security
     * group rules.</p>
     */
    inline StaleIpPermission& AddPrefixListIds(const char* value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }


    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline bool ToPortHasBeenSet() const { return m_toPortHasBeenSet; }

    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The end of the port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types. </p>
     */
    inline StaleIpPermission& WithToPort(int value) { SetToPort(value); return *this;}


    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline const Aws::Vector<UserIdGroupPair>& GetUserIdGroupPairs() const{ return m_userIdGroupPairs; }

    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline bool UserIdGroupPairsHasBeenSet() const { return m_userIdGroupPairsHasBeenSet; }

    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline void SetUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = value; }

    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline void SetUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = std::move(value); }

    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline StaleIpPermission& WithUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { SetUserIdGroupPairs(value); return *this;}

    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline StaleIpPermission& WithUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { SetUserIdGroupPairs(std::move(value)); return *this;}

    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline StaleIpPermission& AddUserIdGroupPairs(const UserIdGroupPair& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(value); return *this; }

    /**
     * <p>The security group pairs. Returns the ID of the referenced security group and
     * VPC, and the ID and status of the VPC peering connection.</p>
     */
    inline StaleIpPermission& AddUserIdGroupPairs(UserIdGroupPair&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(std::move(value)); return *this; }

  private:

    int m_fromPort;
    bool m_fromPortHasBeenSet;

    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet;

    Aws::Vector<Aws::String> m_ipRanges;
    bool m_ipRangesHasBeenSet;

    Aws::Vector<Aws::String> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet;

    int m_toPort;
    bool m_toPortHasBeenSet;

    Aws::Vector<UserIdGroupPair> m_userIdGroupPairs;
    bool m_userIdGroupPairsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
