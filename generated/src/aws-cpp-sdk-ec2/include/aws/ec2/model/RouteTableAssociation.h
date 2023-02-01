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


    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline bool GetMain() const{ return m_main; }

    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline bool MainHasBeenSet() const { return m_mainHasBeenSet; }

    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline void SetMain(bool value) { m_mainHasBeenSet = true; m_main = value; }

    /**
     * <p>Indicates whether this is the main route table.</p>
     */
    inline RouteTableAssociation& WithMain(bool value) { SetMain(value); return *this;}


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetRouteTableAssociationId() const{ return m_routeTableAssociationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool RouteTableAssociationIdHasBeenSet() const { return m_routeTableAssociationIdHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetRouteTableAssociationId(const Aws::String& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetRouteTableAssociationId(Aws::String&& value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetRouteTableAssociationId(const char* value) { m_routeTableAssociationIdHasBeenSet = true; m_routeTableAssociationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline RouteTableAssociation& WithRouteTableAssociationId(const Aws::String& value) { SetRouteTableAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline RouteTableAssociation& WithRouteTableAssociationId(Aws::String&& value) { SetRouteTableAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline RouteTableAssociation& WithRouteTableAssociationId(const char* value) { SetRouteTableAssociationId(value); return *this;}


    /**
     * <p>The ID of the route table.</p>
     */
    inline const Aws::String& GetRouteTableId() const{ return m_routeTableId; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline bool RouteTableIdHasBeenSet() const { return m_routeTableIdHasBeenSet; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const Aws::String& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = value; }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(Aws::String&& value) { m_routeTableIdHasBeenSet = true; m_routeTableId = std::move(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline void SetRouteTableId(const char* value) { m_routeTableIdHasBeenSet = true; m_routeTableId.assign(value); }

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTableAssociation& WithRouteTableId(const Aws::String& value) { SetRouteTableId(value); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTableAssociation& WithRouteTableId(Aws::String&& value) { SetRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the route table.</p>
     */
    inline RouteTableAssociation& WithRouteTableId(const char* value) { SetRouteTableId(value); return *this;}


    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline RouteTableAssociation& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline RouteTableAssociation& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet. A subnet ID is not returned for an implicit
     * association.</p>
     */
    inline RouteTableAssociation& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }

    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::move(value); }

    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline RouteTableAssociation& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline RouteTableAssociation& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the internet gateway or virtual private gateway.</p>
     */
    inline RouteTableAssociation& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}


    /**
     * <p>The state of the association.</p>
     */
    inline const RouteTableAssociationState& GetAssociationState() const{ return m_associationState; }

    /**
     * <p>The state of the association.</p>
     */
    inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetAssociationState(const RouteTableAssociationState& value) { m_associationStateHasBeenSet = true; m_associationState = value; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetAssociationState(RouteTableAssociationState&& value) { m_associationStateHasBeenSet = true; m_associationState = std::move(value); }

    /**
     * <p>The state of the association.</p>
     */
    inline RouteTableAssociation& WithAssociationState(const RouteTableAssociationState& value) { SetAssociationState(value); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline RouteTableAssociation& WithAssociationState(RouteTableAssociationState&& value) { SetAssociationState(std::move(value)); return *this;}

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
