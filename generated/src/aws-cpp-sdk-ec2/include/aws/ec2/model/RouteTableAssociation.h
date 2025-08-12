/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/RouteTableAssociationState.h>
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
   * <p>Describes an association between a route table and a subnet or
   * gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteTableAssociation">AWS
   * API Reference</a></p>
   */
  class RouteTableAssociation
  {
  public:
    AWS_EC2_API RouteTableAssociation() = default;
    AWS_EC2_API RouteTableAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteTableAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline bool GetMain() const { return m_main; }
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }
    inline void SetMain(bool value) { m_mainHasBeenSet = true; m_main = value; }
    inline RouteTableAssociation& WithMain(bool value) { SetMain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetRouteTableAssociationId() const { return m_routeTableAssociationId; }
    inline bool RouteTableAssociationIdHasBeenSet() const { return m_routeTableAssociationIdHasBeenSet; }
    template<typename RouteTableAssociationIdT = Aws::String>
    void SetRouteTableAssociationId(RouteTableAssociationIdT&& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = std::forward<RouteTableAssociationIdT>(value); }
    template<typename RouteTableAssociationIdT = Aws::String>
    RouteTableAssociation& WithRouteTableAssociationId(RouteTableAssociationIdT&& value) { SetRouteTableAssociationId(std::forward<RouteTableAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const { return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    template<typename RouteTableIdT = Aws::String>
    void SetRouteTableId(RouteTableIdT&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::forward<RouteTableIdT>(value); }
    template<typename RouteTableIdT = Aws::String>
    RouteTableAssociation& WithRouteTableId(RouteTableIdT&& value) { SetRouteTableId(std::forward<RouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    RouteTableAssociation& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    RouteTableAssociation& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a public IPv4 pool. A public IPv4 pool is a pool of IPv4 addresses
     * that you've brought to Amazon Web Services with BYOIP.</p>
     */
    inline const Aws::String& GetPublicIpv4Pool() const { return m_publicIpv4Pool; }
    inline bool PublicIpv4PoolHasBeenSet() const { return m_publicIpv4PoolHasBeenSet; }
    template<typename PublicIpv4PoolT = Aws::String>
    void SetPublicIpv4Pool(PublicIpv4PoolT&& value) { m_publicIpv4PoolHasBeenSet = true; m_publicIpv4Pool = std::forward<PublicIpv4PoolT>(value); }
    template<typename PublicIpv4PoolT = Aws::String>
    RouteTableAssociation& WithPublicIpv4Pool(PublicIpv4PoolT&& value) { SetPublicIpv4Pool(std::forward<PublicIpv4PoolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline const RouteTableAssociationState& GetAssociationState() const { return m_associationState; }
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }
    template<typename AssociationStateT = RouteTableAssociationState>
    void SetAssociationState(AssociationStateT&& value) { m_associationStateHasBeenSet = true; m_associationState = std::forward<AssociationStateT>(value); }
    template<typename AssociationStateT = RouteTableAssociationState>
    RouteTableAssociation& WithAssociationState(AssociationStateT&& value) { SetAssociationState(std::forward<AssociationStateT>(value)); return *this;}
    ///@}
  private:

    bool m_main{false};
    bool m_mainHasBeenSet = false;

    Aws::String m_routeTableAssociationId;
    bool m_routeTableAssociationIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_publicIpv4Pool;
    bool m_publicIpv4PoolHasBeenSet = false;

    RouteTableAssociationState m_associationState;
    bool m_associationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
