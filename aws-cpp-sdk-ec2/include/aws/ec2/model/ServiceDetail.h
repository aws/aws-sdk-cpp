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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes a VPC endpoint service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ServiceDetail">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ServiceDetail
  {
  public:
    ServiceDetail();
    ServiceDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServiceDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline ServiceDetail& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline ServiceDetail& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service.</p>
     */
    inline ServiceDetail& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline ServiceDetail& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline ServiceDetail& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline ServiceDetail& WithServiceId(const char* value) { SetServiceId(value); return *this;}


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
    inline ServiceDetail& WithServiceType(const Aws::Vector<ServiceTypeDetail>& value) { SetServiceType(value); return *this;}

    /**
     * <p>The type of service.</p>
     */
    inline ServiceDetail& WithServiceType(Aws::Vector<ServiceTypeDetail>&& value) { SetServiceType(std::move(value)); return *this;}

    /**
     * <p>The type of service.</p>
     */
    inline ServiceDetail& AddServiceType(const ServiceTypeDetail& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(value); return *this; }

    /**
     * <p>The type of service.</p>
     */
    inline ServiceDetail& AddServiceType(ServiceTypeDetail&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(std::move(value)); return *this; }


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
    inline ServiceDetail& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceDetail& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceDetail& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceDetail& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline ServiceDetail& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline ServiceDetail& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline ServiceDetail& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the service owner.</p>
     */
    inline ServiceDetail& WithOwner(const char* value) { SetOwner(value); return *this;}


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
    inline ServiceDetail& WithBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { SetBaseEndpointDnsNames(value); return *this;}

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceDetail& WithBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { SetBaseEndpointDnsNames(std::move(value)); return *this;}

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceDetail& AddBaseEndpointDnsNames(const Aws::String& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceDetail& AddBaseEndpointDnsNames(Aws::String&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The DNS names for the service.</p>
     */
    inline ServiceDetail& AddBaseEndpointDnsNames(const char* value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }


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
    inline ServiceDetail& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline ServiceDetail& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private DNS name for the service.</p>
     */
    inline ServiceDetail& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>Indicates whether the service supports endpoint policies.</p>
     */
    inline bool GetVpcEndpointPolicySupported() const{ return m_vpcEndpointPolicySupported; }

    /**
     * <p>Indicates whether the service supports endpoint policies.</p>
     */
    inline bool VpcEndpointPolicySupportedHasBeenSet() const { return m_vpcEndpointPolicySupportedHasBeenSet; }

    /**
     * <p>Indicates whether the service supports endpoint policies.</p>
     */
    inline void SetVpcEndpointPolicySupported(bool value) { m_vpcEndpointPolicySupportedHasBeenSet = true; m_vpcEndpointPolicySupported = value; }

    /**
     * <p>Indicates whether the service supports endpoint policies.</p>
     */
    inline ServiceDetail& WithVpcEndpointPolicySupported(bool value) { SetVpcEndpointPolicySupported(value); return *this;}


    /**
     * <p>Indicates whether VPC endpoint connection requests to the service must be
     * accepted by the service owner.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }

    /**
     * <p>Indicates whether VPC endpoint connection requests to the service must be
     * accepted by the service owner.</p>
     */
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }

    /**
     * <p>Indicates whether VPC endpoint connection requests to the service must be
     * accepted by the service owner.</p>
     */
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicates whether VPC endpoint connection requests to the service must be
     * accepted by the service owner.</p>
     */
    inline ServiceDetail& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}


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
    inline ServiceDetail& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}


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
    inline ServiceDetail& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline ServiceDetail& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline ServiceDetail& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the service.</p>
     */
    inline ServiceDetail& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::Vector<ServiceTypeDetail> m_serviceType;
    bool m_serviceTypeHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::Vector<Aws::String> m_baseEndpointDnsNames;
    bool m_baseEndpointDnsNamesHasBeenSet;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;

    bool m_vpcEndpointPolicySupported;
    bool m_vpcEndpointPolicySupportedHasBeenSet;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet;

    bool m_managesVpcEndpoints;
    bool m_managesVpcEndpointsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
