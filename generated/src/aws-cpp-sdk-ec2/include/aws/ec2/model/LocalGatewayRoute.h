/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/LocalGatewayRouteType.h>
#include <aws/ec2/model/LocalGatewayRouteState.h>
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
   * <p>Describes a route for a local gateway route table.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LocalGatewayRoute">AWS
   * API Reference</a></p>
   */
  class LocalGatewayRoute
  {
  public:
    AWS_EC2_API LocalGatewayRoute();
    AWS_EC2_API LocalGatewayRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline LocalGatewayRoute& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline LocalGatewayRoute& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceGroupId() const{ return m_localGatewayVirtualInterfaceGroupId; }
    inline bool LocalGatewayVirtualInterfaceGroupIdHasBeenSet() const { return m_localGatewayVirtualInterfaceGroupIdHasBeenSet; }
    inline void SetLocalGatewayVirtualInterfaceGroupId(const Aws::String& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = value; }
    inline void SetLocalGatewayVirtualInterfaceGroupId(Aws::String&& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = std::move(value); }
    inline void SetLocalGatewayVirtualInterfaceGroupId(const char* value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId.assign(value); }
    inline LocalGatewayRoute& WithLocalGatewayVirtualInterfaceGroupId(const Aws::String& value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}
    inline LocalGatewayRoute& WithLocalGatewayVirtualInterfaceGroupId(Aws::String&& value) { SetLocalGatewayVirtualInterfaceGroupId(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithLocalGatewayVirtualInterfaceGroupId(const char* value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route type.</p>
     */
    inline const LocalGatewayRouteType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LocalGatewayRouteType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LocalGatewayRouteType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline LocalGatewayRoute& WithType(const LocalGatewayRouteType& value) { SetType(value); return *this;}
    inline LocalGatewayRoute& WithType(LocalGatewayRouteType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the route.</p>
     */
    inline const LocalGatewayRouteState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const LocalGatewayRouteState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(LocalGatewayRouteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline LocalGatewayRoute& WithState(const LocalGatewayRouteState& value) { SetState(value); return *this;}
    inline LocalGatewayRoute& WithState(LocalGatewayRouteState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }
    inline LocalGatewayRoute& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}
    inline LocalGatewayRoute& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableArn() const{ return m_localGatewayRouteTableArn; }
    inline bool LocalGatewayRouteTableArnHasBeenSet() const { return m_localGatewayRouteTableArnHasBeenSet; }
    inline void SetLocalGatewayRouteTableArn(const Aws::String& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = value; }
    inline void SetLocalGatewayRouteTableArn(Aws::String&& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = std::move(value); }
    inline void SetLocalGatewayRouteTableArn(const char* value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn.assign(value); }
    inline LocalGatewayRoute& WithLocalGatewayRouteTableArn(const Aws::String& value) { SetLocalGatewayRouteTableArn(value); return *this;}
    inline LocalGatewayRoute& WithLocalGatewayRouteTableArn(Aws::String&& value) { SetLocalGatewayRouteTableArn(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithLocalGatewayRouteTableArn(const char* value) { SetLocalGatewayRouteTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway
     * route.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline LocalGatewayRoute& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline LocalGatewayRoute& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline LocalGatewayRoute& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline LocalGatewayRoute& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline const Aws::String& GetCoipPoolId() const{ return m_coipPoolId; }
    inline bool CoipPoolIdHasBeenSet() const { return m_coipPoolIdHasBeenSet; }
    inline void SetCoipPoolId(const Aws::String& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = value; }
    inline void SetCoipPoolId(Aws::String&& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = std::move(value); }
    inline void SetCoipPoolId(const char* value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId.assign(value); }
    inline LocalGatewayRoute& WithCoipPoolId(const Aws::String& value) { SetCoipPoolId(value); return *this;}
    inline LocalGatewayRoute& WithCoipPoolId(Aws::String&& value) { SetCoipPoolId(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithCoipPoolId(const char* value) { SetCoipPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline LocalGatewayRoute& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline LocalGatewayRoute& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the prefix list. </p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const{ return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    inline void SetDestinationPrefixListId(const Aws::String& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = value; }
    inline void SetDestinationPrefixListId(Aws::String&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::move(value); }
    inline void SetDestinationPrefixListId(const char* value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId.assign(value); }
    inline LocalGatewayRoute& WithDestinationPrefixListId(const Aws::String& value) { SetDestinationPrefixListId(value); return *this;}
    inline LocalGatewayRoute& WithDestinationPrefixListId(Aws::String&& value) { SetDestinationPrefixListId(std::move(value)); return *this;}
    inline LocalGatewayRoute& WithDestinationPrefixListId(const char* value) { SetDestinationPrefixListId(value); return *this;}
    ///@}
  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_localGatewayVirtualInterfaceGroupId;
    bool m_localGatewayVirtualInterfaceGroupIdHasBeenSet = false;

    LocalGatewayRouteType m_type;
    bool m_typeHasBeenSet = false;

    LocalGatewayRouteState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_localGatewayRouteTableArn;
    bool m_localGatewayRouteTableArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_coipPoolId;
    bool m_coipPoolIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
