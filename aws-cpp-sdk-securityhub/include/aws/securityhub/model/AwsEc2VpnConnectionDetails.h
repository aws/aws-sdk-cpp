/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionVgwTelemetryDetails.h>
#include <aws/securityhub/model/AwsEc2VpnConnectionRoutesDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an Amazon EC2 VPN connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionDetails();
    AWS_SECURITYHUB_API AwsEc2VpnConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }

    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline bool VpnConnectionIdHasBeenSet() const { return m_vpnConnectionIdHasBeenSet; }

    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = value; }

    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::move(value); }

    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId.assign(value); }

    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}

    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}


    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline AwsEc2VpnConnectionDetails& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline AwsEc2VpnConnectionDetails& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The current state of the VPN connection. Valid values are as follows:</p>
     * <ul> <li> <p> <code>available</code> </p> </li> <li> <p> <code>deleted</code>
     * </p> </li> <li> <p> <code>deleting</code> </p> </li> <li> <p>
     * <code>pending</code> </p> </li> </ul>
     */
    inline AwsEc2VpnConnectionDetails& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }

    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline bool CustomerGatewayIdHasBeenSet() const { return m_customerGatewayIdHasBeenSet; }

    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = value; }

    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::move(value); }

    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId.assign(value); }

    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}

    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the customer gateway that is at your end of the VPN
     * connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}


    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline const Aws::String& GetCustomerGatewayConfiguration() const{ return m_customerGatewayConfiguration; }

    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline bool CustomerGatewayConfigurationHasBeenSet() const { return m_customerGatewayConfigurationHasBeenSet; }

    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline void SetCustomerGatewayConfiguration(const Aws::String& value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration = value; }

    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline void SetCustomerGatewayConfiguration(Aws::String&& value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration = std::move(value); }

    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline void SetCustomerGatewayConfiguration(const char* value) { m_customerGatewayConfigurationHasBeenSet = true; m_customerGatewayConfiguration.assign(value); }

    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCustomerGatewayConfiguration(const Aws::String& value) { SetCustomerGatewayConfiguration(value); return *this;}

    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCustomerGatewayConfiguration(Aws::String&& value) { SetCustomerGatewayConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration information for the VPN connection's customer gateway, in
     * the native XML format.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCustomerGatewayConfiguration(const char* value) { SetCustomerGatewayConfiguration(value); return *this;}


    /**
     * <p>The type of VPN connection.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }

    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline bool VpnGatewayIdHasBeenSet() const { return m_vpnGatewayIdHasBeenSet; }

    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }

    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }

    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the virtual private gateway that is at the Amazon Web
     * Services side of the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}


    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category of the VPN connection. <code>VPN</code> indicates an Amazon Web
     * Services VPN connection. <code>VPN-Classic</code> indicates an Amazon Web
     * Services Classic VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline const Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>& GetVgwTelemetry() const{ return m_vgwTelemetry; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline bool VgwTelemetryHasBeenSet() const { return m_vgwTelemetryHasBeenSet; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline void SetVgwTelemetry(const Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry = value; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline void SetVgwTelemetry(Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry = std::move(value); }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVgwTelemetry(const Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>& value) { SetVgwTelemetry(value); return *this;}

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithVgwTelemetry(Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails>&& value) { SetVgwTelemetry(std::move(value)); return *this;}

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline AwsEc2VpnConnectionDetails& AddVgwTelemetry(const AwsEc2VpnConnectionVgwTelemetryDetails& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry.push_back(value); return *this; }

    /**
     * <p>Information about the VPN tunnel.</p>
     */
    inline AwsEc2VpnConnectionDetails& AddVgwTelemetry(AwsEc2VpnConnectionVgwTelemetryDetails&& value) { m_vgwTelemetryHasBeenSet = true; m_vgwTelemetry.push_back(std::move(value)); return *this; }


    /**
     * <p>The VPN connection options.</p>
     */
    inline const AwsEc2VpnConnectionOptionsDetails& GetOptions() const{ return m_options; }

    /**
     * <p>The VPN connection options.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The VPN connection options.</p>
     */
    inline void SetOptions(const AwsEc2VpnConnectionOptionsDetails& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The VPN connection options.</p>
     */
    inline void SetOptions(AwsEc2VpnConnectionOptionsDetails&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The VPN connection options.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithOptions(const AwsEc2VpnConnectionOptionsDetails& value) { SetOptions(value); return *this;}

    /**
     * <p>The VPN connection options.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithOptions(AwsEc2VpnConnectionOptionsDetails&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline const Aws::Vector<AwsEc2VpnConnectionRoutesDetails>& GetRoutes() const{ return m_routes; }

    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline bool RoutesHasBeenSet() const { return m_routesHasBeenSet; }

    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline void SetRoutes(const Aws::Vector<AwsEc2VpnConnectionRoutesDetails>& value) { m_routesHasBeenSet = true; m_routes = value; }

    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline void SetRoutes(Aws::Vector<AwsEc2VpnConnectionRoutesDetails>&& value) { m_routesHasBeenSet = true; m_routes = std::move(value); }

    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithRoutes(const Aws::Vector<AwsEc2VpnConnectionRoutesDetails>& value) { SetRoutes(value); return *this;}

    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithRoutes(Aws::Vector<AwsEc2VpnConnectionRoutesDetails>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& AddRoutes(const AwsEc2VpnConnectionRoutesDetails& value) { m_routesHasBeenSet = true; m_routes.push_back(value); return *this; }

    /**
     * <p>The static routes that are associated with the VPN connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& AddRoutes(AwsEc2VpnConnectionRoutesDetails&& value) { m_routesHasBeenSet = true; m_routes.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the transit gateway that is associated with the VPN
     * connection.</p>
     */
    inline AwsEc2VpnConnectionDetails& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}

  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_customerGatewayConfiguration;
    bool m_customerGatewayConfigurationHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    Aws::String m_category;
    bool m_categoryHasBeenSet = false;

    Aws::Vector<AwsEc2VpnConnectionVgwTelemetryDetails> m_vgwTelemetry;
    bool m_vgwTelemetryHasBeenSet = false;

    AwsEc2VpnConnectionOptionsDetails m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<AwsEc2VpnConnectionRoutesDetails> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
