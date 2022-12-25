/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateSnapshotRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshot"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A description for the snapshot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the snapshot.</p>
     */
    inline CreateSnapshotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the snapshot.</p>
     */
    inline CreateSnapshotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the snapshot.</p>
     */
    inline CreateSnapshotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline CreateSnapshotRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline CreateSnapshotRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create a local
     * snapshot.</p> <ul> <li> <p>To create a snapshot of a volume in a Region, omit
     * this parameter. The snapshot is created in the same Region as the volume.</p>
     * </li> <li> <p>To create a snapshot of a volume on an Outpost and store the
     * snapshot in the Region, omit this parameter. The snapshot is created in the
     * Region for the Outpost.</p> </li> <li> <p>To create a snapshot of a volume on an
     * Outpost and store the snapshot on an Outpost, specify the ARN of the destination
     * Outpost. The snapshot must be created on the same Outpost as the volume.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-snapshot">Create
     * local snapshots from volumes on an Outpost</a> in the <i>Amazon Elastic Compute
     * Cloud User Guide</i>.</p>
     */
    inline CreateSnapshotRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline CreateSnapshotRequest& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline CreateSnapshotRequest& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EBS volume.</p>
     */
    inline CreateSnapshotRequest& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline CreateSnapshotRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline CreateSnapshotRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline CreateSnapshotRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the snapshot during creation.</p>
     */
    inline CreateSnapshotRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateSnapshotRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
