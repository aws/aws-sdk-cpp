/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateRouteRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline CreateRouteRequest& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline CreateRouteRequest& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR address block used for the destination match. Routing decisions
     * are based on the most specific match. We modify the specified CIDR block to its
     * canonical form; for example, if you specify <code>100.68.0.18/18</code>, we
     * modify it to <code>100.68.0.0/18</code>.</p>
     */
    inline CreateRouteRequest& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const{ return m_destinationIpv6CidrBlock; }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline bool DestinationIpv6CidrBlockHasBeenSet() const { return m_destinationIpv6CidrBlockHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const Aws::String& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = value; }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(Aws::String&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::move(value); }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline void SetDestinationIpv6CidrBlock(const char* value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock.assign(value); }

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationIpv6CidrBlock(const Aws::String& value) { SetDestinationIpv6CidrBlock(value); return *this;}

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationIpv6CidrBlock(Aws::String&& value) { SetDestinationIpv6CidrBlock(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block used for the destination match. Routing decisions are
     * based on the most specific match.</p>
     */
    inline CreateRouteRequest& WithDestinationIpv6CidrBlock(const char* value) { SetDestinationIpv6CidrBlock(value); return *this;}


    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const{ return m_destinationPrefixListId; }

    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }

    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline void SetDestinationPrefixListId(const Aws::String& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = value; }

    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline void SetDestinationPrefixListId(Aws::String&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::move(value); }

    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline void SetDestinationPrefixListId(const char* value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId.assign(value); }

    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline CreateRouteRequest& WithDestinationPrefixListId(const Aws::String& value) { SetDestinationPrefixListId(value); return *this;}

    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline CreateRouteRequest& WithDestinationPrefixListId(Aws::String&& value) { SetDestinationPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of a prefix list used for the destination match.</p>
     */
    inline CreateRouteRequest& WithDestinationPrefixListId(const char* value) { SetDestinationPrefixListId(value); return *this;}


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
    inline CreateRouteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline CreateRouteRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline CreateRouteRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of a VPC endpoint. Supported for Gateway Load Balancer endpoints
     * only.</p>
     */
    inline CreateRouteRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline const Aws::String& GetEgressOnlyInternetGatewayId() const{ return m_egressOnlyInternetGatewayId; }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline bool EgressOnlyInternetGatewayIdHasBeenSet() const { return m_egressOnlyInternetGatewayIdHasBeenSet; }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const Aws::String& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = value; }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(Aws::String&& value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId = std::move(value); }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline void SetEgressOnlyInternetGatewayId(const char* value) { m_egressOnlyInternetGatewayIdHasBeenSet = true; m_egressOnlyInternetGatewayId.assign(value); }

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline CreateRouteRequest& WithEgressOnlyInternetGatewayId(const Aws::String& value) { SetEgressOnlyInternetGatewayId(value); return *this;}

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline CreateRouteRequest& WithEgressOnlyInternetGatewayId(Aws::String&& value) { SetEgressOnlyInternetGatewayId(std::move(value)); return *this;}

    /**
     * <p>[IPv6 traffic only] The ID of an egress-only internet gateway.</p>
     */
    inline CreateRouteRequest& WithEgressOnlyInternetGatewayId(const char* value) { SetEgressOnlyInternetGatewayId(value); return *this;}


    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline CreateRouteRequest& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline CreateRouteRequest& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of an internet gateway or virtual private gateway attached to your
     * VPC.</p>
     */
    inline CreateRouteRequest& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline CreateRouteRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline CreateRouteRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of a NAT instance in your VPC. The operation fails if you specify an
     * instance ID unless exactly one network interface is attached.</p>
     */
    inline CreateRouteRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const{ return m_natGatewayId; }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(const Aws::String& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = value; }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(Aws::String&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::move(value); }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline void SetNatGatewayId(const char* value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId.assign(value); }

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline CreateRouteRequest& WithNatGatewayId(const Aws::String& value) { SetNatGatewayId(value); return *this;}

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline CreateRouteRequest& WithNatGatewayId(Aws::String&& value) { SetNatGatewayId(std::move(value)); return *this;}

    /**
     * <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
     */
    inline CreateRouteRequest& WithNatGatewayId(const char* value) { SetNatGatewayId(value); return *this;}


    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline CreateRouteRequest& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline CreateRouteRequest& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of a transit gateway.</p>
     */
    inline CreateRouteRequest& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The ID of the local gateway.</p>
     */
    inline const Aws::String& GetLocalGatewayId() const{ return m_localGatewayId; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline bool LocalGatewayIdHasBeenSet() const { return m_localGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(const Aws::String& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = value; }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(Aws::String&& value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId = std::move(value); }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline void SetLocalGatewayId(const char* value) { m_localGatewayIdHasBeenSet = true; m_localGatewayId.assign(value); }

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline CreateRouteRequest& WithLocalGatewayId(const Aws::String& value) { SetLocalGatewayId(value); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline CreateRouteRequest& WithLocalGatewayId(Aws::String&& value) { SetLocalGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local gateway.</p>
     */
    inline CreateRouteRequest& WithLocalGatewayId(const char* value) { SetLocalGatewayId(value); return *this;}


    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline const Aws::String& GetCarrierGatewayId() const{ return m_carrierGatewayId; }

    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline bool CarrierGatewayIdHasBeenSet() const { return m_carrierGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline void SetCarrierGatewayId(const Aws::String& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = value; }

    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline void SetCarrierGatewayId(Aws::String&& value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId = std::move(value); }

    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline void SetCarrierGatewayId(const char* value) { m_carrierGatewayIdHasBeenSet = true; m_carrierGatewayId.assign(value); }

    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline CreateRouteRequest& WithCarrierGatewayId(const Aws::String& value) { SetCarrierGatewayId(value); return *this;}

    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline CreateRouteRequest& WithCarrierGatewayId(Aws::String&& value) { SetCarrierGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the carrier gateway.</p> <p>You can only use this option when the
     * VPC contains a subnet which is associated with a Wavelength Zone.</p>
     */
    inline CreateRouteRequest& WithCarrierGatewayId(const char* value) { SetCarrierGatewayId(value); return *this;}


    /**
     * <p>The ID of a network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of a network interface.</p>
     */
    inline CreateRouteRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline CreateRouteRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of a network interface.</p>
     */
    inline CreateRouteRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline CreateRouteRequest& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline CreateRouteRequest& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table for the route.</p>
     */
    inline CreateRouteRequest& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline CreateRouteRequest& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline CreateRouteRequest& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of a VPC peering connection.</p>
     */
    inline CreateRouteRequest& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const{ return m_coreNetworkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline void SetCoreNetworkArn(const Aws::String& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline void SetCoreNetworkArn(Aws::String&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline void SetCoreNetworkArn(const char* value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline CreateRouteRequest& WithCoreNetworkArn(const Aws::String& value) { SetCoreNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline CreateRouteRequest& WithCoreNetworkArn(Aws::String&& value) { SetCoreNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the core network.</p>
     */
    inline CreateRouteRequest& WithCoreNetworkArn(const char* value) { SetCoreNetworkArn(value); return *this;}

  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_egressOnlyInternetGatewayId;
    bool m_egressOnlyInternetGatewayIdHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_localGatewayId;
    bool m_localGatewayIdHasBeenSet = false;

    Aws::String m_carrierGatewayId;
    bool m_carrierGatewayIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
