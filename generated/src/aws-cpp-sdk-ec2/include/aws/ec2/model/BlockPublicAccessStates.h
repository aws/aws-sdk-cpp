/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/BlockPublicAccessMode.h>
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
   * <p>The state of VPC Block Public Access (BPA).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/BlockPublicAccessStates">AWS
   * API Reference</a></p>
   */
  class BlockPublicAccessStates
  {
  public:
    AWS_EC2_API BlockPublicAccessStates() = default;
    AWS_EC2_API BlockPublicAccessStates(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API BlockPublicAccessStates& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The mode of VPC BPA.</p> <ul> <li> <p> <code>off</code>: VPC BPA is not
     * enabled and traffic is allowed to and from internet gateways and egress-only
     * internet gateways in this Region.</p> </li> <li> <p>
     * <code>block-bidirectional</code>: Block all traffic to and from internet
     * gateways and egress-only internet gateways in this Region (except for excluded
     * VPCs and subnets).</p> </li> <li> <p> <code>block-ingress</code>: Block all
     * internet traffic to the VPCs in this Region (except for VPCs or subnets which
     * are excluded). Only traffic to and from NAT gateways and egress-only internet
     * gateways is allowed because these gateways only allow outbound connections to be
     * established.</p> </li> </ul>
     */
    inline BlockPublicAccessMode GetInternetGatewayBlockMode() const { return m_internetGatewayBlockMode; }
    inline bool InternetGatewayBlockModeHasBeenSet() const { return m_internetGatewayBlockModeHasBeenSet; }
    inline void SetInternetGatewayBlockMode(BlockPublicAccessMode value) { m_internetGatewayBlockModeHasBeenSet = true; m_internetGatewayBlockMode = value; }
    inline BlockPublicAccessStates& WithInternetGatewayBlockMode(BlockPublicAccessMode value) { SetInternetGatewayBlockMode(value); return *this;}
    ///@}
  private:

    BlockPublicAccessMode m_internetGatewayBlockMode{BlockPublicAccessMode::NOT_SET};
    bool m_internetGatewayBlockModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
