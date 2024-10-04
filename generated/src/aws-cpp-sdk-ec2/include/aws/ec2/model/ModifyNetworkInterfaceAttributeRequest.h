/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/EnaSrdSpecification.h>
#include <aws/ec2/model/ConnectionTrackingSpecificationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NetworkInterfaceAttachmentChanges.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyNetworkInterfaceAttribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyNetworkInterfaceAttributeRequest">AWS
   * API Reference</a></p>
   */
  class ModifyNetworkInterfaceAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyNetworkInterfaceAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyNetworkInterfaceAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Updates the ENA Express configuration for the network interface that’s
     * attached to the instance.</p>
     */
    inline const EnaSrdSpecification& GetEnaSrdSpecification() const{ return m_enaSrdSpecification; }
    inline bool EnaSrdSpecificationHasBeenSet() const { return m_enaSrdSpecificationHasBeenSet; }
    inline void SetEnaSrdSpecification(const EnaSrdSpecification& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = value; }
    inline void SetEnaSrdSpecification(EnaSrdSpecification&& value) { m_enaSrdSpecificationHasBeenSet = true; m_enaSrdSpecification = std::move(value); }
    inline ModifyNetworkInterfaceAttributeRequest& WithEnaSrdSpecification(const EnaSrdSpecification& value) { SetEnaSrdSpecification(value); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithEnaSrdSpecification(EnaSrdSpecification&& value) { SetEnaSrdSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you’re modifying a network interface in a dual-stack or IPv6-only subnet,
     * you have the option to assign a primary IPv6 IP address. A primary IPv6 address
     * is an IPv6 GUA address associated with an ENI that you have enabled to use a
     * primary IPv6 address. Use this option if the instance that this ENI will be
     * attached to relies on its IPv6 address not changing. Amazon Web Services will
     * automatically assign an IPv6 address associated with the ENI attached to your
     * instance to be the primary IPv6 address. Once you enable an IPv6 GUA address to
     * be a primary IPv6, you cannot disable it. When you enable an IPv6 GUA address to
     * be a primary IPv6, the first IPv6 GUA will be made the primary IPv6 address
     * until the instance is terminated or the network interface is detached. If you
     * have multiple IPv6 addresses associated with an ENI attached to your instance
     * and you enable a primary IPv6 address, the first IPv6 GUA address associated
     * with the ENI becomes the primary IPv6 address.</p>
     */
    inline bool GetEnablePrimaryIpv6() const{ return m_enablePrimaryIpv6; }
    inline bool EnablePrimaryIpv6HasBeenSet() const { return m_enablePrimaryIpv6HasBeenSet; }
    inline void SetEnablePrimaryIpv6(bool value) { m_enablePrimaryIpv6HasBeenSet = true; m_enablePrimaryIpv6 = value; }
    inline ModifyNetworkInterfaceAttributeRequest& WithEnablePrimaryIpv6(bool value) { SetEnablePrimaryIpv6(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A connection tracking specification.</p>
     */
    inline const ConnectionTrackingSpecificationRequest& GetConnectionTrackingSpecification() const{ return m_connectionTrackingSpecification; }
    inline bool ConnectionTrackingSpecificationHasBeenSet() const { return m_connectionTrackingSpecificationHasBeenSet; }
    inline void SetConnectionTrackingSpecification(const ConnectionTrackingSpecificationRequest& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = value; }
    inline void SetConnectionTrackingSpecification(ConnectionTrackingSpecificationRequest&& value) { m_connectionTrackingSpecificationHasBeenSet = true; m_connectionTrackingSpecification = std::move(value); }
    inline ModifyNetworkInterfaceAttributeRequest& WithConnectionTrackingSpecification(const ConnectionTrackingSpecificationRequest& value) { SetConnectionTrackingSpecification(value); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithConnectionTrackingSpecification(ConnectionTrackingSpecificationRequest&& value) { SetConnectionTrackingSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to assign a public IPv4 address to a network interface.
     * This option can be enabled for any network interface but will only apply to the
     * primary network interface (eth0).</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline ModifyNetworkInterfaceAttributeRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyNetworkInterfaceAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline ModifyNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the network interface.</p>
     */
    inline const AttributeValue& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const AttributeValue& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(AttributeValue&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline ModifyNetworkInterfaceAttributeRequest& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithDescription(AttributeValue&& value) { SetDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable source/destination checks, which ensure that the instance
     * is either the source or the destination of any traffic that it receives. If the
     * value is <code>true</code>, source/destination checks are enabled; otherwise,
     * they are disabled. The default value is <code>true</code>. You must disable
     * source/destination checks if the instance runs services such as network address
     * translation, routing, or firewalls.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }
    inline bool SourceDestCheckHasBeenSet() const { return m_sourceDestCheckHasBeenSet; }
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = std::move(value); }
    inline ModifyNetworkInterfaceAttributeRequest& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = std::move(value); }
    inline ModifyNetworkInterfaceAttributeRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(std::move(value)); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    inline ModifyNetworkInterfaceAttributeRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(std::move(value)); return *this; }
    inline ModifyNetworkInterfaceAttributeRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the interface attachment. If modifying the <code>delete on
     * termination</code> attribute, you must specify the ID of the interface
     * attachment.</p>
     */
    inline const NetworkInterfaceAttachmentChanges& GetAttachment() const{ return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    inline void SetAttachment(const NetworkInterfaceAttachmentChanges& value) { m_attachmentHasBeenSet = true; m_attachment = value; }
    inline void SetAttachment(NetworkInterfaceAttachmentChanges&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }
    inline ModifyNetworkInterfaceAttributeRequest& WithAttachment(const NetworkInterfaceAttachmentChanges& value) { SetAttachment(value); return *this;}
    inline ModifyNetworkInterfaceAttributeRequest& WithAttachment(NetworkInterfaceAttachmentChanges&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}
  private:

    EnaSrdSpecification m_enaSrdSpecification;
    bool m_enaSrdSpecificationHasBeenSet = false;

    bool m_enablePrimaryIpv6;
    bool m_enablePrimaryIpv6HasBeenSet = false;

    ConnectionTrackingSpecificationRequest m_connectionTrackingSpecification;
    bool m_connectionTrackingSpecificationHasBeenSet = false;

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    AttributeValue m_description;
    bool m_descriptionHasBeenSet = false;

    AttributeBooleanValue m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet = false;

    NetworkInterfaceAttachmentChanges m_attachment;
    bool m_attachmentHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
