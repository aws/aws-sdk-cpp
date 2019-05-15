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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ServiceState.h>
#include <aws/ec2/model/ServiceTypeDetail.h>
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
  class AWS_EC2_API ServiceConfiguration
  {
  public:
    ServiceConfiguration();
    ServiceConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServiceConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>In the Availability Zones in which the service is available.</p>
     */
    inline ServiceConfiguration& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>Indicates whether requests from other AWS accounts to create an endpoint to
     * the service must first be accepted.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Indicates whether requests from other AWS accounts to create an endpoint to
     * the service must first be accepted.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>Indicates whether requests from other AWS accounts to create an endpoint to
     * the service must first be accepted.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicates whether requests from other AWS accounts to create an endpoint to
     * the service must first be accepted.</p>
     */
    inline ServiceConfiguration& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


    /**
     * <p>Indicates whether the service manages it's VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline bool GetManagesVpcEndpoints() const{ return m_managesVpcEndpoints; }

    /**
     * <p>Indicates whether the service manages it's VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }

    /**
     * <p>Indicates whether the service manages it's VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }

    /**
     * <p>Indicates whether the service manages it's VPC endpoints. Management of the
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
    bool m_serviceTypeHasBeenSet;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    ServiceState m_serviceState;
    bool m_serviceStateHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet;

    bool m_managesVpcEndpoints;
    bool m_managesVpcEndpointsHasBeenSet;

    Aws::Vector<Aws::String> m_networkLoadBalancerArns;
    bool m_networkLoadBalancerArnsHasBeenSet;

    Aws::Vector<Aws::String> m_baseEndpointDnsNames;
    bool m_baseEndpointDnsNamesHasBeenSet;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
