/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PayerResponsibility.h>
#include <aws/ec2/model/DnsNameState.h>
#include <aws/ec2/model/ServiceTypeDetail.h>
#include <aws/ec2/model/PrivateDnsDetails.h>
#include <aws/ec2/model/Tag.h>
#include <aws/ec2/model/ServiceConnectivityType.h>
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
  class ServiceDetail
  {
  public:
    AWS_EC2_API ServiceDetail();
    AWS_EC2_API ServiceDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ServiceDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline ServiceDetail& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service.</p>
     */
    inline ServiceDetail& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service.</p>
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
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline ServiceDetail& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline ServiceDetail& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
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
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline const Aws::Vector<PrivateDnsDetails>& GetPrivateDnsNames() const{ return m_privateDnsNames; }

    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline bool PrivateDnsNamesHasBeenSet() const { return m_privateDnsNamesHasBeenSet; }

    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline void SetPrivateDnsNames(const Aws::Vector<PrivateDnsDetails>& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames = value; }

    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline void SetPrivateDnsNames(Aws::Vector<PrivateDnsDetails>&& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames = std::move(value); }

    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline ServiceDetail& WithPrivateDnsNames(const Aws::Vector<PrivateDnsDetails>& value) { SetPrivateDnsNames(value); return *this;}

    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline ServiceDetail& WithPrivateDnsNames(Aws::Vector<PrivateDnsDetails>&& value) { SetPrivateDnsNames(std::move(value)); return *this;}

    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline ServiceDetail& AddPrivateDnsNames(const PrivateDnsDetails& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames.push_back(value); return *this; }

    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline ServiceDetail& AddPrivateDnsNames(PrivateDnsDetails&& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames.push_back(std::move(value)); return *this; }


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
    inline ServiceDetail& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}


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
    inline ServiceDetail& WithPayerResponsibility(const PayerResponsibility& value) { SetPayerResponsibility(value); return *this;}

    /**
     * <p>The payer responsibility.</p>
     */
    inline ServiceDetail& WithPayerResponsibility(PayerResponsibility&& value) { SetPayerResponsibility(std::move(value)); return *this;}


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


    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline const DnsNameState& GetPrivateDnsNameVerificationState() const{ return m_privateDnsNameVerificationState; }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline bool PrivateDnsNameVerificationStateHasBeenSet() const { return m_privateDnsNameVerificationStateHasBeenSet; }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline void SetPrivateDnsNameVerificationState(const DnsNameState& value) { m_privateDnsNameVerificationStateHasBeenSet = true; m_privateDnsNameVerificationState = value; }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline void SetPrivateDnsNameVerificationState(DnsNameState&& value) { m_privateDnsNameVerificationStateHasBeenSet = true; m_privateDnsNameVerificationState = std::move(value); }

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline ServiceDetail& WithPrivateDnsNameVerificationState(const DnsNameState& value) { SetPrivateDnsNameVerificationState(value); return *this;}

    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline ServiceDetail& WithPrivateDnsNameVerificationState(DnsNameState&& value) { SetPrivateDnsNameVerificationState(std::move(value)); return *this;}


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
    inline ServiceDetail& WithSupportedIpAddressTypes(const Aws::Vector<ServiceConnectivityType>& value) { SetSupportedIpAddressTypes(value); return *this;}

    /**
     * <p>The supported IP address types.</p>
     */
    inline ServiceDetail& WithSupportedIpAddressTypes(Aws::Vector<ServiceConnectivityType>&& value) { SetSupportedIpAddressTypes(std::move(value)); return *this;}

    /**
     * <p>The supported IP address types.</p>
     */
    inline ServiceDetail& AddSupportedIpAddressTypes(const ServiceConnectivityType& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }

    /**
     * <p>The supported IP address types.</p>
     */
    inline ServiceDetail& AddSupportedIpAddressTypes(ServiceConnectivityType&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::Vector<ServiceTypeDetail> m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Aws::String> m_baseEndpointDnsNames;
    bool m_baseEndpointDnsNamesHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::Vector<PrivateDnsDetails> m_privateDnsNames;
    bool m_privateDnsNamesHasBeenSet = false;

    bool m_vpcEndpointPolicySupported;
    bool m_vpcEndpointPolicySupportedHasBeenSet = false;

    bool m_acceptanceRequired;
    bool m_acceptanceRequiredHasBeenSet = false;

    bool m_managesVpcEndpoints;
    bool m_managesVpcEndpointsHasBeenSet = false;

    PayerResponsibility m_payerResponsibility;
    bool m_payerResponsibilityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DnsNameState m_privateDnsNameVerificationState;
    bool m_privateDnsNameVerificationStateHasBeenSet = false;

    Aws::Vector<ServiceConnectivityType> m_supportedIpAddressTypes;
    bool m_supportedIpAddressTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
