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
   * <p>The VPC peering connection options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PeeringConnectionOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PeeringConnectionOptionsRequest
  {
  public:
    AWS_EC2_API PeeringConnectionOptionsRequest();
    AWS_EC2_API PeeringConnectionOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PeeringConnectionOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>If true, enables a local VPC to resolve public DNS hostnames to private IP
     * addresses when queried from instances in the peer VPC.</p>
     */
    inline bool GetAllowDnsResolutionFromRemoteVpc() const{ return m_allowDnsResolutionFromRemoteVpc; }

    /**
     * <p>If true, enables a local VPC to resolve public DNS hostnames to private IP
     * addresses when queried from instances in the peer VPC.</p>
     */
    inline bool AllowDnsResolutionFromRemoteVpcHasBeenSet() const { return m_allowDnsResolutionFromRemoteVpcHasBeenSet; }

    /**
     * <p>If true, enables a local VPC to resolve public DNS hostnames to private IP
     * addresses when queried from instances in the peer VPC.</p>
     */
    inline void SetAllowDnsResolutionFromRemoteVpc(bool value) { m_allowDnsResolutionFromRemoteVpcHasBeenSet = true; m_allowDnsResolutionFromRemoteVpc = value; }

    /**
     * <p>If true, enables a local VPC to resolve public DNS hostnames to private IP
     * addresses when queried from instances in the peer VPC.</p>
     */
    inline PeeringConnectionOptionsRequest& WithAllowDnsResolutionFromRemoteVpc(bool value) { SetAllowDnsResolutionFromRemoteVpc(value); return *this;}


    /**
     * <p>Deprecated.</p>
     */
    inline bool GetAllowEgressFromLocalClassicLinkToRemoteVpc() const{ return m_allowEgressFromLocalClassicLinkToRemoteVpc; }

    /**
     * <p>Deprecated.</p>
     */
    inline bool AllowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet() const { return m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { m_allowEgressFromLocalClassicLinkToRemoteVpcHasBeenSet = true; m_allowEgressFromLocalClassicLinkToRemoteVpc = value; }

    /**
     * <p>Deprecated.</p>
     */
    inline PeeringConnectionOptionsRequest& WithAllowEgressFromLocalClassicLinkToRemoteVpc(bool value) { SetAllowEgressFromLocalClassicLinkToRemoteVpc(value); return *this;}


    /**
     * <p>Deprecated.</p>
     */
    inline bool GetAllowEgressFromLocalVpcToRemoteClassicLink() const{ return m_allowEgressFromLocalVpcToRemoteClassicLink; }

    /**
     * <p>Deprecated.</p>
     */
    inline bool AllowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet() const { return m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet; }

    /**
     * <p>Deprecated.</p>
     */
    inline void SetAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { m_allowEgressFromLocalVpcToRemoteClassicLinkHasBeenSet = true; m_allowEgressFromLocalVpcToRemoteClassicLink = value; }

    /**
     * <p>Deprecated.</p>
     */
    inline PeeringConnectionOptionsRequest& WithAllowEgressFromLocalVpcToRemoteClassicLink(bool value) { SetAllowEgressFromLocalVpcToRemoteClassicLink(value); return *this;}

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
