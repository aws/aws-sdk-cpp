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

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVpcEndpointServiceConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether requests from service consumers to create an endpoint to
     * your service must be accepted manually.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline CreateVpcEndpointServiceConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }
    inline CreateVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }
    inline CreateVpcEndpointServiceConfigurationRequest& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const{ return m_gatewayLoadBalancerArns; }
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }
    inline void SetGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = value; }
    inline void SetGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::move(value); }
    inline CreateVpcEndpointServiceConfigurationRequest& WithGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetGatewayLoadBalancerArns(value); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetGatewayLoadBalancerArns(std::move(value)); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& AddGatewayLoadBalancerArns(const Aws::String& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddGatewayLoadBalancerArns(Aws::String&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddGatewayLoadBalancerArns(const char* value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedIpAddressTypes() const{ return m_supportedIpAddressTypes; }
    inline bool SupportedIpAddressTypesHasBeenSet() const { return m_supportedIpAddressTypesHasBeenSet; }
    inline void SetSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = value; }
    inline void SetSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = std::move(value); }
    inline CreateVpcEndpointServiceConfigurationRequest& WithSupportedIpAddressTypes(const Aws::Vector<Aws::String>& value) { SetSupportedIpAddressTypes(value); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithSupportedIpAddressTypes(Aws::Vector<Aws::String>&& value) { SetSupportedIpAddressTypes(std::move(value)); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedIpAddressTypes(const Aws::String& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedIpAddressTypes(Aws::String&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedIpAddressTypes(const char* value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Regions from which service consumers can access the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedRegions() const{ return m_supportedRegions; }
    inline bool SupportedRegionsHasBeenSet() const { return m_supportedRegionsHasBeenSet; }
    inline void SetSupportedRegions(const Aws::Vector<Aws::String>& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = value; }
    inline void SetSupportedRegions(Aws::Vector<Aws::String>&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = std::move(value); }
    inline CreateVpcEndpointServiceConfigurationRequest& WithSupportedRegions(const Aws::Vector<Aws::String>& value) { SetSupportedRegions(value); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithSupportedRegions(Aws::Vector<Aws::String>&& value) { SetSupportedRegions(std::move(value)); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedRegions(const Aws::String& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.push_back(value); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedRegions(Aws::String&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.push_back(std::move(value)); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddSupportedRegions(const char* value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the service.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateVpcEndpointServiceConfigurationRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateVpcEndpointServiceConfigurationRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateVpcEndpointServiceConfigurationRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}
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

    Aws::Vector<Aws::String> m_supportedRegions;
    bool m_supportedRegionsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
