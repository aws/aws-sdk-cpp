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
    AWS_EC2_API VpcEndpointAssociation();
    AWS_EC2_API VpcEndpointAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcEndpointAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the VPC endpoint association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline VpcEndpointAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline VpcEndpointAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline VpcEndpointAssociation& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline VpcEndpointAssociation& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkArn() const{ return m_serviceNetworkArn; }
    inline bool ServiceNetworkArnHasBeenSet() const { return m_serviceNetworkArnHasBeenSet; }
    inline void SetServiceNetworkArn(const Aws::String& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = value; }
    inline void SetServiceNetworkArn(Aws::String&& value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn = std::move(value); }
    inline void SetServiceNetworkArn(const char* value) { m_serviceNetworkArnHasBeenSet = true; m_serviceNetworkArn.assign(value); }
    inline VpcEndpointAssociation& WithServiceNetworkArn(const Aws::String& value) { SetServiceNetworkArn(value); return *this;}
    inline VpcEndpointAssociation& WithServiceNetworkArn(Aws::String&& value) { SetServiceNetworkArn(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithServiceNetworkArn(const char* value) { SetServiceNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service network.</p>
     */
    inline const Aws::String& GetServiceNetworkName() const{ return m_serviceNetworkName; }
    inline bool ServiceNetworkNameHasBeenSet() const { return m_serviceNetworkNameHasBeenSet; }
    inline void SetServiceNetworkName(const Aws::String& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = value; }
    inline void SetServiceNetworkName(Aws::String&& value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName = std::move(value); }
    inline void SetServiceNetworkName(const char* value) { m_serviceNetworkNameHasBeenSet = true; m_serviceNetworkName.assign(value); }
    inline VpcEndpointAssociation& WithServiceNetworkName(const Aws::String& value) { SetServiceNetworkName(value); return *this;}
    inline VpcEndpointAssociation& WithServiceNetworkName(Aws::String&& value) { SetServiceNetworkName(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithServiceNetworkName(const char* value) { SetServiceNetworkName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connectivity status of the resources associated to a VPC endpoint. The
     * resource is accessible if the associated resource configuration is
     * <code>AVAILABLE</code>, otherwise the resource is inaccessible.</p>
     */
    inline const Aws::String& GetAssociatedResourceAccessibility() const{ return m_associatedResourceAccessibility; }
    inline bool AssociatedResourceAccessibilityHasBeenSet() const { return m_associatedResourceAccessibilityHasBeenSet; }
    inline void SetAssociatedResourceAccessibility(const Aws::String& value) { m_associatedResourceAccessibilityHasBeenSet = true; m_associatedResourceAccessibility = value; }
    inline void SetAssociatedResourceAccessibility(Aws::String&& value) { m_associatedResourceAccessibilityHasBeenSet = true; m_associatedResourceAccessibility = std::move(value); }
    inline void SetAssociatedResourceAccessibility(const char* value) { m_associatedResourceAccessibilityHasBeenSet = true; m_associatedResourceAccessibility.assign(value); }
    inline VpcEndpointAssociation& WithAssociatedResourceAccessibility(const Aws::String& value) { SetAssociatedResourceAccessibility(value); return *this;}
    inline VpcEndpointAssociation& WithAssociatedResourceAccessibility(Aws::String&& value) { SetAssociatedResourceAccessibility(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithAssociatedResourceAccessibility(const char* value) { SetAssociatedResourceAccessibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message related to why an VPC endpoint association failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline VpcEndpointAssociation& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline VpcEndpointAssociation& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error code related to why an VPC endpoint association failed.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline VpcEndpointAssociation& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline VpcEndpointAssociation& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS entry of the VPC endpoint association.</p>
     */
    inline const DnsEntry& GetDnsEntry() const{ return m_dnsEntry; }
    inline bool DnsEntryHasBeenSet() const { return m_dnsEntryHasBeenSet; }
    inline void SetDnsEntry(const DnsEntry& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = value; }
    inline void SetDnsEntry(DnsEntry&& value) { m_dnsEntryHasBeenSet = true; m_dnsEntry = std::move(value); }
    inline VpcEndpointAssociation& WithDnsEntry(const DnsEntry& value) { SetDnsEntry(value); return *this;}
    inline VpcEndpointAssociation& WithDnsEntry(DnsEntry&& value) { SetDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private DNS entry of the VPC endpoint association.</p>
     */
    inline const DnsEntry& GetPrivateDnsEntry() const{ return m_privateDnsEntry; }
    inline bool PrivateDnsEntryHasBeenSet() const { return m_privateDnsEntryHasBeenSet; }
    inline void SetPrivateDnsEntry(const DnsEntry& value) { m_privateDnsEntryHasBeenSet = true; m_privateDnsEntry = value; }
    inline void SetPrivateDnsEntry(DnsEntry&& value) { m_privateDnsEntryHasBeenSet = true; m_privateDnsEntry = std::move(value); }
    inline VpcEndpointAssociation& WithPrivateDnsEntry(const DnsEntry& value) { SetPrivateDnsEntry(value); return *this;}
    inline VpcEndpointAssociation& WithPrivateDnsEntry(DnsEntry&& value) { SetPrivateDnsEntry(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the associated resource.</p>
     */
    inline const Aws::String& GetAssociatedResourceArn() const{ return m_associatedResourceArn; }
    inline bool AssociatedResourceArnHasBeenSet() const { return m_associatedResourceArnHasBeenSet; }
    inline void SetAssociatedResourceArn(const Aws::String& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = value; }
    inline void SetAssociatedResourceArn(Aws::String&& value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn = std::move(value); }
    inline void SetAssociatedResourceArn(const char* value) { m_associatedResourceArnHasBeenSet = true; m_associatedResourceArn.assign(value); }
    inline VpcEndpointAssociation& WithAssociatedResourceArn(const Aws::String& value) { SetAssociatedResourceArn(value); return *this;}
    inline VpcEndpointAssociation& WithAssociatedResourceArn(Aws::String&& value) { SetAssociatedResourceArn(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithAssociatedResourceArn(const char* value) { SetAssociatedResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource configuration group.</p>
     */
    inline const Aws::String& GetResourceConfigurationGroupArn() const{ return m_resourceConfigurationGroupArn; }
    inline bool ResourceConfigurationGroupArnHasBeenSet() const { return m_resourceConfigurationGroupArnHasBeenSet; }
    inline void SetResourceConfigurationGroupArn(const Aws::String& value) { m_resourceConfigurationGroupArnHasBeenSet = true; m_resourceConfigurationGroupArn = value; }
    inline void SetResourceConfigurationGroupArn(Aws::String&& value) { m_resourceConfigurationGroupArnHasBeenSet = true; m_resourceConfigurationGroupArn = std::move(value); }
    inline void SetResourceConfigurationGroupArn(const char* value) { m_resourceConfigurationGroupArnHasBeenSet = true; m_resourceConfigurationGroupArn.assign(value); }
    inline VpcEndpointAssociation& WithResourceConfigurationGroupArn(const Aws::String& value) { SetResourceConfigurationGroupArn(value); return *this;}
    inline VpcEndpointAssociation& WithResourceConfigurationGroupArn(Aws::String&& value) { SetResourceConfigurationGroupArn(std::move(value)); return *this;}
    inline VpcEndpointAssociation& WithResourceConfigurationGroupArn(const char* value) { SetResourceConfigurationGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to apply to the VPC endpoint association.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VpcEndpointAssociation& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline VpcEndpointAssociation& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline VpcEndpointAssociation& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline VpcEndpointAssociation& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
