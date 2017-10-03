/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/VpnState.h>
#include <aws/ec2/model/GatewayType.h>
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
  class AWS_EC2_API VpnConnection
  {
  public:
    VpnConnection();
    VpnConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpnConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic
     * VPN connection. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS
     * Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic
     * VPN connection. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS
     * Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline void SetCategory(const Aws::String& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic
     * VPN connection. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS
     * Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline void SetCategory(Aws::String&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic
     * VPN connection. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS
     * Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline void SetCategory(const char* value) { m_categoryHasBeenSet = true; m_category.assign(value); }

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic
     * VPN connection. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS
     * Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline VpnConnection& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic
     * VPN connection. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS
     * Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline VpnConnection& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}

    /**
     * <p>The category of the VPN connection. A value of <code>VPN</code> indicates an
     * AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic
     * VPN connection. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS
     * Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User
     * Guide</i>.</p>
     */
    inline VpnConnection& WithCategory(const char* value) { SetCategory(value); return *this;}


    /**
     * <p>The current state of the VPN connection.</p>
     */
    inline const VpnState& GetState() const{ return m_state; }

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
     * <p>The ID of the virtual private gateway at the AWS side of the VPN
     * connection.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }

    /**
     * <p>The ID of the virtual private gateway at the AWS side of the VPN
     * connection.</p>
     */
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway at the AWS side of the VPN
     * connection.</p>
     */
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway at the AWS side of the VPN
     * connection.</p>
     */
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway at the AWS side of the VPN
     * connection.</p>
     */
    inline VpnConnection& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway at the AWS side of the VPN
     * connection.</p>
     */
    inline VpnConnection& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway at the AWS side of the VPN
     * connection.</p>
     */
    inline VpnConnection& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}


    /**
     * <p>The VPN connection options.</p>
     */
    inline const VpnConnectionOptions& GetOptions() const{ return m_options; }

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
    bool m_customerGatewayConfigurationHasBeenSet;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet;

    Aws::String m_category;
    bool m_categoryHasBeenSet;

    VpnState m_state;
    bool m_stateHasBeenSet;

    GatewayType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet;

    VpnConnectionOptions m_options;
    bool m_optionsHasBeenSet;

    Aws::Vector<VpnStaticRoute> m_routes;
    bool m_routesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<VgwTelemetry> m_vgwTelemetry;
    bool m_vgwTelemetryHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
