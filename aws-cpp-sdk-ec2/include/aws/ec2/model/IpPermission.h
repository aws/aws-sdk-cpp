/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/IpRange.h>
#include <aws/ec2/model/PrefixListId.h>

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
   * <p>Describes a security group rule.</p>
   */
  class AWS_EC2_API IpPermission
  {
  public:
    IpPermission();
    IpPermission(const Aws::Utils::Xml::XmlNode& xmlNode);
    IpPermission& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>[EC2-VPC only] When you authorize or revoke security group
     * rules, you can use <code>-1</code> to specify all.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>[EC2-VPC only] When you authorize or revoke security group
     * rules, you can use <code>-1</code> to specify all.</p>
     */
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>[EC2-VPC only] When you authorize or revoke security group
     * rules, you can use <code>-1</code> to specify all.</p>
     */
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>[EC2-VPC only] When you authorize or revoke security group
     * rules, you can use <code>-1</code> to specify all.</p>
     */
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>[EC2-VPC only] When you authorize or revoke security group
     * rules, you can use <code>-1</code> to specify all.</p>
     */
    inline IpPermission& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>[EC2-VPC only] When you authorize or revoke security group
     * rules, you can use <code>-1</code> to specify all.</p>
     */
    inline IpPermission& WithIpProtocol(Aws::String&& value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and
     * <code>icmp</code>) or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). </p> <p>[EC2-VPC only] When you authorize or revoke security group
     * rules, you can use <code>-1</code> to specify all.</p>
     */
    inline IpPermission& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP type
     * number. A value of <code>-1</code> indicates all ICMP types.</p>
     */
    inline IpPermission& WithFromPort(int value) { SetFromPort(value); return *this;}

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP code. A value
     * of <code>-1</code> indicates all ICMP codes for the specified ICMP type.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP code. A value
     * of <code>-1</code> indicates all ICMP codes for the specified ICMP type.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP code. A value
     * of <code>-1</code> indicates all ICMP codes for the specified ICMP type.</p>
     */
    inline IpPermission& WithToPort(int value) { SetToPort(value); return *this;}

    /**
     * <p>One or more security group and AWS account ID pairs.</p>
     */
    inline const Aws::Vector<UserIdGroupPair>& GetUserIdGroupPairs() const{ return m_userIdGroupPairs; }

    /**
     * <p>One or more security group and AWS account ID pairs.</p>
     */
    inline void SetUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = value; }

    /**
     * <p>One or more security group and AWS account ID pairs.</p>
     */
    inline void SetUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs = value; }

    /**
     * <p>One or more security group and AWS account ID pairs.</p>
     */
    inline IpPermission& WithUserIdGroupPairs(const Aws::Vector<UserIdGroupPair>& value) { SetUserIdGroupPairs(value); return *this;}

    /**
     * <p>One or more security group and AWS account ID pairs.</p>
     */
    inline IpPermission& WithUserIdGroupPairs(Aws::Vector<UserIdGroupPair>&& value) { SetUserIdGroupPairs(value); return *this;}

    /**
     * <p>One or more security group and AWS account ID pairs.</p>
     */
    inline IpPermission& AddUserIdGroupPairs(const UserIdGroupPair& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(value); return *this; }

    /**
     * <p>One or more security group and AWS account ID pairs.</p>
     */
    inline IpPermission& AddUserIdGroupPairs(UserIdGroupPair&& value) { m_userIdGroupPairsHasBeenSet = true; m_userIdGroupPairs.push_back(value); return *this; }

    /**
     * <p>One or more IP ranges.</p>
     */
    inline const Aws::Vector<IpRange>& GetIpRanges() const{ return m_ipRanges; }

    /**
     * <p>One or more IP ranges.</p>
     */
    inline void SetIpRanges(const Aws::Vector<IpRange>& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }

    /**
     * <p>One or more IP ranges.</p>
     */
    inline void SetIpRanges(Aws::Vector<IpRange>&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = value; }

    /**
     * <p>One or more IP ranges.</p>
     */
    inline IpPermission& WithIpRanges(const Aws::Vector<IpRange>& value) { SetIpRanges(value); return *this;}

    /**
     * <p>One or more IP ranges.</p>
     */
    inline IpPermission& WithIpRanges(Aws::Vector<IpRange>&& value) { SetIpRanges(value); return *this;}

    /**
     * <p>One or more IP ranges.</p>
     */
    inline IpPermission& AddIpRanges(const IpRange& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }

    /**
     * <p>One or more IP ranges.</p>
     */
    inline IpPermission& AddIpRanges(IpRange&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.push_back(value); return *this; }

    /**
     * <p>(Valid for <a>AuthorizeSecurityGroupEgress</a>,
     * <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or
     * more prefix list IDs for an AWS service. In an
     * <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you
     * want to access through a VPC endpoint from instances associated with the
     * security group.</p>
     */
    inline const Aws::Vector<PrefixListId>& GetPrefixListIds() const{ return m_prefixListIds; }

    /**
     * <p>(Valid for <a>AuthorizeSecurityGroupEgress</a>,
     * <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or
     * more prefix list IDs for an AWS service. In an
     * <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you
     * want to access through a VPC endpoint from instances associated with the
     * security group.</p>
     */
    inline void SetPrefixListIds(const Aws::Vector<PrefixListId>& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = value; }

    /**
     * <p>(Valid for <a>AuthorizeSecurityGroupEgress</a>,
     * <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or
     * more prefix list IDs for an AWS service. In an
     * <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you
     * want to access through a VPC endpoint from instances associated with the
     * security group.</p>
     */
    inline void SetPrefixListIds(Aws::Vector<PrefixListId>&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = value; }

    /**
     * <p>(Valid for <a>AuthorizeSecurityGroupEgress</a>,
     * <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or
     * more prefix list IDs for an AWS service. In an
     * <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you
     * want to access through a VPC endpoint from instances associated with the
     * security group.</p>
     */
    inline IpPermission& WithPrefixListIds(const Aws::Vector<PrefixListId>& value) { SetPrefixListIds(value); return *this;}

    /**
     * <p>(Valid for <a>AuthorizeSecurityGroupEgress</a>,
     * <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or
     * more prefix list IDs for an AWS service. In an
     * <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you
     * want to access through a VPC endpoint from instances associated with the
     * security group.</p>
     */
    inline IpPermission& WithPrefixListIds(Aws::Vector<PrefixListId>&& value) { SetPrefixListIds(value); return *this;}

    /**
     * <p>(Valid for <a>AuthorizeSecurityGroupEgress</a>,
     * <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or
     * more prefix list IDs for an AWS service. In an
     * <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you
     * want to access through a VPC endpoint from instances associated with the
     * security group.</p>
     */
    inline IpPermission& AddPrefixListIds(const PrefixListId& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }

    /**
     * <p>(Valid for <a>AuthorizeSecurityGroupEgress</a>,
     * <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or
     * more prefix list IDs for an AWS service. In an
     * <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you
     * want to access through a VPC endpoint from instances associated with the
     * security group.</p>
     */
    inline IpPermission& AddPrefixListIds(PrefixListId&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.push_back(value); return *this; }

  private:
    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet;
    int m_fromPort;
    bool m_fromPortHasBeenSet;
    int m_toPort;
    bool m_toPortHasBeenSet;
    Aws::Vector<UserIdGroupPair> m_userIdGroupPairs;
    bool m_userIdGroupPairsHasBeenSet;
    Aws::Vector<IpRange> m_ipRanges;
    bool m_ipRangesHasBeenSet;
    Aws::Vector<PrefixListId> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
