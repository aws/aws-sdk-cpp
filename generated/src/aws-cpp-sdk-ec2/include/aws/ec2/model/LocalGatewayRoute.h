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
    AWS_EC2_API LocalGatewayRoute() = default;
    AWS_EC2_API LocalGatewayRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LocalGatewayRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The CIDR block used for destination matches.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    LocalGatewayRoute& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual interface group.</p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceGroupId() const { return m_localGatewayVirtualInterfaceGroupId; }
    inline bool LocalGatewayVirtualInterfaceGroupIdHasBeenSet() const { return m_localGatewayVirtualInterfaceGroupIdHasBeenSet; }
    template<typename LocalGatewayVirtualInterfaceGroupIdT = Aws::String>
    void SetLocalGatewayVirtualInterfaceGroupId(LocalGatewayVirtualInterfaceGroupIdT&& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = std::forward<LocalGatewayVirtualInterfaceGroupIdT>(value); }
    template<typename LocalGatewayVirtualInterfaceGroupIdT = Aws::String>
    LocalGatewayRoute& WithLocalGatewayVirtualInterfaceGroupId(LocalGatewayVirtualInterfaceGroupIdT&& value) { SetLocalGatewayVirtualInterfaceGroupId(std::forward<LocalGatewayVirtualInterfaceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route type.</p>
     */
    inline LocalGatewayRouteType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LocalGatewayRouteType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LocalGatewayRoute& WithType(LocalGatewayRouteType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the route.</p>
     */
    inline LocalGatewayRouteState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(LocalGatewayRouteState value) { m_stateHasBeenSet = true; m_state = value; }
    inline LocalGatewayRoute& WithState(LocalGatewayRouteState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const { return m_localGatewayRouteTableId; }
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    void SetLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::forward<LocalGatewayRouteTableIdT>(value); }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    LocalGatewayRoute& WithLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { SetLocalGatewayRouteTableId(std::forward<LocalGatewayRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableArn() const { return m_localGatewayRouteTableArn; }
    inline bool LocalGatewayRouteTableArnHasBeenSet() const { return m_localGatewayRouteTableArnHasBeenSet; }
    template<typename LocalGatewayRouteTableArnT = Aws::String>
    void SetLocalGatewayRouteTableArn(LocalGatewayRouteTableArnT&& value) { m_localGatewayRouteTableArnHasBeenSet = true; m_localGatewayRouteTableArn = std::forward<LocalGatewayRouteTableArnT>(value); }
    template<typename LocalGatewayRouteTableArnT = Aws::String>
    LocalGatewayRoute& WithLocalGatewayRouteTableArn(LocalGatewayRouteTableArnT&& value) { SetLocalGatewayRouteTableArn(std::forward<LocalGatewayRouteTableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the local gateway
     * route.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    LocalGatewayRoute& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    LocalGatewayRoute& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer-owned address pool.</p>
     */
    inline const Aws::String& GetCoipPoolId() const { return m_coipPoolId; }
    inline bool CoipPoolIdHasBeenSet() const { return m_coipPoolIdHasBeenSet; }
    template<typename CoipPoolIdT = Aws::String>
    void SetCoipPoolId(CoipPoolIdT&& value) { m_coipPoolIdHasBeenSet = true; m_coipPoolId = std::forward<CoipPoolIdT>(value); }
    template<typename CoipPoolIdT = Aws::String>
    LocalGatewayRoute& WithCoipPoolId(CoipPoolIdT&& value) { SetCoipPoolId(std::forward<CoipPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    LocalGatewayRoute& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the prefix list. </p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const { return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    template<typename DestinationPrefixListIdT = Aws::String>
    void SetDestinationPrefixListId(DestinationPrefixListIdT&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::forward<DestinationPrefixListIdT>(value); }
    template<typename DestinationPrefixListIdT = Aws::String>
    LocalGatewayRoute& WithDestinationPrefixListId(DestinationPrefixListIdT&& value) { SetDestinationPrefixListId(std::forward<DestinationPrefixListIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_localGatewayVirtualInterfaceGroupId;
    bool m_localGatewayVirtualInterfaceGroupIdHasBeenSet = false;

    LocalGatewayRouteType m_type{LocalGatewayRouteType::NOT_SET};
    bool m_typeHasBeenSet = false;

    LocalGatewayRouteState m_state{LocalGatewayRouteState::NOT_SET};
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
