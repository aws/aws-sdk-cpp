/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateImageRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const{ return m_blockDeviceMappings; }

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline void SetBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = value; }

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline void SetBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::move(value); }

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline CreateImageRequest& WithBlockDeviceMappings(const Aws::Vector<BlockDeviceMapping>& value) { SetBlockDeviceMappings(value); return *this;}

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline CreateImageRequest& WithBlockDeviceMappings(Aws::Vector<BlockDeviceMapping>&& value) { SetBlockDeviceMappings(std::move(value)); return *this;}

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline CreateImageRequest& AddBlockDeviceMappings(const BlockDeviceMapping& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(value); return *this; }

    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), use the <a>CopyImage</a> action.</p> </li> <li> <p>The only
     * option that can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline CreateImageRequest& AddBlockDeviceMappings(BlockDeviceMapping&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>A description for the new image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the new image.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the new image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the new image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the new image.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the new image.</p>
     */
    inline CreateImageRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the new image.</p>
     */
    inline CreateImageRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the new image.</p>
     */
    inline CreateImageRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline CreateImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateImageRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateImageRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline CreateImageRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline CreateImageRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline CreateImageRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline CreateImageRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates whether or not the instance should be automatically rebooted before
     * creating the image. Specify one of the following values:</p> <ul> <li> <p>
     * <code>true</code> - The instance is not rebooted before creating the image. This
     * creates crash-consistent snapshots that include only the data that has been
     * written to the volumes at the time the snapshots are created. Buffered data and
     * data in memory that has not yet been written to the volumes is not included in
     * the snapshots.</p> </li> <li> <p> <code>false</code> - The instance is rebooted
     * before creating the image. This ensures that all buffered data and data in
     * memory is written to the volumes before the snapshots are created.</p> </li>
     * </ul> <p>Default: <code>false</code> </p>
     */
    inline bool GetNoReboot() const{ return m_noReboot; }

    /**
     * <p>Indicates whether or not the instance should be automatically rebooted before
     * creating the image. Specify one of the following values:</p> <ul> <li> <p>
     * <code>true</code> - The instance is not rebooted before creating the image. This
     * creates crash-consistent snapshots that include only the data that has been
     * written to the volumes at the time the snapshots are created. Buffered data and
     * data in memory that has not yet been written to the volumes is not included in
     * the snapshots.</p> </li> <li> <p> <code>false</code> - The instance is rebooted
     * before creating the image. This ensures that all buffered data and data in
     * memory is written to the volumes before the snapshots are created.</p> </li>
     * </ul> <p>Default: <code>false</code> </p>
     */
    inline bool NoRebootHasBeenSet() const { return m_noRebootHasBeenSet; }

    /**
     * <p>Indicates whether or not the instance should be automatically rebooted before
     * creating the image. Specify one of the following values:</p> <ul> <li> <p>
     * <code>true</code> - The instance is not rebooted before creating the image. This
     * creates crash-consistent snapshots that include only the data that has been
     * written to the volumes at the time the snapshots are created. Buffered data and
     * data in memory that has not yet been written to the volumes is not included in
     * the snapshots.</p> </li> <li> <p> <code>false</code> - The instance is rebooted
     * before creating the image. This ensures that all buffered data and data in
     * memory is written to the volumes before the snapshots are created.</p> </li>
     * </ul> <p>Default: <code>false</code> </p>
     */
    inline void SetNoReboot(bool value) { m_noRebootHasBeenSet = true; m_noReboot = value; }

    /**
     * <p>Indicates whether or not the instance should be automatically rebooted before
     * creating the image. Specify one of the following values:</p> <ul> <li> <p>
     * <code>true</code> - The instance is not rebooted before creating the image. This
     * creates crash-consistent snapshots that include only the data that has been
     * written to the volumes at the time the snapshots are created. Buffered data and
     * data in memory that has not yet been written to the volumes is not included in
     * the snapshots.</p> </li> <li> <p> <code>false</code> - The instance is rebooted
     * before creating the image. This ensures that all buffered data and data in
     * memory is written to the volumes before the snapshots are created.</p> </li>
     * </ul> <p>Default: <code>false</code> </p>
     */
    inline CreateImageRequest& WithNoReboot(bool value) { SetNoReboot(value); return *this;}


    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline CreateImageRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline CreateImageRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline CreateImageRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the AMI and snapshots on creation. You can tag the AMI,
     * the snapshots, or both.</p> <ul> <li> <p>To tag the AMI, the value for
     * <code>ResourceType</code> must be <code>image</code>.</p> </li> <li> <p>To tag
     * the snapshots that are created of the root volume and of other Amazon EBS
     * volumes that are attached to the instance, the value for
     * <code>ResourceType</code> must be <code>snapshot</code>. The same tag is applied
     * to all of the snapshots that are created.</p> </li> </ul> <p>If you specify
     * other values for <code>ResourceType</code>, the request fails.</p> <p>To tag an
     * AMI or snapshot after it has been created, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateTags.html">CreateTags</a>.
     * </p>
     */
    inline CreateImageRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_noReboot;
    bool m_noRebootHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
