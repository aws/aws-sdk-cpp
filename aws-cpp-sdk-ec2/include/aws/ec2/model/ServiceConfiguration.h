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
    AWS_EC2_API ServiceConfiguration();
    AWS_EC2_API ServiceConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ServiceConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of service.</p>
     */
    inline const Aws::Vector<ServiceTypeDetail>& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The type of service.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The type of service.</p>
     */
    inline void SetServiceType(const Aws::Vector<ServiceTypeDetail>& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The type of service.</p>
     */
    inline void SetServiceType(Aws::Vector<ServiceTypeDetail>&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The type of service.</p>
     */
    inline ServiceConfiguration& WithServiceType(const Aws::Vector<ServiceTypeDetail>& value) { SetServiceType(value); return *this;}

    /**
     * <p>The type of service.</p>
     */
    inline ServiceConfiguration& WithServiceType(Aws::Vector<ServiceTypeDetail>&& value) { SetServiceType(std::move(value)); return *this;}

    /**
     * <p>The type of service.</p>
     */
    inline ServiceConfiguration& AddServiceType(const ServiceTypeDetail& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(value); return *this; }

    /**
     * <p>The type of service.</p>
     */
    inline ServiceConfiguration& AddServiceType(ServiceTypeDetail&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(std::move(value)); return *this; }


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
    inline ServiceConfiguration& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ServiceConfiguration& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service.</p>
     */
    inline ServiceConfiguration& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceConfiguration& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceConfiguration& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceConfiguration& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The service state.</p>
     */
    inline const ServiceState& GetServiceState() const{ return m_serviceState; }

    /**
     * <p>The service state.</p>
     */
    inline bool ServiceStateHasBeenSet() const { return m_serviceStateHasBeenSet; }

    /**
     * <p>The service state.</p>
     */
    inline void SetServiceState(const ServiceState& value) { m_serviceStateHasBeenSet = true; m_serviceState = value; }

    /**
     * <p>The service state.</p>
     */
    inline void SetServiceState(ServiceState&& value) { m_serviceStateHasBeenSet = true; m_serviceState = std::move(value); }

    /**
     * <p>The service state.</p>
     */
    inline ServiceConfiguration& WithServiceState(const ServiceState& value) { SetServiceState(value); return *this;}

    /**
     * <p>The service state.</p>
     */
    inline ServiceConfiguration& WithServiceState(ServiceState&& value) { SetServiceState(std::move(value)); return *this;}


    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>Indicates whether requests from other Amazon Web Services accounts to create
     * an endpoint to the service must first be accepted.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Indicates whether requests from other Amazon Web Services accounts to create
     * an endpoint to the service must first be accepted.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>Indicates whether requests from other Amazon Web Services accounts to create
     * an endpoint to the service must first be accepted.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicates whether requests from other Amazon Web Services accounts to create
     * an endpoint to the service must first be accepted.</p>
     */
    inline ServiceConfiguration& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>Indicates whether the service manages its VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline bool GetManagesVpcEndpoints() const{ return m_managesVpcEndpoints; }

    /**
     * <p>Indicates whether the service manages its VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }

    /**
     * <p>Indicates whether the service manages its VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }

    /**
     * <p>Indicates whether the service manages its VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline ServiceConfiguration& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkLoadBalancerArns() const{ return m_networkLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline bool NetworkLoadBalancerArnsHasBeenSet() const { return m_networkLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline void SetNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline void SetNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& WithNetworkLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetNetworkLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& WithNetworkLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetNetworkLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& AddNetworkLoadBalancerArns(const Aws::String& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& AddNetworkLoadBalancerArns(Aws::String&& value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& AddNetworkLoadBalancerArns(const char* value) { m_networkLoadBalancerArnsHasBeenSet = true; m_networkLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGatewayLoadBalancerArns() const{ return m_gatewayLoadBalancerArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline bool GatewayLoadBalancerArnsHasBeenSet() const { return m_gatewayLoadBalancerArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline void SetGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline void SetGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& WithGatewayLoadBalancerArns(const Aws::Vector<Aws::String>& value) { SetGatewayLoadBalancerArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& WithGatewayLoadBalancerArns(Aws::Vector<Aws::String>&& value) { SetGatewayLoadBalancerArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& AddGatewayLoadBalancerArns(const Aws::String& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& AddGatewayLoadBalancerArns(Aws::String&& value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of the Gateway Load Balancers for the
     * service.</p>
     */
    inline ServiceConfiguration& AddGatewayLoadBalancerArns(const char* value) { m_gatewayLoadBalancerArnsHasBeenSet = true; m_gatewayLoadBalancerArns.push_back(value); return *this; }


    /**
     * <p>The supported IP address types.</p>
     */
    inline const Aws::Vector<ServiceConnectivityType>& GetSupportedIpAddressTypes() const{ return m_supportedIpAddressTypes; }

    /**
     * <p>The supported IP address types.</p>
     */
    inline bool SupportedIpAddressTypesHasBeenSet() const { return m_supportedIpAddressTypesHasBeenSet; }

    /**
     * <p>The supported IP address types.</p>
     */
    inline void SetSupportedIpAddressTypes(const Aws::Vector<ServiceConnectivityType>& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = value; }

    /**
     * <p>The supported IP address types.</p>
     */
    inline void SetSupportedIpAddressTypes(Aws::Vector<ServiceConnectivityType>&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = std::move(value); }

    /**
     * <p>The supported IP address types.</p>
     */
    inline ServiceConfiguration& WithSupportedIpAddressTypes(const Aws::Vector<ServiceConnectivityType>& value) { SetSupportedIpAddressTypes(value); return *this;}

    /**
     * <p>The supported IP address types.</p>
     */
    inline ServiceConfiguration& WithSupportedIpAddressTypes(Aws::Vector<ServiceConnectivityType>&& value) { SetSupportedIpAddressTypes(std::move(value)); return *this;}

    /**
     * <p>The supported IP address types.</p>
     */
    inline ServiceConfiguration& AddSupportedIpAddressTypes(const ServiceConnectivityType& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }

    /**
     * <p>The supported IP address types.</p>
     */
    inline ServiceConfiguration& AddSupportedIpAddressTypes(ServiceConnectivityType&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The DNS names for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaseEndpointDnsNames() const{ return m_baseEndpointDnsNames; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline bool BaseEndpointDnsNamesHasBeenSet() const { return m_baseEndpointDnsNamesHasBeenSet; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline void SetBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = value; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline void SetBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = std::move(value); }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceConfiguration& WithBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { SetBaseEndpointDnsNames(value); return *this;}

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceConfiguration& WithBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { SetBaseEndpointDnsNames(std::move(value)); return *this;}

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceConfiguration& AddBaseEndpointDnsNames(const Aws::String& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceConfiguration& AddBaseEndpointDnsNames(Aws::String&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceConfiguration& AddBaseEndpointDnsNames(const char* value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }


    /**
     * <p>The private DNS name for the service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline ServiceConfiguration& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline ServiceConfiguration& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline ServiceConfiguration& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>Information about the endpoint service private DNS name configuration.</p>
     */
    inline const PrivateDnsNameConfiguration& GetPrivateDnsNameConfiguration() const{ return m_privateDnsNameConfiguration; }

    /**
     * <p>Information about the endpoint service private DNS name configuration.</p>
     */
    inline bool PrivateDnsNameConfigurationHasBeenSet() const { return m_privateDnsNameConfigurationHasBeenSet; }

    /**
     * <p>Information about the endpoint service private DNS name configuration.</p>
     */
    inline void SetPrivateDnsNameConfiguration(const PrivateDnsNameConfiguration& value) { m_privateDnsNameConfigurationHasBeenSet = true; m_privateDnsNameConfiguration = value; }

    /**
     * <p>Information about the endpoint service private DNS name configuration.</p>
     */
    inline void SetPrivateDnsNameConfiguration(PrivateDnsNameConfiguration&& value) { m_privateDnsNameConfigurationHasBeenSet = true; m_privateDnsNameConfiguration = std::move(value); }

    /**
     * <p>Information about the endpoint service private DNS name configuration.</p>
     */
    inline ServiceConfiguration& WithPrivateDnsNameConfiguration(const PrivateDnsNameConfiguration& value) { SetPrivateDnsNameConfiguration(value); return *this;}

    /**
     * <p>Information about the endpoint service private DNS name configuration.</p>
     */
    inline ServiceConfiguration& WithPrivateDnsNameConfiguration(PrivateDnsNameConfiguration&& value) { SetPrivateDnsNameConfiguration(std::move(value)); return *this;}


    /**
     * <p>The payer responsibility.</p>
     */
    inline const PayerResponsibility& GetPayerResponsibility() const{ return m_payerResponsibility; }

    /**
     * <p>The payer responsibility.</p>
     */
    inline bool PayerResponsibilityHasBeenSet() const { return m_payerResponsibilityHasBeenSet; }

    /**
     * <p>The payer responsibility.</p>
     */
    inline void SetPayerResponsibility(const PayerResponsibility& value) { m_payerResponsibilityHasBeenSet = true; m_payerResponsibility = value; }

    /**
     * <p>The payer responsibility.</p>
     */
    inline void SetPayerResponsibility(PayerResponsibility&& value) { m_payerResponsibilityHasBeenSet = true; m_payerResponsibility = std::move(value); }

    /**
     * <p>The payer responsibility.</p>
     */
    inline ServiceConfiguration& WithPayerResponsibility(const PayerResponsibility& value) { SetPayerResponsibility(value); return *this;}

    /**
     * <p>The payer responsibility.</p>
     */
    inline ServiceConfiguration& WithPayerResponsibility(PayerResponsibility&& value) { SetPayerResponsibility(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline ServiceConfiguration& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline ServiceConfiguration& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline ServiceConfiguration& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline ServiceConfiguration& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServiceTypeDetail> m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ServiceState m_serviceState;
    bool m_serviceStateHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet = false;

    bool m_managesVpcEndpoints;
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

    PayerResponsibility m_payerResponsibility;
    bool m_payerResponsibilityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
