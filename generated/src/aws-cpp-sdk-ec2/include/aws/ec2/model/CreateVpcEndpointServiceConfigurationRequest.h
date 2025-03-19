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
    AWS_EC2_API CreateVpcEndpointServiceConfigurationRequest() = default;

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateVpcEndpointServiceConfigurationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether requests from service consumers to create an endpoint to
     * your service must be accepted manually.</p>
     */
    inline bool GetAcceptanceRequired() const { return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline CreateVpcEndpointServiceConfigurationRequest& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Interface endpoint configuration) The private DNS name to assign to the VPC
     * endpoint service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const { return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    template<typename PrivateDnsNameT = Aws::String>
    void SetPrivateDnsName(PrivateDnsNameT&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::forward<PrivateDnsNameT>(value); }
    template<typename PrivateDnsNameT = Aws::String>
    CreateVpcEndpointServiceConfigurationRequest& WithPrivateDnsName(PrivateDnsNameT&& value) { SetPrivateDnsName(std::forward<PrivateDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const { return m_networkLoadBalancerArns; }
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::forward<NetworkLoadBalancerArnsT>(value); }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    CreateVpcEndpointServiceConfigurationRequest& WithNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { SetNetworkLoadBalancerArns(std::forward<NetworkLoadBalancerArnsT>(value)); return *this;}
    template<typename NetworkLoadBalancerArnsT = Aws::String>
    CreateVpcEndpointServiceConfigurationRequest& AddNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.emplace_back(std::forward<NetworkLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const { return m_gatewayLoadBalancerArns; }
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::forward<GatewayLoadBalancerArnsT>(value); }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    CreateVpcEndpointServiceConfigurationRequest& WithGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { SetGatewayLoadBalancerArns(std::forward<GatewayLoadBalancerArnsT>(value)); return *this;}
    template<typename GatewayLoadBalancerArnsT = Aws::String>
    CreateVpcEndpointServiceConfigurationRequest& AddGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.emplace_back(std::forward<GatewayLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported IP address types. The possible values are <code>ipv4</code> and
     * <code>ipv6</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedIpAddressTypes() const { return m_supportedIpAddressTypes; }
    inline bool SupportedIpAddressTypesHasBeenSet() const { return m_supportedIpAddressTypesHasBeenSet; }
    template<typename SupportedIpAddressTypesT = Aws::Vector<Aws::String>>
    void SetSupportedIpAddressTypes(SupportedIpAddressTypesT&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = std::forward<SupportedIpAddressTypesT>(value); }
    template<typename SupportedIpAddressTypesT = Aws::Vector<Aws::String>>
    CreateVpcEndpointServiceConfigurationRequest& WithSupportedIpAddressTypes(SupportedIpAddressTypesT&& value) { SetSupportedIpAddressTypes(std::forward<SupportedIpAddressTypesT>(value)); return *this;}
    template<typename SupportedIpAddressTypesT = Aws::String>
    CreateVpcEndpointServiceConfigurationRequest& AddSupportedIpAddressTypes(SupportedIpAddressTypesT&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.emplace_back(std::forward<SupportedIpAddressTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Regions from which service consumers can access the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedRegions() const { return m_supportedRegions; }
    inline bool SupportedRegionsHasBeenSet() const { return m_supportedRegionsHasBeenSet; }
    template<typename SupportedRegionsT = Aws::Vector<Aws::String>>
    void SetSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = std::forward<SupportedRegionsT>(value); }
    template<typename SupportedRegionsT = Aws::Vector<Aws::String>>
    CreateVpcEndpointServiceConfigurationRequest& WithSupportedRegions(SupportedRegionsT&& value) { SetSupportedRegions(std::forward<SupportedRegionsT>(value)); return *this;}
    template<typename SupportedRegionsT = Aws::String>
    CreateVpcEndpointServiceConfigurationRequest& AddSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.emplace_back(std::forward<SupportedRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateVpcEndpointServiceConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the service.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateVpcEndpointServiceConfigurationRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateVpcEndpointServiceConfigurationRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    bool m_acceptanceRequired{false};
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
