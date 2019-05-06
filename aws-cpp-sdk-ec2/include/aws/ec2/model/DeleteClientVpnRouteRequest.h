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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DeleteClientVpnRouteRequest : public EC2Request
  {
  public:
    DeleteClientVpnRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClientVpnRoute"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline DeleteClientVpnRouteRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline DeleteClientVpnRouteRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline DeleteClientVpnRouteRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline const Aws::String& GetTargetVpcSubnetId() const{ return m_targetVpcSubnetId; }

    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline bool TargetVpcSubnetIdHasBeenSet() const { return m_targetVpcSubnetIdHasBeenSet; }

    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline void SetTargetVpcSubnetId(const Aws::String& value) { m_targetVpcSubnetIdHasBeenSet = true; m_targetVpcSubnetId = value; }

    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline void SetTargetVpcSubnetId(Aws::String&& value) { m_targetVpcSubnetIdHasBeenSet = true; m_targetVpcSubnetId = std::move(value); }

    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline void SetTargetVpcSubnetId(const char* value) { m_targetVpcSubnetIdHasBeenSet = true; m_targetVpcSubnetId.assign(value); }

    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline DeleteClientVpnRouteRequest& WithTargetVpcSubnetId(const Aws::String& value) { SetTargetVpcSubnetId(value); return *this;}

    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline DeleteClientVpnRouteRequest& WithTargetVpcSubnetId(Aws::String&& value) { SetTargetVpcSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline DeleteClientVpnRouteRequest& WithTargetVpcSubnetId(const char* value) { SetTargetVpcSubnetId(value); return *this;}


    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline DeleteClientVpnRouteRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline DeleteClientVpnRouteRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline DeleteClientVpnRouteRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteClientVpnRouteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_targetVpcSubnetId;
    bool m_targetVpcSubnetIdHasBeenSet;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
