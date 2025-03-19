/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DnsEntry.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the VPC resources, VPC endpoint services, Lattice services, or
   * service networks associated with the VPC endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEndpointAssociation">AWS
   * API Reference</a></p>
   */
  class VpcEndpointAssociation
  {
  public:
    AWS_EC2_API VpcEndpointAssociation() = default;
    AWS_EC2_API VpcEndpointAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEndpointAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the VPC endpoint association.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    VpcEndpointAssociation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    VpcEndpointAssociation& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const { return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    template<typename ServiceNetworkArnT = Aws::String>
    void SetServiceNetworkArn(ServiceNetworkArnT&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::forward<ServiceNetworkArnT>(value); }
    template<typename ServiceNetworkArnT = Aws::String>
    VpcEndpointAssociation& WithServiceNetworkArn(ServiceNetworkArnT&& value) { SetServiceNetworkArn(std::forward<ServiceNetworkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const { return m_serviceNetworkName; }
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }
    template<typename ServiceNetworkNameT = Aws::String>
    void SetServiceNetworkName(ServiceNetworkNameT&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::forward<ServiceNetworkNameT>(value); }
    template<typename ServiceNetworkNameT = Aws::String>
    VpcEndpointAssociation& WithServiceNetworkName(ServiceNetworkNameT&& value) { SetServiceNetworkName(std::forward<ServiceNetworkNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connectivity status of the resources associated to a VPC endpoint. The
     * resource is accessible if the associated resource configuration is
     * <code>AVAILABLE</code>, otherwise the resource is inaccessible.</p>
     */
    inline const Aws::String& GetAssociatedResourceAccessibility() const { return m_associatedResourceAccessibility; }
    inline bool AssociatedResourceAccessibilityHasBeenSet() const { return m_associatedResourceAccessibilityHasBeenSet; }
    template<typename AssociatedResourceAccessibilityT = Aws::String>
    void SetAssociatedResourceAccessibility(AssociatedResourceAccessibilityT&& value) { m_associatedResourceAccessibilityHasBeenSet = true; m_associatedResourceAccessibility = std::forward<AssociatedResourceAccessibilityT>(value); }
    template<typename AssociatedResourceAccessibilityT = Aws::String>
    VpcEndpointAssociation& WithAssociatedResourceAccessibility(AssociatedResourceAccessibilityT&& value) { SetAssociatedResourceAccessibility(std::forward<AssociatedResourceAccessibilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to why an VPC endpoint association failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    VpcEndpointAssociation& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code related to why an VPC endpoint association failed.</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    VpcEndpointAssociation& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entry of the VPC endpoint association.</p>
     */
    inline const DnsEntry& GetDnsEntry() const { return m_dnsEntry; }
    inline bool DnsEntryHasBeenSet() const { return m_dnsEntryHasBeenSet; }
    template<typename DnsEntryT = DnsEntry>
    void SetDnsEntry(DnsEntryT&& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = std::forward<DnsEntryT>(value); }
    template<typename DnsEntryT = DnsEntry>
    VpcEndpointAssociation& WithDnsEntry(DnsEntryT&& value) { SetDnsEntry(std::forward<DnsEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS entry of the VPC endpoint association.</p>
     */
    inline const DnsEntry& GetPrivateDnsEntry() const { return m_privateDnsEntry; }
    inline bool PrivateDnsEntryHasBeenSet() const { return m_privateDnsEntryHasBeenSet; }
    template<typename PrivateDnsEntryT = DnsEntry>
    void SetPrivateDnsEntry(PrivateDnsEntryT&& value) { m_privateDnsEntryHasBeenSet = true; m_privateDnsEntry = std::forward<PrivateDnsEntryT>(value); }
    template<typename PrivateDnsEntryT = DnsEntry>
    VpcEndpointAssociation& WithPrivateDnsEntry(PrivateDnsEntryT&& value) { SetPrivateDnsEntry(std::forward<PrivateDnsEntryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the associated resource.</p>
     */
    inline const Aws::String& GetAssociatedResourceArn() const { return m_associatedResourceArn; }
    inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
    template<typename AssociatedResourceArnT = Aws::String>
    void SetAssociatedResourceArn(AssociatedResourceArnT&& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = std::forward<AssociatedResourceArnT>(value); }
    template<typename AssociatedResourceArnT = Aws::String>
    VpcEndpointAssociation& WithAssociatedResourceArn(AssociatedResourceArnT&& value) { SetAssociatedResourceArn(std::forward<AssociatedResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration group.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupArn() const { return m_resourceConfigurationGroupArn; }
    inline bool ResourceConfigurationGroupArnHasBeenSet() const { return m_resourceConfigurationGroupArnHasBeenSet; }
    template<typename ResourceConfigurationGroupArnT = Aws::String>
    void SetResourceConfigurationGroupArn(ResourceConfigurationGroupArnT&& value) { m_resourceConfigurationGroupArnHasBeenSet = true; m_resourceConfigurationGroupArn = std::forward<ResourceConfigurationGroupArnT>(value); }
    template<typename ResourceConfigurationGroupArnT = Aws::String>
    VpcEndpointAssociation& WithResourceConfigurationGroupArn(ResourceConfigurationGroupArnT&& value) { SetResourceConfigurationGroupArn(std::forward<ResourceConfigurationGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the VPC endpoint association.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpcEndpointAssociation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpcEndpointAssociation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    Aws::String m_serviceNetworkArn;
    bool m_serviceNetworkArnHasBeenSet = false;

    Aws::String m_serviceNetworkName;
    bool m_serviceNetworkNameHasBeenSet = false;

    Aws::String m_associatedResourceAccessibility;
    bool m_associatedResourceAccessibilityHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    DnsEntry m_dnsEntry;
    bool m_dnsEntryHasBeenSet = false;

    DnsEntry m_privateDnsEntry;
    bool m_privateDnsEntryHasBeenSet = false;

    Aws::String m_associatedResourceArn;
    bool m_associatedResourceArnHasBeenSet = false;

    Aws::String m_resourceConfigurationGroupArn;
    bool m_resourceConfigurationGroupArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
