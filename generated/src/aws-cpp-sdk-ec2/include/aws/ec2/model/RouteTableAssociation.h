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
    AWS_EC2_API RouteTableAssociation();
    AWS_EC2_API RouteTableAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteTableAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline bool GetMain() const{ return m_main; }
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }
    inline void SetMain(bool value) { m_mainHasBeenSet = true; m_main = value; }
    inline RouteTableAssociation& WithMain(bool value) { SetMain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetRouteTableAssociationId() const{ return m_routeTableAssociationId; }
    inline bool RouteTableAssociationIdHasBeenSet() const { return m_routeTableAssociationIdHasBeenSet; }
    inline void SetRouteTableAssociationId(const Aws::String& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = value; }
    inline void SetRouteTableAssociationId(Aws::String&& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = std::move(value); }
    inline void SetRouteTableAssociationId(const char* value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId.assign(value); }
    inline RouteTableAssociation& WithRouteTableAssociationId(const Aws::String& value) { SetRouteTableAssociationId(value); return *this;}
    inline RouteTableAssociation& WithRouteTableAssociationId(Aws::String&& value) { SetRouteTableAssociationId(std::move(value)); return *this;}
    inline RouteTableAssociation& WithRouteTableAssociationId(const char* value) { SetRouteTableAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }
    inline RouteTableAssociation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}
    inline RouteTableAssociation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}
    inline RouteTableAssociation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline RouteTableAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline RouteTableAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline RouteTableAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }
    inline RouteTableAssociation& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline RouteTableAssociation& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline RouteTableAssociation& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline const RouteTableAssociationState& GetAssociationState() const{ return m_associationState; }
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }
    inline void SetAssociationState(const RouteTableAssociationState& value) { m_associationStateHasBeenSet = true; m_associationState = value; }
    inline void SetAssociationState(RouteTableAssociationState&& value) { m_associationStateHasBeenSet = true; m_associationState = std::move(value); }
    inline RouteTableAssociation& WithAssociationState(const RouteTableAssociationState& value) { SetAssociationState(value); return *this;}
    inline RouteTableAssociation& WithAssociationState(RouteTableAssociationState&& value) { SetAssociationState(std::move(value)); return *this;}
    ///@}
  private:

    bool m_main;
    bool m_mainHasBeenSet = false;

    Aws::String m_routeTableAssociationId;
    bool m_routeTableAssociationIdHasBeenSet = false;

    Aws::String m_routeTableId;
    bool m_routeTableIdHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    RouteTableAssociationState m_associationState;
    bool m_associationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
