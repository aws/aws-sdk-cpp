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
     * <p>The type of service.</p>
     */
    inline const Aws::Vector<ServiceTypeDetail>& GetServiceType() const{ return m_serviceType; }

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
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }

    /**
     * <p>Indicates whether VPC endpoint connection requests to the service must be
     * accepted by the service owner.</p>
     */
    inline ServiceDetail& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
