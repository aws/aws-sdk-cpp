/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SnapshotLocationEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TagSpecification.h>
#include <aws/ec2/model/BlockDeviceMapping.h>
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
    AWS_EC2_API CreateImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImage"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
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
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateImageRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateImageRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>Only supported for instances in Local Zones. If the source instance is
     * not in a Local Zone, omit this parameter.</p>  <p>The Amazon S3 location
     * where the snapshots will be stored.</p> <ul> <li> <p>To create local snapshots
     * in the same Local Zone as the source instance, specify <code>local</code>.</p>
     * </li> <li> <p>To create regional snapshots in the parent Region of the Local
     * Zone, specify <code>regional</code> or omit this parameter.</p> </li> </ul>
     * <p>Default: <code>regional</code> </p>
     */
    inline SnapshotLocationEnum GetSnapshotLocation() const { return m_snapshotLocation; }
    inline bool SnapshotLocationHasBeenSet() const { return m_snapshotLocationHasBeenSet; }
    inline void SetSnapshotLocation(SnapshotLocationEnum value) { m_snapshotLocationHasBeenSet = true; m_snapshotLocation = value; }
    inline CreateImageRequest& WithSnapshotLocation(SnapshotLocationEnum value) { SetSnapshotLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateImageRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateImageRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the new image.</p> <p>Constraints: 3-128 alphanumeric characters,
     * parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/),
     * dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateImageRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the new image.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateImageRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetNoReboot() const { return m_noReboot; }
    inline bool NoRebootHasBeenSet() const { return m_noRebootHasBeenSet; }
    inline void SetNoReboot(bool value) { m_noRebootHasBeenSet = true; m_noReboot = value; }
    inline CreateImageRequest& WithNoReboot(bool value) { SetNoReboot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The block device mappings.</p> <p>When using the CreateImage action:</p> <ul>
     * <li> <p>You can't change the volume size using the VolumeSize parameter. If you
     * want a different volume size, you must first change the volume size of the
     * source instance.</p> </li> <li> <p>You can't modify the encryption status of
     * existing volumes or snapshots. To create an AMI with volumes or snapshots that
     * have a different encryption status (for example, where the source volume and
     * snapshots are unencrypted, and you want to create an AMI with encrypted volumes
     * or snapshots), copy the image instead.</p> </li> <li> <p>The only option that
     * can be changed for existing mappings or snapshots is
     * <code>DeleteOnTermination</code>.</p> </li> </ul>
     */
    inline const Aws::Vector<BlockDeviceMapping>& GetBlockDeviceMappings() const { return m_blockDeviceMappings; }
    inline bool BlockDeviceMappingsHasBeenSet() const { return m_blockDeviceMappingsHasBeenSet; }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    void SetBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings = std::forward<BlockDeviceMappingsT>(value); }
    template<typename BlockDeviceMappingsT = Aws::Vector<BlockDeviceMapping>>
    CreateImageRequest& WithBlockDeviceMappings(BlockDeviceMappingsT&& value) { SetBlockDeviceMappings(std::forward<BlockDeviceMappingsT>(value)); return *this;}
    template<typename BlockDeviceMappingsT = BlockDeviceMapping>
    CreateImageRequest& AddBlockDeviceMappings(BlockDeviceMappingsT&& value) { m_blockDeviceMappingsHasBeenSet = true; m_blockDeviceMappings.emplace_back(std::forward<BlockDeviceMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    SnapshotLocationEnum m_snapshotLocation{SnapshotLocationEnum::NOT_SET};
    bool m_snapshotLocationHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_noReboot{false};
    bool m_noRebootHasBeenSet = false;

    Aws::Vector<BlockDeviceMapping> m_blockDeviceMappings;
    bool m_blockDeviceMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
