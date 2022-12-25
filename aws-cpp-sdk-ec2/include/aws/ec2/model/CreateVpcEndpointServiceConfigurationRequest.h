/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateVpcEndpointServiceConfigurationRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateVpcEndpointServiceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVpcEndpointServiceConfiguration"; }

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
    inline CreateVpcEndpointServiceConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Indicates whether requests from service consumers to create an endpoint to
     * your service must be accepted manually.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Indicates whether requests from service consumers to create an endpoint to
     * your service must be accepted manually.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>Indicates whether requests from service consumers to create an endpoint to
     * your service must be accepted manually.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicates whether requests from service consumers to create an endpoint to
     * your service must be accepted manually.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for
     * your service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const{ return m_gatewayLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline void SetGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline void SetGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetGatewayLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetGatewayLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddGatewayLoadBalancerArns(const Aws::String& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddGatewayLoadBalancerArns(Aws::String&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of one or more Gateway Load Balancers.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddGatewayLoadBalancerArns(const char* value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedIpAddressTypes() const{ return m_supportedIpAddressTypes; }

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline bool SupportedIpAddressTypesHasBeenSet() const { return m_supportedIpAddressTypesHasBeenSet; }

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline void SetSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = value; }

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline void SetSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = std::move(value); }

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { SetSupportedIpAddressTypes(value); return *this;}

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { SetSupportedIpAddressTypes(std::move(value)); return *this;}

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedIpAddressTypes(const Aws::String& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedIpAddressTypes(Aws::String&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedIpAddressTypes(const char* value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The tags to associate with the service.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to associate with the service.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to associate with the service.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to associate with the service.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to associate with the service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to associate with the service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to associate with the service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to associate with the service.</p>
     */
    inline CreateVpcEndpointServiceConfigurationRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatewayLoadBalancerArns;
    bool m_gatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedIpAddressTypes;
    bool m_supportedIpAddressTypesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
