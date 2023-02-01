/**
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
   *  <p>We are retiring EC2-Classic. We recommend that you migrate from
   * EC2-Classic to a VPC. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/vpc-migrate.html">Migrate
   * from EC2-Classic to a VPC</a> in the <i>Amazon Elastic Compute Cloud User
   * Guide</i>.</p>  <p>Describes the VPC peering connection
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcPeeringConnectionOptionsDescription">AWS
   * API Reference</a></p>
   */
  class VpcPeeringConnectionOptionsDescription
  {
  public:
    AWS_EC2_API VpcPeeringConnectionOptionsDescription();
    AWS_EC2_API VpcPeeringConnectionOptionsDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcPeeringConnectionOptionsDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether a local VPC can resolve public DNS hostnames to private IP
     * addresses when queried from instances in a peer VPC.</p>
     */
    inline bool GetAllowDnsResolutionFromRemoteVpc() const{ return m_allowDnsResolutionFromRemoteVpc; }

    /**
     * <p>Indicates whether a local VPC can resolve public DNS hostnames to private IP
     * addresses when queried from instances in a peer VPC.</p>
     */
    inline bool AllowDnsResolutionFromRemoteVpcHasBeenSet() const { return m_allowDnsResolutionFromRemoteVpcHasBeenSet; }

    /**
     * <p>Indicates whether a local VPC can resolve public DNS hostnames to private IP
     * addresses when queried from instances in a peer VPC.</p>
     */
    inline void SetAllowDnsResolutionFromRemoteVpc(bool value) { m_allowDnsResolutionFromRemoteVpcHasBeenSet = true; m_allowDnsResolutionFromRemoteVpc = value; }

    /**
     * <p>Indicates whether a local VPC can resolve public DNS hostnames to private IP
     * addresses when queried from instances in a peer VPC.</p>
     */
    inline VpcPeeringConnectionOptionsDescription& WithAllowDnsResolutionFromRemoteVpc(bool value) { SetAllowDnsResolutionFromRemoteVpc(value); return *this;}


    /**
     * <p>Indicates whether a local ClassicLink connection can communicate with the
     * peer VPC over the VPC peering connection.</p>
     */
    inline bool GetAllowEgressFromLocalClassicLinkToRemoteVpc() const{ return m_allowEgressFromLocalClassicLinkToRemoteVpc; }

    /**
     * <p>Indicates whether a local ClassicLink connection can communicate with the
     * peer VPC over the VPC peering connection.</p>
     */
    inline bool AllowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet() const { return m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet; }

    /**
     * <p>Indicates whether a local ClassicLink connection can communicate with the
     * peer VPC over the VPC peering connection.</p>
     */
    inline void SetAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true; m_allowEgressFromLocalClassicLinkToRemoteVpc = value; }

    /**
     * <p>Indicates whether a local ClassicLink connection can communicate with the
     * peer VPC over the VPC peering connection.</p>
     */
    inline VpcPeeringConnectionOptionsDescription& WithAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { SetAllowEgressFromLocalClassicLinkToRemoteVpc(value); return *this;}


    /**
     * <p>Indicates whether a local VPC can communicate with a ClassicLink connection
     * in the peer VPC over the VPC peering connection.</p>
     */
    inline bool GetAllowEgressFromLocalVpcToRemoteClassicLink() const{ return m_allowEgressFromLocalVpcToRemoteClassicLink; }

    /**
     * <p>Indicates whether a local VPC can communicate with a ClassicLink connection
     * in the peer VPC over the VPC peering connection.</p>
     */
    inline bool AllowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet() const { return m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet; }

    /**
     * <p>Indicates whether a local VPC can communicate with a ClassicLink connection
     * in the peer VPC over the VPC peering connection.</p>
     */
    inline void SetAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true; m_allowEgressFromLocalVpcToRemoteClassicLink = value; }

    /**
     * <p>Indicates whether a local VPC can communicate with a ClassicLink connection
     * in the peer VPC over the VPC peering connection.</p>
     */
    inline VpcPeeringConnectionOptionsDescription& WithAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { SetAllowEgressFromLocalVpcToRemoteClassicLink(value); return *this;}

  private:

    bool m_allowDnsResolutionFromRemoteVpc;
    bool m_allowDnsResolutionFromRemoteVpcHasBeenSet = false;

    bool m_allowEgressFromLocalClassicLinkToRemoteVpc;
    bool m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = false;

    bool m_allowEgressFromLocalVpcToRemoteClassicLink;
    bool m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
