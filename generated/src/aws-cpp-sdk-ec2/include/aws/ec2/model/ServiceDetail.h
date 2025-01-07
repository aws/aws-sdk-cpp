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


    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline ServiceDetail& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline ServiceDetail& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline ServiceDetail& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline ServiceDetail& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline ServiceDetail& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline ServiceDetail& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service.</p>
     */
    inline const Aws::Vector<ServiceTypeDetail>& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const Aws::Vector<ServiceTypeDetail>& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(Aws::Vector<ServiceTypeDetail>&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline ServiceDetail& WithServiceType(const Aws::Vector<ServiceTypeDetail>& value) { SetServiceType(value); return *this;}
    inline ServiceDetail& WithServiceType(Aws::Vector<ServiceTypeDetail>&& value) { SetServiceType(std::move(value)); return *this;}
    inline ServiceDetail& AddServiceType(const ServiceTypeDetail& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(value); return *this; }
    inline ServiceDetail& AddServiceType(ServiceTypeDetail&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Region where the service is hosted.</p>
     */
    inline const Aws::String& GetServiceRegion() const{ return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    inline void SetServiceRegion(const Aws::String& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = value; }
    inline void SetServiceRegion(Aws::String&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::move(value); }
    inline void SetServiceRegion(const char* value) { m_serviceRegionHasBeenSet = true; m_serviceRegion.assign(value); }
    inline ServiceDetail& WithServiceRegion(const Aws::String& value) { SetServiceRegion(value); return *this;}
    inline ServiceDetail& WithServiceRegion(Aws::String&& value) { SetServiceRegion(std::move(value)); return *this;}
    inline ServiceDetail& WithServiceRegion(const char* value) { SetServiceRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones in which the service is available.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline ServiceDetail& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline ServiceDetail& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline ServiceDetail& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline ServiceDetail& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline ServiceDetail& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline ServiceDetail& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline ServiceDetail& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline ServiceDetail& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS names for the service.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBaseEndpointDnsNames() const{ return m_baseEndpointDnsNames; }
    inline bool BaseEndpointDnsNamesHasBeenSet() const { return m_baseEndpointDnsNamesHasBeenSet; }
    inline void SetBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = value; }
    inline void SetBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames = std::move(value); }
    inline ServiceDetail& WithBaseEndpointDnsNames(const Aws::Vector<Aws::String>& value) { SetBaseEndpointDnsNames(value); return *this;}
    inline ServiceDetail& WithBaseEndpointDnsNames(Aws::Vector<Aws::String>&& value) { SetBaseEndpointDnsNames(std::move(value)); return *this;}
    inline ServiceDetail& AddBaseEndpointDnsNames(const Aws::String& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }
    inline ServiceDetail& AddBaseEndpointDnsNames(Aws::String&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(std::move(value)); return *this; }
    inline ServiceDetail& AddBaseEndpointDnsNames(const char* value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The private DNS name for the service.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }
    inline ServiceDetail& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}
    inline ServiceDetail& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}
    inline ServiceDetail& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline const Aws::Vector<PrivateDnsDetails>& GetPrivateDnsNames() const{ return m_privateDnsNames; }
    inline bool PrivateDnsNamesHasBeenSet() const { return m_privateDnsNamesHasBeenSet; }
    inline void SetPrivateDnsNames(const Aws::Vector<PrivateDnsDetails>& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames = value; }
    inline void SetPrivateDnsNames(Aws::Vector<PrivateDnsDetails>&& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames = std::move(value); }
    inline ServiceDetail& WithPrivateDnsNames(const Aws::Vector<PrivateDnsDetails>& value) { SetPrivateDnsNames(value); return *this;}
    inline ServiceDetail& WithPrivateDnsNames(Aws::Vector<PrivateDnsDetails>&& value) { SetPrivateDnsNames(std::move(value)); return *this;}
    inline ServiceDetail& AddPrivateDnsNames(const PrivateDnsDetails& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames.push_back(value); return *this; }
    inline ServiceDetail& AddPrivateDnsNames(PrivateDnsDetails&& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service supports endpoint policies.</p>
     */
    inline bool GetVpcEndpointPolicySupported() const{ return m_vpcEndpointPolicySupported; }
    inline bool VpcEndpointPolicySupportedHasBeenSet() const { return m_vpcEndpointPolicySupportedHasBeenSet; }
    inline void SetVpcEndpointPolicySupported(bool value) { m_vpcEndpointPolicySupportedHasBeenSet = true; m_vpcEndpointPolicySupported = value; }
    inline ServiceDetail& WithVpcEndpointPolicySupported(bool value) { SetVpcEndpointPolicySupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether VPC endpoint connection requests to the service must be
     * accepted by the service owner.</p>
     */
    inline bool GetAcceptanceRequired() const{ return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline ServiceDetail& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service manages its VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline bool GetManagesVpcEndpoints() const{ return m_managesVpcEndpoints; }
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }
    inline ServiceDetail& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payer responsibility.</p>
     */
    inline const PayerResponsibility& GetPayerResponsibility() const{ return m_payerResponsibility; }
    inline bool PayerResponsibilityHasBeenSet() const { return m_payerResponsibilityHasBeenSet; }
    inline void SetPayerResponsibility(const PayerResponsibility& value) { m_payerResponsibilityHasBeenSet = true; m_payerResponsibility = value; }
    inline void SetPayerResponsibility(PayerResponsibility&& value) { m_payerResponsibilityHasBeenSet = true; m_payerResponsibility = std::move(value); }
    inline ServiceDetail& WithPayerResponsibility(const PayerResponsibility& value) { SetPayerResponsibility(value); return *this;}
    inline ServiceDetail& WithPayerResponsibility(PayerResponsibility&& value) { SetPayerResponsibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the service.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ServiceDetail& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ServiceDetail& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ServiceDetail& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ServiceDetail& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline const DnsNameState& GetPrivateDnsNameVerificationState() const{ return m_privateDnsNameVerificationState; }
    inline bool PrivateDnsNameVerificationStateHasBeenSet() const { return m_privateDnsNameVerificationStateHasBeenSet; }
    inline void SetPrivateDnsNameVerificationState(const DnsNameState& value) { m_privateDnsNameVerificationStateHasBeenSet = true; m_privateDnsNameVerificationState = value; }
    inline void SetPrivateDnsNameVerificationState(DnsNameState&& value) { m_privateDnsNameVerificationStateHasBeenSet = true; m_privateDnsNameVerificationState = std::move(value); }
    inline ServiceDetail& WithPrivateDnsNameVerificationState(const DnsNameState& value) { SetPrivateDnsNameVerificationState(value); return *this;}
    inline ServiceDetail& WithPrivateDnsNameVerificationState(DnsNameState&& value) { SetPrivateDnsNameVerificationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported IP address types.</p>
     */
    inline const Aws::Vector<ServiceConnectivityType>& GetSupportedIpAddressTypes() const{ return m_supportedIpAddressTypes; }
    inline bool SupportedIpAddressTypesHasBeenSet() const { return m_supportedIpAddressTypesHasBeenSet; }
    inline void SetSupportedIpAddressTypes(const Aws::Vector<ServiceConnectivityType>& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = value; }
    inline void SetSupportedIpAddressTypes(Aws::Vector<ServiceConnectivityType>&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes = std::move(value); }
    inline ServiceDetail& WithSupportedIpAddressTypes(const Aws::Vector<ServiceConnectivityType>& value) { SetSupportedIpAddressTypes(value); return *this;}
    inline ServiceDetail& WithSupportedIpAddressTypes(Aws::Vector<ServiceConnectivityType>&& value) { SetSupportedIpAddressTypes(std::move(value)); return *this;}
    inline ServiceDetail& AddSupportedIpAddressTypes(const ServiceConnectivityType& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }
    inline ServiceDetail& AddSupportedIpAddressTypes(ServiceConnectivityType&& value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::Vector<ServiceTypeDetail> m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_serviceRegion;
    bool m_serviceRegionHasBeenSet = false;

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
