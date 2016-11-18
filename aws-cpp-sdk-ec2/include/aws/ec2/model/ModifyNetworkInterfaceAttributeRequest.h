﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/NetworkInterfaceAttachmentChanges.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyNetworkInterfaceAttribute.</p>
   */
  class AWS_EC2_API ModifyNetworkInterfaceAttributeRequest : public EC2Request
  {
  public:
    ModifyNetworkInterfaceAttributeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline const AttributeValue& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the network interface.</p>
     */
    inline void SetDescription(const AttributeValue& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the network interface.</p>
     */
    inline void SetDescription(AttributeValue&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the network interface.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the network interface.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithDescription(AttributeValue&& value) { SetDescription(value); return *this;}

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
     * Instances</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
     * Instances</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
     */
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
     * Instances</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
     */
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
     * Instances</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>Indicates whether source/destination checking is enabled. A value of
     * <code>true</code> means checking is enabled, and <code>false</code> means
     * checking is disabled. This value must be <code>false</code> for a NAT instance
     * to perform NAT. For more information, see <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT
     * Instances</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroups() const{ return m_groups; }

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline void SetGroups(const Aws::Vector<Aws::String>& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline void SetGroups(Aws::Vector<Aws::String>&& value) { m_groupsHasBeenSet = true; m_groups = value; }

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithGroups(const Aws::Vector<Aws::String>& value) { SetGroups(value); return *this;}

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithGroups(Aws::Vector<Aws::String>&& value) { SetGroups(value); return *this;}

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& AddGroups(const Aws::String& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& AddGroups(Aws::String&& value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Changes the security groups for the network interface. The new set of groups
     * you specify replaces the current set. You must specify at least one group, even
     * if it's just the default security group in the VPC. You must specify the ID of
     * the security group, not the name.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& AddGroups(const char* value) { m_groupsHasBeenSet = true; m_groups.push_back(value); return *this; }

    /**
     * <p>Information about the interface attachment. If modifying the 'delete on
     * termination' attribute, you must specify the ID of the interface attachment.</p>
     */
    inline const NetworkInterfaceAttachmentChanges& GetAttachment() const{ return m_attachment; }

    /**
     * <p>Information about the interface attachment. If modifying the 'delete on
     * termination' attribute, you must specify the ID of the interface attachment.</p>
     */
    inline void SetAttachment(const NetworkInterfaceAttachmentChanges& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>Information about the interface attachment. If modifying the 'delete on
     * termination' attribute, you must specify the ID of the interface attachment.</p>
     */
    inline void SetAttachment(NetworkInterfaceAttachmentChanges&& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>Information about the interface attachment. If modifying the 'delete on
     * termination' attribute, you must specify the ID of the interface attachment.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithAttachment(const NetworkInterfaceAttachmentChanges& value) { SetAttachment(value); return *this;}

    /**
     * <p>Information about the interface attachment. If modifying the 'delete on
     * termination' attribute, you must specify the ID of the interface attachment.</p>
     */
    inline ModifyNetworkInterfaceAttributeRequest& WithAttachment(NetworkInterfaceAttachmentChanges&& value) { SetAttachment(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    AttributeValue m_description;
    bool m_descriptionHasBeenSet;
    AttributeBooleanValue m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet;
    Aws::Vector<Aws::String> m_groups;
    bool m_groupsHasBeenSet;
    NetworkInterfaceAttachmentChanges m_attachment;
    bool m_attachmentHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
