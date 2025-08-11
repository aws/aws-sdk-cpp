/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ServiceState.h>
#include <aws/ec2/model/PrivateDnsNameConfiguration.h>
#include <aws/ec2/model/PayerResponsibility.h>
#include <aws/ec2/model/ServiceTypeDetail.h>
#include <aws/ec2/model/ServiceConnectivityType.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/SupportedRegionDetail.h>
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
   * <p>Describes a service configuration for a VPC endpoint service.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceConfiguration
  {
  public:
    AWS_EC2_API ServiceConfiguration() = default;
    AWS_EC2_API ServiceConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ServiceConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of service.</p>
     */
    inline const Aws::Vector<ServiceTypeDetail>& GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    template<typename ServiceTypeT = Aws::Vector<ServiceTypeDetail>>
    void SetServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::forward<ServiceTypeT>(value); }
    template<typename ServiceTypeT = Aws::Vector<ServiceTypeDetail>>
    ServiceConfiguration& WithServiceType(ServiceTypeT&& value) { SetServiceType(std::forward<ServiceTypeT>(value)); return *this;}
    template<typename ServiceTypeT = ServiceTypeDetail>
    ServiceConfiguration& AddServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.emplace_back(std::forward<ServiceTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    ServiceConfiguration& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ServiceConfiguration& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service state.</p>
     */
    inline ServiceState GetServiceState() const { return m_serviceState; }
    inline bool ServiceStateHasBeenSet() const { return m_serviceStateHasBeenSet; }
    inline void SetServiceState(ServiceState value) { m_serviceStateHasBeenSet = true; m_serviceState = value; }
    inline ServiceConfiguration& WithServiceState(ServiceState value) { SetServiceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Availability Zones in which the service is available.</p>
     * <p>Either <code>AvailabilityZone</code> or <code>AvailabilityZoneId</code> can
     * be specified, but not both</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZoneIds() const { return m_availabilityZoneIds; }
    inline bool AvailabilityZoneIdsHasBeenSet() const { return m_availabilityZoneIdsHasBeenSet; }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    void SetAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds = std::forward<AvailabilityZoneIdsT>(value); }
    template<typename AvailabilityZoneIdsT = Aws::Vector<Aws::String>>
    ServiceConfiguration& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value)); return *this;}
    template<typename AvailabilityZoneIdsT = Aws::String>
    ServiceConfiguration& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zones in which the service is available.</p> <p>Either
     * <code>AvailabilityZone</code> or <code>AvailabilityZoneId</code> can be
     * specified, but not both</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    ServiceConfiguration& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    ServiceConfiguration& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether requests from other Amazon Web Services accounts to create
     * an endpoint to the service must first be accepted.</p>
     */
    inline bool GetAcceptanceRequired() const { return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline ServiceConfiguration& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service manages its VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline bool GetManagesVpcEndpoints() const { return m_managesVpcEndpoints; }
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }
    inline ServiceConfiguration& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const { return m_networkLoadBalancerArns; }
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::forward<NetworkLoadBalancerArnsT>(value); }
    template<typename NetworkLoadBalancerArnsT = Aws::Vector<Aws::String>>
    ServiceConfiguration& WithNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { SetNetworkLoadBalancerArns(std::forward<NetworkLoadBalancerArnsT>(value)); return *this;}
    template<typename NetworkLoadBalancerArnsT = Aws::String>
    ServiceConfiguration& AddNetworkLoadBalancerArns(NetworkLoadBalancerArnsT&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.emplace_back(std::forward<NetworkLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const { return m_gatewayLoadBalancerArns; }
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    void SetGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::forward<GatewayLoadBalancerArnsT>(value); }
    template<typename GatewayLoadBalancerArnsT = Aws::Vector<Aws::String>>
    ServiceConfiguration& WithGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { SetGatewayLoadBalancerArns(std::forward<GatewayLoadBalancerArnsT>(value)); return *this;}
    template<typename GatewayLoadBalancerArnsT = Aws::String>
    ServiceConfiguration& AddGatewayLoadBalancerArns(GatewayLoadBalancerArnsT&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.emplace_back(std::forward<GatewayLoadBalancerArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported IP address types.</p>
     */
    inline const Aws::Vector<ServiceConnectivityType>& GetSupportedIpAddressTypes() const { return m_supportedIpAddressTypes; }
    inline bool SupportedIpAddressTypesHasBeenSet() const { return m_supportedIpAddressTypesHasBeenSet; }
    template<typename SupportedIpAddressTypesT = Aws::Vector<ServiceConnectivityType>>
    void SetSupportedIpAddressTypes(SupportedIpAddressTypesT&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = std::forward<SupportedIpAddressTypesT>(value); }
    template<typename SupportedIpAddressTypesT = Aws::Vector<ServiceConnectivityType>>
    ServiceConfiguration& WithSupportedIpAddressTypes(SupportedIpAddressTypesT&& value) { SetSupportedIpAddressTypes(std::forward<SupportedIpAddressTypesT>(value)); return *this;}
    inline ServiceConfiguration& AddSupportedIpAddressTypes(ServiceConnectivityType value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The DNS names for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaseEndpointDnsNames() const { return m_baseEndpointDnsNames; }
    inline bool BaseEndpointDnsNamesHasBeenSet() const { return m_baseEndpointDnsNamesHasBeenSet; }
    template<typename BaseEndpointDnsNamesT = Aws::Vector<Aws::String>>
    void SetBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = std::forward<BaseEndpointDnsNamesT>(value); }
    template<typename BaseEndpointDnsNamesT = Aws::Vector<Aws::String>>
    ServiceConfiguration& WithBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { SetBaseEndpointDnsNames(std::forward<BaseEndpointDnsNamesT>(value)); return *this;}
    template<typename BaseEndpointDnsNamesT = Aws::String>
    ServiceConfiguration& AddBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.emplace_back(std::forward<BaseEndpointDnsNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The private DNS name for the service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const { return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    template<typename PrivateDnsNameT = Aws::String>
    void SetPrivateDnsName(PrivateDnsNameT&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::forward<PrivateDnsNameT>(value); }
    template<typename PrivateDnsNameT = Aws::String>
    ServiceConfiguration& WithPrivateDnsName(PrivateDnsNameT&& value) { SetPrivateDnsName(std::forward<PrivateDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the endpoint service private DNS name configuration.</p>
     */
    inline const PrivateDnsNameConfiguration& GetPrivateDnsNameConfiguration() const { return m_privateDnsNameConfiguration; }
    inline bool PrivateDnsNameConfigurationHasBeenSet() const { return m_privateDnsNameConfigurationHasBeenSet; }
    template<typename PrivateDnsNameConfigurationT = PrivateDnsNameConfiguration>
    void SetPrivateDnsNameConfiguration(PrivateDnsNameConfigurationT&& value) { m_privateDnsNameConfigurationHasBeenSet = true; m_privateDnsNameConfiguration = std::forward<PrivateDnsNameConfigurationT>(value); }
    template<typename PrivateDnsNameConfigurationT = PrivateDnsNameConfiguration>
    ServiceConfiguration& WithPrivateDnsNameConfiguration(PrivateDnsNameConfigurationT&& value) { SetPrivateDnsNameConfiguration(std::forward<PrivateDnsNameConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payer responsibility.</p>
     */
    inline PayerResponsibility GetPayerResponsibility() const { return m_payerResponsibility; }
    inline bool PayerResponsibilityHasBeenSet() const { return m_payerResponsibilityHasBeenSet; }
    inline void SetPayerResponsibility(PayerResponsibility value) { m_payerResponsibilityHasBeenSet = true; m_payerResponsibility = value; }
    inline ServiceConfiguration& WithPayerResponsibility(PayerResponsibility value) { SetPayerResponsibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the service.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ServiceConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ServiceConfiguration& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported Regions.</p>
     */
    inline const Aws::Vector<SupportedRegionDetail>& GetSupportedRegions() const { return m_supportedRegions; }
    inline bool SupportedRegionsHasBeenSet() const { return m_supportedRegionsHasBeenSet; }
    template<typename SupportedRegionsT = Aws::Vector<SupportedRegionDetail>>
    void SetSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions = std::forward<SupportedRegionsT>(value); }
    template<typename SupportedRegionsT = Aws::Vector<SupportedRegionDetail>>
    ServiceConfiguration& WithSupportedRegions(SupportedRegionsT&& value) { SetSupportedRegions(std::forward<SupportedRegionsT>(value)); return *this;}
    template<typename SupportedRegionsT = SupportedRegionDetail>
    ServiceConfiguration& AddSupportedRegions(SupportedRegionsT&& value) { m_supportedRegionsHasBeenSet = true; m_supportedRegions.emplace_back(std::forward<SupportedRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether consumers can access the service from a Region other than
     * the Region where the service is hosted.</p>
     */
    inline bool GetRemoteAccessEnabled() const { return m_remoteAccessEnabled; }
    inline bool RemoteAccessEnabledHasBeenSet() const { return m_remoteAccessEnabledHasBeenSet; }
    inline void SetRemoteAccessEnabled(bool value) { m_remoteAccessEnabledHasBeenSet = true; m_remoteAccessEnabled = value; }
    inline ServiceConfiguration& WithRemoteAccessEnabled(bool value) { SetRemoteAccessEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceTypeDetail> m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ServiceState m_serviceState{ServiceState::NOT_SET};
    bool m_serviceStateHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    bool m_acceptanceRequired{false};
    bool m_acceptanceRequiredHasBeenSet = false;

    bool m_managesVpcEndpoints{false};
    bool m_managesVpcEndpointsHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_gatewayLoadBalancerArns;
    bool m_gatewayLoadBalancerArnsHasBeenSet = false;

    Aws::Vector<ServiceConnectivityType> m_supportedIpAddressTypes;
    bool m_supportedIpAddressTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_baseEndpointDnsNames;
    bool m_baseEndpointDnsNamesHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    PrivateDnsNameConfiguration m_privateDnsNameConfiguration;
    bool m_privateDnsNameConfigurationHasBeenSet = false;

    PayerResponsibility m_payerResponsibility{PayerResponsibility::NOT_SET};
    bool m_payerResponsibilityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<SupportedRegionDetail> m_supportedRegions;
    bool m_supportedRegionsHasBeenSet = false;

    bool m_remoteAccessEnabled{false};
    bool m_remoteAccessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
