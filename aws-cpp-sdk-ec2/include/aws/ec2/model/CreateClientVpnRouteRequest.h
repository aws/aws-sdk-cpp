/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateClientVpnRouteRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateClientVpnRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClientVpnRoute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline CreateClientVpnRouteRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline CreateClientVpnRouteRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which to add the route.</p>
     */
    inline CreateClientVpnRouteRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline CreateClientVpnRouteRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline CreateClientVpnRouteRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination. For
     * example:</p> <ul> <li> <p>To add a route for Internet access, enter
     * <code>0.0.0.0/0</code> </p> </li> <li> <p>To add a route for a peered VPC, enter
     * the peered VPC's IPv4 CIDR range</p> </li> <li> <p>To add a route for an
     * on-premises network, enter the Amazon Web Services Site-to-Site VPN connection's
     * IPv4 CIDR range</p> </li> <li> <p>To add a route for the local network, enter
     * the client CIDR range</p> </li> </ul>
     */
    inline CreateClientVpnRouteRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline const Aws::String& GetTargetVpcSubnetId() const{ return m_targetVpcSubnetId; }

    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline bool TargetVpcSubnetIdHasBeenSet() const { return m_targetVpcSubnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline void SetTargetVpcSubnetId(const Aws::String& value) { m_targetVpcSubnetIdHasBeenSet = true; m_targetVpcSubnetId = value; }

    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline void SetTargetVpcSubnetId(Aws::String&& value) { m_targetVpcSubnetIdHasBeenSet = true; m_targetVpcSubnetId = std::move(value); }

    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline void SetTargetVpcSubnetId(const char* value) { m_targetVpcSubnetIdHasBeenSet = true; m_targetVpcSubnetId.assign(value); }

    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline CreateClientVpnRouteRequest& WithTargetVpcSubnetId(const Aws::String& value) { SetTargetVpcSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline CreateClientVpnRouteRequest& WithTargetVpcSubnetId(Aws::String&& value) { SetTargetVpcSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet through which you want to route traffic. The specified
     * subnet must be an existing target network of the Client VPN endpoint.</p>
     * <p>Alternatively, if you're adding a route for the local network, specify
     * <code>local</code>.</p>
     */
    inline CreateClientVpnRouteRequest& WithTargetVpcSubnetId(const char* value) { SetTargetVpcSubnetId(value); return *this;}


    /**
     * <p>A brief description of the route.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the route.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the route.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the route.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the route.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the route.</p>
     */
    inline CreateClientVpnRouteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the route.</p>
     */
    inline CreateClientVpnRouteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the route.</p>
     */
    inline CreateClientVpnRouteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateClientVpnRouteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateClientVpnRouteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateClientVpnRouteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline CreateClientVpnRouteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_targetVpcSubnetId;
    bool m_targetVpcSubnetIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
