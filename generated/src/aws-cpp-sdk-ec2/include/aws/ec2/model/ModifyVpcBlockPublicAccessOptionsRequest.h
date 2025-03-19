/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/InternetGatewayBlockMode.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcBlockPublicAccessOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcBlockPublicAccessOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcBlockPublicAccessOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVpcBlockPublicAccessOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

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
    inline InternetGatewayBlockMode GetInternetGatewayBlockMode() const { return m_internetGatewayBlockMode; }
    inline bool InternetGatewayBlockModeHasBeenSet() const { return m_internetGatewayBlockModeHasBeenSet; }
    inline void SetInternetGatewayBlockMode(InternetGatewayBlockMode value) { m_internetGatewayBlockModeHasBeenSet = true; m_internetGatewayBlockMode = value; }
    inline ModifyVpcBlockPublicAccessOptionsRequest& WithInternetGatewayBlockMode(InternetGatewayBlockMode value) { SetInternetGatewayBlockMode(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    InternetGatewayBlockMode m_internetGatewayBlockMode{InternetGatewayBlockMode::NOT_SET};
    bool m_internetGatewayBlockModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
