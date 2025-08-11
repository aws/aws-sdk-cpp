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
    AWS_EC2_API ServiceDetail() = default;
    AWS_EC2_API ServiceDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ServiceDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the service.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ServiceDetail& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    ServiceDetail& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of service.</p>
     */
    inline const Aws::Vector<ServiceTypeDetail>& GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    template<typename ServiceTypeT = Aws::Vector<ServiceTypeDetail>>
    void SetServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::forward<ServiceTypeT>(value); }
    template<typename ServiceTypeT = Aws::Vector<ServiceTypeDetail>>
    ServiceDetail& WithServiceType(ServiceTypeT&& value) { SetServiceType(std::forward<ServiceTypeT>(value)); return *this;}
    template<typename ServiceTypeT = ServiceTypeDetail>
    ServiceDetail& AddServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType.emplace_back(std::forward<ServiceTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Region where the service is hosted.</p>
     */
    inline const Aws::String& GetServiceRegion() const { return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    template<typename ServiceRegionT = Aws::String>
    void SetServiceRegion(ServiceRegionT&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::forward<ServiceRegionT>(value); }
    template<typename ServiceRegionT = Aws::String>
    ServiceDetail& WithServiceRegion(ServiceRegionT&& value) { SetServiceRegion(std::forward<ServiceRegionT>(value)); return *this;}
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
    ServiceDetail& WithAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { SetAvailabilityZoneIds(std::forward<AvailabilityZoneIdsT>(value)); return *this;}
    template<typename AvailabilityZoneIdsT = Aws::String>
    ServiceDetail& AddAvailabilityZoneIds(AvailabilityZoneIdsT&& value) { m_availabilityZoneIdsHasBeenSet = true; m_availabilityZoneIds.emplace_back(std::forward<AvailabilityZoneIdsT>(value)); return *this; }
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
    ServiceDetail& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    ServiceDetail& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the service owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ServiceDetail& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
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
    ServiceDetail& WithBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { SetBaseEndpointDnsNames(std::forward<BaseEndpointDnsNamesT>(value)); return *this;}
    template<typename BaseEndpointDnsNamesT = Aws::String>
    ServiceDetail& AddBaseEndpointDnsNames(BaseEndpointDnsNamesT&& value) { m_baseEndpointDnsNamesHasBeenSet = true; m_baseEndpointDnsNames.emplace_back(std::forward<BaseEndpointDnsNamesT>(value)); return *this; }
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
    ServiceDetail& WithPrivateDnsName(PrivateDnsNameT&& value) { SetPrivateDnsName(std::forward<PrivateDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS names assigned to the VPC endpoint service.</p>
     */
    inline const Aws::Vector<PrivateDnsDetails>& GetPrivateDnsNames() const { return m_privateDnsNames; }
    inline bool PrivateDnsNamesHasBeenSet() const { return m_privateDnsNamesHasBeenSet; }
    template<typename PrivateDnsNamesT = Aws::Vector<PrivateDnsDetails>>
    void SetPrivateDnsNames(PrivateDnsNamesT&& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames = std::forward<PrivateDnsNamesT>(value); }
    template<typename PrivateDnsNamesT = Aws::Vector<PrivateDnsDetails>>
    ServiceDetail& WithPrivateDnsNames(PrivateDnsNamesT&& value) { SetPrivateDnsNames(std::forward<PrivateDnsNamesT>(value)); return *this;}
    template<typename PrivateDnsNamesT = PrivateDnsDetails>
    ServiceDetail& AddPrivateDnsNames(PrivateDnsNamesT&& value) { m_privateDnsNamesHasBeenSet = true; m_privateDnsNames.emplace_back(std::forward<PrivateDnsNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service supports endpoint policies.</p>
     */
    inline bool GetVpcEndpointPolicySupported() const { return m_vpcEndpointPolicySupported; }
    inline bool VpcEndpointPolicySupportedHasBeenSet() const { return m_vpcEndpointPolicySupportedHasBeenSet; }
    inline void SetVpcEndpointPolicySupported(bool value) { m_vpcEndpointPolicySupportedHasBeenSet = true; m_vpcEndpointPolicySupported = value; }
    inline ServiceDetail& WithVpcEndpointPolicySupported(bool value) { SetVpcEndpointPolicySupported(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether VPC endpoint connection requests to the service must be
     * accepted by the service owner.</p>
     */
    inline bool GetAcceptanceRequired() const { return m_acceptanceRequired; }
    inline bool AcceptanceRequiredHasBeenSet() const { return m_acceptanceRequiredHasBeenSet; }
    inline void SetAcceptanceRequired(bool value) { m_acceptanceRequiredHasBeenSet = true; m_acceptanceRequired = value; }
    inline ServiceDetail& WithAcceptanceRequired(bool value) { SetAcceptanceRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the service manages its VPC endpoints. Management of the
     * service VPC endpoints using the VPC endpoint API is restricted.</p>
     */
    inline bool GetManagesVpcEndpoints() const { return m_managesVpcEndpoints; }
    inline bool ManagesVpcEndpointsHasBeenSet() const { return m_managesVpcEndpointsHasBeenSet; }
    inline void SetManagesVpcEndpoints(bool value) { m_managesVpcEndpointsHasBeenSet = true; m_managesVpcEndpoints = value; }
    inline ServiceDetail& WithManagesVpcEndpoints(bool value) { SetManagesVpcEndpoints(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The payer responsibility.</p>
     */
    inline PayerResponsibility GetPayerResponsibility() const { return m_payerResponsibility; }
    inline bool PayerResponsibilityHasBeenSet() const { return m_payerResponsibilityHasBeenSet; }
    inline void SetPayerResponsibility(PayerResponsibility value) { m_payerResponsibilityHasBeenSet = true; m_payerResponsibility = value; }
    inline ServiceDetail& WithPayerResponsibility(PayerResponsibility value) { SetPayerResponsibility(value); return *this;}
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
    ServiceDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ServiceDetail& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The verification state of the VPC endpoint service.</p> <p>Consumers of the
     * endpoint service cannot use the private name when the state is not
     * <code>verified</code>.</p>
     */
    inline DnsNameState GetPrivateDnsNameVerificationState() const { return m_privateDnsNameVerificationState; }
    inline bool PrivateDnsNameVerificationStateHasBeenSet() const { return m_privateDnsNameVerificationStateHasBeenSet; }
    inline void SetPrivateDnsNameVerificationState(DnsNameState value) { m_privateDnsNameVerificationStateHasBeenSet = true; m_privateDnsNameVerificationState = value; }
    inline ServiceDetail& WithPrivateDnsNameVerificationState(DnsNameState value) { SetPrivateDnsNameVerificationState(value); return *this;}
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
    ServiceDetail& WithSupportedIpAddressTypes(SupportedIpAddressTypesT&& value) { SetSupportedIpAddressTypes(std::forward<SupportedIpAddressTypesT>(value)); return *this;}
    inline ServiceDetail& AddSupportedIpAddressTypes(ServiceConnectivityType value) { m_supportedIpAddressTypesHasBeenSet = true; m_supportedIpAddressTypes.push_back(value); return *this; }
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

    Aws::Vector<Aws::String> m_availabilityZoneIds;
    bool m_availabilityZoneIdsHasBeenSet = false;

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

    bool m_vpcEndpointPolicySupported{false};
    bool m_vpcEndpointPolicySupportedHasBeenSet = false;

    bool m_acceptanceRequired{false};
    bool m_acceptanceRequiredHasBeenSet = false;

    bool m_managesVpcEndpoints{false};
    bool m_managesVpcEndpointsHasBeenSet = false;

    PayerResponsibility m_payerResponsibility{PayerResponsibility::NOT_SET};
    bool m_payerResponsibilityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    DnsNameState m_privateDnsNameVerificationState{DnsNameState::NOT_SET};
    bool m_privateDnsNameVerificationStateHasBeenSet = false;

    Aws::Vector<ServiceConnectivityType> m_supportedIpAddressTypes;
    bool m_supportedIpAddressTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
