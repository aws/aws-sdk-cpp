/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpnState.h>
#include <aws/ec2/model/GatewayType.h>
#include <aws/ec2/model/GatewayAssociationState.h>
#include <aws/ec2/model/VpnConnectionOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpnStaticRoute.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/VgwTelemetry.h>
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
   * <p>Describes a VPN connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpnConnection">AWS
   * API Reference</a></p>
   */
  class VpnConnection
  {
  public:
    AWS_EC2_API VpnConnection();
    AWS_EC2_API VpnConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline const Aws::String& GetCustomerGatewayConfiguration() const{ return m_customerGatewayConfiguration; }

    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline bool CustomerGatewayConfigurationHasBeenSet() const { return m_customerGatewayConfigurationHasBeenSet; }

    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline void SetCustomerGatewayConfiguration(const Aws::String& value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration = value; }

    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline void SetCustomerGatewayConfiguration(Aws::String&& value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration = std::move(value); }

    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline void SetCustomerGatewayConfiguration(const char* value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration.assign(value); }

    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline VpnConnection& WithCustomerGatewayConfiguration(const Aws::String& value) { SetCustomerGatewayConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline VpnConnection& WithCustomerGatewayConfiguration(Aws::String&& value) { SetCustomerGatewayConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline VpnConnection& WithCustomerGatewayConfiguration(const char* value) { SetCustomerGatewayConfiguration(value); return *this;}


    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }

    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }

    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::move(value); }

    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId.assign(value); }

    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline VpnConnection& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}

    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline VpnConnection& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline VpnConnection& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}


    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline VpnConnection& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline VpnConnection& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline VpnConnection& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline const VpnState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline void SetState(const VpnState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline void SetState(VpnState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline VpnConnection& WithState(const VpnState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline VpnConnection& WithState(VpnState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The type of VPN connection.</p>
     */
    inline const GatewayType& GetType() const{ return m_type; }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline void SetType(const GatewayType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline void SetType(GatewayType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline VpnConnection& WithType(const GatewayType& value) { SetType(value); return *this;}

    /**
     * <p>The type of VPN connection.</p>
     */
    inline VpnConnection& WithType(GatewayType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline VpnConnection& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline VpnConnection& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline VpnConnection& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }

    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline VpnConnection& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline VpnConnection& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline VpnConnection& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}


    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline VpnConnection& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline VpnConnection& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline VpnConnection& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The ARN of the core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const{ return m_coreNetworkArn; }

    /**
     * <p>The ARN of the core network.</p>
     */
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }

    /**
     * <p>The ARN of the core network.</p>
     */
    inline void SetCoreNetworkArn(const Aws::String& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = value; }

    /**
     * <p>The ARN of the core network.</p>
     */
    inline void SetCoreNetworkArn(Aws::String&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::move(value); }

    /**
     * <p>The ARN of the core network.</p>
     */
    inline void SetCoreNetworkArn(const char* value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn.assign(value); }

    /**
     * <p>The ARN of the core network.</p>
     */
    inline VpnConnection& WithCoreNetworkArn(const Aws::String& value) { SetCoreNetworkArn(value); return *this;}

    /**
     * <p>The ARN of the core network.</p>
     */
    inline VpnConnection& WithCoreNetworkArn(Aws::String&& value) { SetCoreNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the core network.</p>
     */
    inline VpnConnection& WithCoreNetworkArn(const char* value) { SetCoreNetworkArn(value); return *this;}


    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline const Aws::String& GetCoreNetworkAttachmentArn() const{ return m_coreNetworkAttachmentArn; }

    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline bool CoreNetworkAttachmentArnHasBeenSet() const { return m_coreNetworkAttachmentArnHasBeenSet; }

    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline void SetCoreNetworkAttachmentArn(const Aws::String& value) { m_coreNetworkAttachmentArnHasBeenSet = true; m_coreNetworkAttachmentArn = value; }

    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline void SetCoreNetworkAttachmentArn(Aws::String&& value) { m_coreNetworkAttachmentArnHasBeenSet = true; m_coreNetworkAttachmentArn = std::move(value); }

    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline void SetCoreNetworkAttachmentArn(const char* value) { m_coreNetworkAttachmentArnHasBeenSet = true; m_coreNetworkAttachmentArn.assign(value); }

    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline VpnConnection& WithCoreNetworkAttachmentArn(const Aws::String& value) { SetCoreNetworkAttachmentArn(value); return *this;}

    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline VpnConnection& WithCoreNetworkAttachmentArn(Aws::String&& value) { SetCoreNetworkAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline VpnConnection& WithCoreNetworkAttachmentArn(const char* value) { SetCoreNetworkAttachmentArn(value); return *this;}


    /**
     * <p>The current state of the gateway association.</p>
     */
    inline const GatewayAssociationState& GetGatewayAssociationState() const{ return m_gatewayAssociationState; }

    /**
     * <p>The current state of the gateway association.</p>
     */
    inline bool GatewayAssociationStateHasBeenSet() const { return m_gatewayAssociationStateHasBeenSet; }

    /**
     * <p>The current state of the gateway association.</p>
     */
    inline void SetGatewayAssociationState(const GatewayAssociationState& value) { m_gatewayAssociationStateHasBeenSet = true; m_gatewayAssociationState = value; }

    /**
     * <p>The current state of the gateway association.</p>
     */
    inline void SetGatewayAssociationState(GatewayAssociationState&& value) { m_gatewayAssociationStateHasBeenSet = true; m_gatewayAssociationState = std::move(value); }

    /**
     * <p>The current state of the gateway association.</p>
     */
    inline VpnConnection& WithGatewayAssociationState(const GatewayAssociationState& value) { SetGatewayAssociationState(value); return *this;}

    /**
     * <p>The current state of the gateway association.</p>
     */
    inline VpnConnection& WithGatewayAssociationState(GatewayAssociationState&& value) { SetGatewayAssociationState(std::move(value)); return *this;}


    /**
     * <p>The VPN connection options.</p>
     */
    inline const VpnConnectionOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The VPN connection options.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The VPN connection options.</p>
     */
    inline void SetOptions(const VpnConnectionOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The VPN connection options.</p>
     */
    inline void SetOptions(VpnConnectionOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The VPN connection options.</p>
     */
    inline VpnConnection& WithOptions(const VpnConnectionOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The VPN connection options.</p>
     */
    inline VpnConnection& WithOptions(VpnConnectionOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline const Aws::Vector<VpnStaticRoute>& GetRoutes() const{ return m_routes; }

    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }

    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline void SetRoutes(const Aws::Vector<VpnStaticRoute>& value) { m_routesHasBeenSet = true; m_routes = value; }

    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline void SetRoutes(Aws::Vector<VpnStaticRoute>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }

    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline VpnConnection& WithRoutes(const Aws::Vector<VpnStaticRoute>& value) { SetRoutes(value); return *this;}

    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline VpnConnection& WithRoutes(Aws::Vector<VpnStaticRoute>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline VpnConnection& AddRoutes(const VpnStaticRoute& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }

    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline VpnConnection& AddRoutes(VpnStaticRoute&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }


    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline VpnConnection& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline VpnConnection& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline VpnConnection& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline VpnConnection& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline const Aws::Vector<VgwTelemetry>& GetVgwTelemetry() const{ return m_vgwTelemetry; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline bool VgwTelemetryHasBeenSet() const { return m_vgwTelemetryHasBeenSet; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline void SetVgwTelemetry(const Aws::Vector<VgwTelemetry>& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry = value; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline void SetVgwTelemetry(Aws::Vector<VgwTelemetry>&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry = std::move(value); }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline VpnConnection& WithVgwTelemetry(const Aws::Vector<VgwTelemetry>& value) { SetVgwTelemetry(value); return *this;}

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline VpnConnection& WithVgwTelemetry(Aws::Vector<VgwTelemetry>&& value) { SetVgwTelemetry(std::move(value)); return *this;}

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline VpnConnection& AddVgwTelemetry(const VgwTelemetry& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry.push_back(value); return *this; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline VpnConnection& AddVgwTelemetry(VgwTelemetry&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_customerGatewayConfiguration;
    bool m_customerGatewayConfigurationHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    VpnState m_state;
    bool m_stateHasBeenSet = false;

    GatewayType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_coreNetworkAttachmentArn;
    bool m_coreNetworkAttachmentArnHasBeenSet = false;

    GatewayAssociationState m_gatewayAssociationState;
    bool m_gatewayAssociationStateHasBeenSet = false;

    VpnConnectionOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<VpnStaticRoute> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<VgwTelemetry> m_vgwTelemetry;
    bool m_vgwTelemetryHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
