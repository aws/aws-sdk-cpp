/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/GatewayAssociationState.h>
#include <aws/ec2/model/VpnConnectionOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpnState.h>
#include <aws/ec2/model/GatewayType.h>
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
    AWS_EC2_API VpnConnection() = default;
    AWS_EC2_API VpnConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpnConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * Amazon Web Services VPN connection. A value of <code>VPN-Classic</code>
     * indicates an Amazon Web Services Classic VPN connection.</p>
     */
    inline const Aws::String& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = Aws::String>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = Aws::String>
    VpnConnection& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    VpnConnection& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const { return m_coreNetworkArn; }
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }
    template<typename CoreNetworkArnT = Aws::String>
    void SetCoreNetworkArn(CoreNetworkArnT&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::forward<CoreNetworkArnT>(value); }
    template<typename CoreNetworkArnT = Aws::String>
    VpnConnection& WithCoreNetworkArn(CoreNetworkArnT&& value) { SetCoreNetworkArn(std::forward<CoreNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the core network attachment.</p>
     */
    inline const Aws::String& GetCoreNetworkAttachmentArn() const { return m_coreNetworkAttachmentArn; }
    inline bool CoreNetworkAttachmentArnHasBeenSet() const { return m_coreNetworkAttachmentArnHasBeenSet; }
    template<typename CoreNetworkAttachmentArnT = Aws::String>
    void SetCoreNetworkAttachmentArn(CoreNetworkAttachmentArnT&& value) { m_coreNetworkAttachmentArnHasBeenSet = true; m_coreNetworkAttachmentArn = std::forward<CoreNetworkAttachmentArnT>(value); }
    template<typename CoreNetworkAttachmentArnT = Aws::String>
    VpnConnection& WithCoreNetworkAttachmentArn(CoreNetworkAttachmentArnT&& value) { SetCoreNetworkAttachmentArn(std::forward<CoreNetworkAttachmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the gateway association.</p>
     */
    inline GatewayAssociationState GetGatewayAssociationState() const { return m_gatewayAssociationState; }
    inline bool GatewayAssociationStateHasBeenSet() const { return m_gatewayAssociationStateHasBeenSet; }
    inline void SetGatewayAssociationState(GatewayAssociationState value) { m_gatewayAssociationStateHasBeenSet = true; m_gatewayAssociationState = value; }
    inline VpnConnection& WithGatewayAssociationState(GatewayAssociationState value) { SetGatewayAssociationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPN connection options.</p>
     */
    inline const VpnConnectionOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = VpnConnectionOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = VpnConnectionOptions>
    VpnConnection& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static routes associated with the VPN connection.</p>
     */
    inline const Aws::Vector<VpnStaticRoute>& GetRoutes() const { return m_routes; }
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }
    template<typename RoutesT = Aws::Vector<VpnStaticRoute>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<VpnStaticRoute>>
    VpnConnection& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = VpnStaticRoute>
    VpnConnection& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the VPN connection.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpnConnection& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpnConnection& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline const Aws::Vector<VgwTelemetry>& GetVgwTelemetry() const { return m_vgwTelemetry; }
    inline bool VgwTelemetryHasBeenSet() const { return m_vgwTelemetryHasBeenSet; }
    template<typename VgwTelemetryT = Aws::Vector<VgwTelemetry>>
    void SetVgwTelemetry(VgwTelemetryT&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry = std::forward<VgwTelemetryT>(value); }
    template<typename VgwTelemetryT = Aws::Vector<VgwTelemetry>>
    VpnConnection& WithVgwTelemetry(VgwTelemetryT&& value) { SetVgwTelemetry(std::forward<VgwTelemetryT>(value)); return *this;}
    template<typename VgwTelemetryT = VgwTelemetry>
    VpnConnection& AddVgwTelemetry(VgwTelemetryT&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry.emplace_back(std::forward<VgwTelemetryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret storing the
     * pre-shared key(s) for the VPN connection.</p>
     */
    inline const Aws::String& GetPreSharedKeyArn() const { return m_preSharedKeyArn; }
    inline bool PreSharedKeyArnHasBeenSet() const { return m_preSharedKeyArnHasBeenSet; }
    template<typename PreSharedKeyArnT = Aws::String>
    void SetPreSharedKeyArn(PreSharedKeyArnT&& value) { m_preSharedKeyArnHasBeenSet = true; m_preSharedKeyArn = std::forward<PreSharedKeyArnT>(value); }
    template<typename PreSharedKeyArnT = Aws::String>
    VpnConnection& WithPreSharedKeyArn(PreSharedKeyArnT&& value) { SetPreSharedKeyArn(std::forward<PreSharedKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const { return m_vpnConnectionId; }
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }
    template<typename VpnConnectionIdT = Aws::String>
    void SetVpnConnectionId(VpnConnectionIdT&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::forward<VpnConnectionIdT>(value); }
    template<typename VpnConnectionIdT = Aws::String>
    VpnConnection& WithVpnConnectionId(VpnConnectionIdT&& value) { SetVpnConnectionId(std::forward<VpnConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline VpnState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(VpnState value) { m_stateHasBeenSet = true; m_state = value; }
    inline VpnConnection& WithState(VpnState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the VPN connection's customer gateway (in
     * the native XML format). This element is always present in the
     * <a>CreateVpnConnection</a> response; however, it's present in the
     * <a>DescribeVpnConnections</a> response only if the VPN connection is in the
     * <code>pending</code> or <code>available</code> state.</p>
     */
    inline const Aws::String& GetCustomerGatewayConfiguration() const { return m_customerGatewayConfiguration; }
    inline bool CustomerGatewayConfigurationHasBeenSet() const { return m_customerGatewayConfigurationHasBeenSet; }
    template<typename CustomerGatewayConfigurationT = Aws::String>
    void SetCustomerGatewayConfiguration(CustomerGatewayConfigurationT&& value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration = std::forward<CustomerGatewayConfigurationT>(value); }
    template<typename CustomerGatewayConfigurationT = Aws::String>
    VpnConnection& WithCustomerGatewayConfiguration(CustomerGatewayConfigurationT&& value) { SetCustomerGatewayConfiguration(std::forward<CustomerGatewayConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of VPN connection.</p>
     */
    inline GatewayType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GatewayType value) { m_typeHasBeenSet = true; m_type = value; }
    inline VpnConnection& WithType(GatewayType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer gateway at your end of the VPN connection.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const { return m_customerGatewayId; }
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }
    template<typename CustomerGatewayIdT = Aws::String>
    void SetCustomerGatewayId(CustomerGatewayIdT&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::forward<CustomerGatewayIdT>(value); }
    template<typename CustomerGatewayIdT = Aws::String>
    VpnConnection& WithCustomerGatewayId(CustomerGatewayIdT&& value) { SetCustomerGatewayId(std::forward<CustomerGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway at the Amazon Web Services side of the
     * VPN connection.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const { return m_vpnGatewayId; }
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }
    template<typename VpnGatewayIdT = Aws::String>
    void SetVpnGatewayId(VpnGatewayIdT&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::forward<VpnGatewayIdT>(value); }
    template<typename VpnGatewayIdT = Aws::String>
    VpnConnection& WithVpnGatewayId(VpnGatewayIdT&& value) { SetVpnGatewayId(std::forward<VpnGatewayIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_coreNetworkAttachmentArn;
    bool m_coreNetworkAttachmentArnHasBeenSet = false;

    GatewayAssociationState m_gatewayAssociationState{GatewayAssociationState::NOT_SET};
    bool m_gatewayAssociationStateHasBeenSet = false;

    VpnConnectionOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<VpnStaticRoute> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<VgwTelemetry> m_vgwTelemetry;
    bool m_vgwTelemetryHasBeenSet = false;

    Aws::String m_preSharedKeyArn;
    bool m_preSharedKeyArnHasBeenSet = false;

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    VpnState m_state{VpnState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_customerGatewayConfiguration;
    bool m_customerGatewayConfigurationHasBeenSet = false;

    GatewayType m_type{GatewayType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
