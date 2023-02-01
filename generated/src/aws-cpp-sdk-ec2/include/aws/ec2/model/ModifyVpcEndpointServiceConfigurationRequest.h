/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcEndpointServiceConfigurationRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcEndpointServiceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEndpointServiceConfiguration"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the service.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the
     * endpoint service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>(Interface endpoint configuration) Removes the private DNS name of the
     * endpoint service.</p>
     */
    inline bool GetRemovePrivateDnsName() const{ return m_removePrivateDnsName; }

    /**
     * <p>(Interface endpoint configuration) Removes the private DNS name of the
     * endpoint service.</p>
     */
    inline bool RemovePrivateDnsNameHasBeenSet() const { return m_removePrivateDnsNameHasBeenSet; }

    /**
     * <p>(Interface endpoint configuration) Removes the private DNS name of the
     * endpoint service.</p>
     */
    inline void SetRemovePrivateDnsName(bool value) { m_removePrivateDnsNameHasBeenSet = true; m_removePrivateDnsName = value; }

    /**
     * <p>(Interface endpoint configuration) Removes the private DNS name of the
     * endpoint service.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemovePrivateDnsName(bool value) { SetRemovePrivateDnsName(value); return *this;}


    /**
     * <p>Indicates whether requests to create an endpoint to your service must be
     * accepted.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Indicates whether requests to create an endpoint to your service must be
     * accepted.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>Indicates whether requests to create an endpoint to your service must be
     * accepted.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicates whether requests to create an endpoint to your service must be
     * accepted.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddNetworkLoadBalancerArns() const{ return m_addNetworkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline bool AddNetworkLoadBalancerArnsHasBeenSet() const { return m_addNetworkLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline void SetAddNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline void SetAddNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetAddNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetAddNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddNetworkLoadBalancerArns(const Aws::String& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddNetworkLoadBalancerArns(Aws::String&& value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddNetworkLoadBalancerArns(const char* value) { m_addNetworkLoadBalancerArnsHasBeenSet = true; m_addNetworkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveNetworkLoadBalancerArns() const{ return m_removeNetworkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline bool RemoveNetworkLoadBalancerArnsHasBeenSet() const { return m_removeNetworkLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline void SetRemoveNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline void SetRemoveNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetRemoveNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetRemoveNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveNetworkLoadBalancerArns(const Aws::String& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveNetworkLoadBalancerArns(Aws::String&& value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveNetworkLoadBalancerArns(const char* value) { m_removeNetworkLoadBalancerArnsHasBeenSet = true; m_removeNetworkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddGatewayLoadBalancerArns() const{ return m_addGatewayLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline bool AddGatewayLoadBalancerArnsHasBeenSet() const { return m_addGatewayLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline void SetAddGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_addGatewayLoadBalancerArnsHasBeenSet = true; m_addGatewayLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline void SetAddGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_addGatewayLoadBalancerArnsHasBeenSet = true; m_addGatewayLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetAddGatewayLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetAddGatewayLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddGatewayLoadBalancerArns(const Aws::String& value) { m_addGatewayLoadBalancerArnsHasBeenSet = true; m_addGatewayLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddGatewayLoadBalancerArns(Aws::String&& value) { m_addGatewayLoadBalancerArnsHasBeenSet = true; m_addGatewayLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to add to your
     * service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddGatewayLoadBalancerArns(const char* value) { m_addGatewayLoadBalancerArnsHasBeenSet = true; m_addGatewayLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveGatewayLoadBalancerArns() const{ return m_removeGatewayLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline bool RemoveGatewayLoadBalancerArnsHasBeenSet() const { return m_removeGatewayLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline void SetRemoveGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_removeGatewayLoadBalancerArnsHasBeenSet = true; m_removeGatewayLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline void SetRemoveGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_removeGatewayLoadBalancerArnsHasBeenSet = true; m_removeGatewayLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetRemoveGatewayLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetRemoveGatewayLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveGatewayLoadBalancerArns(const Aws::String& value) { m_removeGatewayLoadBalancerArnsHasBeenSet = true; m_removeGatewayLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveGatewayLoadBalancerArns(Aws::String&& value) { m_removeGatewayLoadBalancerArnsHasBeenSet = true; m_removeGatewayLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of Gateway Load Balancers to remove from
     * your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveGatewayLoadBalancerArns(const char* value) { m_removeGatewayLoadBalancerArnsHasBeenSet = true; m_removeGatewayLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSupportedIpAddressTypes() const{ return m_addSupportedIpAddressTypes; }

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline bool AddSupportedIpAddressTypesHasBeenSet() const { return m_addSupportedIpAddressTypesHasBeenSet; }

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline void SetAddSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { m_addSupportedIpAddressTypesHasBeenSet = true; m_addSupportedIpAddressTypes = value; }

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline void SetAddSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { m_addSupportedIpAddressTypesHasBeenSet = true; m_addSupportedIpAddressTypes = std::move(value); }

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { SetAddSupportedIpAddressTypes(value); return *this;}

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithAddSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { SetAddSupportedIpAddressTypes(std::move(value)); return *this;}

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddSupportedIpAddressTypes(const Aws::String& value) { m_addSupportedIpAddressTypesHasBeenSet = true; m_addSupportedIpAddressTypes.push_back(value); return *this; }

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddSupportedIpAddressTypes(Aws::String&& value) { m_addSupportedIpAddressTypesHasBeenSet = true; m_addSupportedIpAddressTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP address types to add to your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddAddSupportedIpAddressTypes(const char* value) { m_addSupportedIpAddressTypesHasBeenSet = true; m_addSupportedIpAddressTypes.push_back(value); return *this; }


    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSupportedIpAddressTypes() const{ return m_removeSupportedIpAddressTypes; }

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline bool RemoveSupportedIpAddressTypesHasBeenSet() const { return m_removeSupportedIpAddressTypesHasBeenSet; }

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline void SetRemoveSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { m_removeSupportedIpAddressTypesHasBeenSet = true; m_removeSupportedIpAddressTypes = value; }

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline void SetRemoveSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { m_removeSupportedIpAddressTypesHasBeenSet = true; m_removeSupportedIpAddressTypes = std::move(value); }

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { SetRemoveSupportedIpAddressTypes(value); return *this;}

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& WithRemoveSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { SetRemoveSupportedIpAddressTypes(std::move(value)); return *this;}

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveSupportedIpAddressTypes(const Aws::String& value) { m_removeSupportedIpAddressTypesHasBeenSet = true; m_removeSupportedIpAddressTypes.push_back(value); return *this; }

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveSupportedIpAddressTypes(Aws::String&& value) { m_removeSupportedIpAddressTypesHasBeenSet = true; m_removeSupportedIpAddressTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP address types to remove from your service configuration.</p>
     */
    inline ModifyVpcEndpointServiceConfigurationRequest& AddRemoveSupportedIpAddressTypes(const char* value) { m_removeSupportedIpAddressTypesHasBeenSet = true; m_removeSupportedIpAddressTypes.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    bool m_removePrivateDnsName;
    bool m_removePrivateDnsNameHasBeenSet = false;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_addNetworkLoadBalancerArns;
    bool m_addNetworkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeNetworkLoadBalancerArns;
    bool m_removeNetworkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_addGatewayLoadBalancerArns;
    bool m_addGatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeGatewayLoadBalancerArns;
    bool m_removeGatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSupportedIpAddressTypes;
    bool m_addSupportedIpAddressTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSupportedIpAddressTypes;
    bool m_removeSupportedIpAddressTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
