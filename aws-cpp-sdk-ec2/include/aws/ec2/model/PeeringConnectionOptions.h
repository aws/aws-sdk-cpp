﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Describes the VPC peering connection options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PeeringConnectionOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API PeeringConnectionOptions
  {
  public:
    PeeringConnectionOptions();
    PeeringConnectionOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    PeeringConnectionOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If true, the public DNS hostnames of instances in the specified VPC resolve
     * to private IP addresses when queried from instances in the peer VPC.</p>
     */
    inline bool GetAllowDnsResolutionFromRemoteVpc() const{ return m_allowDnsResolutionFromRemoteVpc; }

    /**
     * <p>If true, the public DNS hostnames of instances in the specified VPC resolve
     * to private IP addresses when queried from instances in the peer VPC.</p>
     */
    inline bool AllowDnsResolutionFromRemoteVpcHasBeenSet() const { return m_allowDnsResolutionFromRemoteVpcHasBeenSet; }

    /**
     * <p>If true, the public DNS hostnames of instances in the specified VPC resolve
     * to private IP addresses when queried from instances in the peer VPC.</p>
     */
    inline void SetAllowDnsResolutionFromRemoteVpc(bool value) { m_allowDnsResolutionFromRemoteVpcHasBeenSet = true; m_allowDnsResolutionFromRemoteVpc = value; }

    /**
     * <p>If true, the public DNS hostnames of instances in the specified VPC resolve
     * to private IP addresses when queried from instances in the peer VPC.</p>
     */
    inline PeeringConnectionOptions& WithAllowDnsResolutionFromRemoteVpc(bool value) { SetAllowDnsResolutionFromRemoteVpc(value); return *this;}


    /**
     * <p>If true, enables outbound communication from an EC2-Classic instance that's
     * linked to a local VPC using ClassicLink to instances in a peer VPC.</p>
     */
    inline bool GetAllowEgressFromLocalClassicLinkToRemoteVpc() const{ return m_allowEgressFromLocalClassicLinkToRemoteVpc; }

    /**
     * <p>If true, enables outbound communication from an EC2-Classic instance that's
     * linked to a local VPC using ClassicLink to instances in a peer VPC.</p>
     */
    inline bool AllowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet() const { return m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet; }

    /**
     * <p>If true, enables outbound communication from an EC2-Classic instance that's
     * linked to a local VPC using ClassicLink to instances in a peer VPC.</p>
     */
    inline void SetAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true; m_allowEgressFromLocalClassicLinkToRemoteVpc = value; }

    /**
     * <p>If true, enables outbound communication from an EC2-Classic instance that's
     * linked to a local VPC using ClassicLink to instances in a peer VPC.</p>
     */
    inline PeeringConnectionOptions& WithAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { SetAllowEgressFromLocalClassicLinkToRemoteVpc(value); return *this;}


    /**
     * <p>If true, enables outbound communication from instances in a local VPC to an
     * EC2-Classic instance that's linked to a peer VPC using ClassicLink.</p>
     */
    inline bool GetAllowEgressFromLocalVpcToRemoteClassicLink() const{ return m_allowEgressFromLocalVpcToRemoteClassicLink; }

    /**
     * <p>If true, enables outbound communication from instances in a local VPC to an
     * EC2-Classic instance that's linked to a peer VPC using ClassicLink.</p>
     */
    inline bool AllowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet() const { return m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet; }

    /**
     * <p>If true, enables outbound communication from instances in a local VPC to an
     * EC2-Classic instance that's linked to a peer VPC using ClassicLink.</p>
     */
    inline void SetAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true; m_allowEgressFromLocalVpcToRemoteClassicLink = value; }

    /**
     * <p>If true, enables outbound communication from instances in a local VPC to an
     * EC2-Classic instance that's linked to a peer VPC using ClassicLink.</p>
     */
    inline PeeringConnectionOptions& WithAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { SetAllowEgressFromLocalVpcToRemoteClassicLink(value); return *this;}

  private:

    bool m_allowDnsResolutionFromRemoteVpc;
    bool m_allowDnsResolutionFromRemoteVpcHasBeenSet;

    bool m_allowEgressFromLocalClassicLinkToRemoteVpc;
    bool m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet;

    bool m_allowEgressFromLocalVpcToRemoteClassicLink;
    bool m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
