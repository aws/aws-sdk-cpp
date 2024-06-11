﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fms/model/ActionTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Information about the CreateRoute action in Amazon EC2.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/EC2CreateRouteAction">AWS
   * API Reference</a></p>
   */
  class EC2CreateRouteAction
  {
  public:
    AWS_FMS_API EC2CreateRouteAction();
    AWS_FMS_API EC2CreateRouteAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API EC2CreateRouteAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A description of CreateRoute action in Amazon EC2.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline EC2CreateRouteAction& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EC2CreateRouteAction& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EC2CreateRouteAction& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv4 CIDR address block used for the destination
     * match.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline EC2CreateRouteAction& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline EC2CreateRouteAction& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline EC2CreateRouteAction& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of a prefix list used for the destination match.</p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const{ return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    inline void SetDestinationPrefixListId(const Aws::String& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = value; }
    inline void SetDestinationPrefixListId(Aws::String&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::move(value); }
    inline void SetDestinationPrefixListId(const char* value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId.assign(value); }
    inline EC2CreateRouteAction& WithDestinationPrefixListId(const Aws::String& value) { SetDestinationPrefixListId(value); return *this;}
    inline EC2CreateRouteAction& WithDestinationPrefixListId(Aws::String&& value) { SetDestinationPrefixListId(std::move(value)); return *this;}
    inline EC2CreateRouteAction& WithDestinationPrefixListId(const char* value) { SetDestinationPrefixListId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IPv6 CIDR block destination.</p>
     */
    inline const Aws::String& GetDestinationIpv6CidrBlock() const{ return m_destinationIpv6CidrBlock; }
    inline bool DestinationIpv6CidrBlockHasBeenSet() const { return m_destinationIpv6CidrBlockHasBeenSet; }
    inline void SetDestinationIpv6CidrBlock(const Aws::String& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = value; }
    inline void SetDestinationIpv6CidrBlock(Aws::String&& value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock = std::move(value); }
    inline void SetDestinationIpv6CidrBlock(const char* value) { m_destinationIpv6CidrBlockHasBeenSet = true; m_destinationIpv6CidrBlock.assign(value); }
    inline EC2CreateRouteAction& WithDestinationIpv6CidrBlock(const Aws::String& value) { SetDestinationIpv6CidrBlock(value); return *this;}
    inline EC2CreateRouteAction& WithDestinationIpv6CidrBlock(Aws::String&& value) { SetDestinationIpv6CidrBlock(std::move(value)); return *this;}
    inline EC2CreateRouteAction& WithDestinationIpv6CidrBlock(const char* value) { SetDestinationIpv6CidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of a VPC endpoint. Supported for Gateway Load
     * Balancer endpoints only.</p>
     */
    inline const ActionTarget& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const ActionTarget& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(ActionTarget&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline EC2CreateRouteAction& WithVpcEndpointId(const ActionTarget& value) { SetVpcEndpointId(value); return *this;}
    inline EC2CreateRouteAction& WithVpcEndpointId(ActionTarget&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of an internet gateway or virtual private gateway
     * attached to your VPC.</p>
     */
    inline const ActionTarget& GetGatewayId() const{ return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    inline void SetGatewayId(const ActionTarget& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }
    inline void SetGatewayId(ActionTarget&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }
    inline EC2CreateRouteAction& WithGatewayId(const ActionTarget& value) { SetGatewayId(value); return *this;}
    inline EC2CreateRouteAction& WithGatewayId(ActionTarget&& value) { SetGatewayId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the ID of the route table for the route.</p>
     */
    inline const ActionTarget& GetRouteTableId() const{ return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    inline void SetRouteTableId(const ActionTarget& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }
    inline void SetRouteTableId(ActionTarget&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }
    inline EC2CreateRouteAction& WithRouteTableId(const ActionTarget& value) { SetRouteTableId(value); return *this;}
    inline EC2CreateRouteAction& WithRouteTableId(ActionTarget&& value) { SetRouteTableId(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;

    Aws::String m_destinationIpv6CidrBlock;
    bool m_destinationIpv6CidrBlockHasBeenSet = false;

    ActionTarget m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    ActionTarget m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    ActionTarget m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
