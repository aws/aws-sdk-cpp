/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CopyTagsFromSource.h>
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
  class CreateSnapshotsRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshots"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline CreateSnapshotsRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline CreateSnapshotsRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline CreateSnapshotsRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The instance to specify which volumes should be included in the
     * snapshots.</p>
     */
    inline const InstanceSpecification& GetInstanceSpecification() const{ return m_instanceSpecification; }

    /**
     * <p>The instance to specify which volumes should be included in the
     * snapshots.</p>
     */
    inline bool InstanceSpecificationHasBeenSet() const { return m_instanceSpecificationHasBeenSet; }

    /**
     * <p>The instance to specify which volumes should be included in the
     * snapshots.</p>
     */
    inline void SetInstanceSpecification(const InstanceSpecification& value) { m_instanceSpecificationHasBeenSet = true; m_instanceSpecification = value; }

    /**
     * <p>The instance to specify which volumes should be included in the
     * snapshots.</p>
     */
    inline void SetInstanceSpecification(InstanceSpecification&& value) { m_instanceSpecificationHasBeenSet = true; m_instanceSpecification = std::move(value); }

    /**
     * <p>The instance to specify which volumes should be included in the
     * snapshots.</p>
     */
    inline CreateSnapshotsRequest& WithInstanceSpecification(const InstanceSpecification& value) { SetInstanceSpecification(value); return *this;}

    /**
     * <p>The instance to specify which volumes should be included in the
     * snapshots.</p>
     */
    inline CreateSnapshotsRequest& WithInstanceSpecification(InstanceSpecification&& value) { SetInstanceSpecification(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const{ return m_outpostArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetOutpostArn(const Aws::String& value) { m_outpostArnHasBeenSet = true; m_outpostArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetOutpostArn(Aws::String&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline void SetOutpostArn(const char* value) { m_outpostArnHasBeenSet = true; m_outpostArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateSnapshotsRequest& WithOutpostArn(const Aws::String& value) { SetOutpostArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateSnapshotsRequest& WithOutpostArn(Aws::String&& value) { SetOutpostArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Outpost on which to create the local
     * snapshots.</p> <ul> <li> <p>To create snapshots from an instance in a Region,
     * omit this parameter. The snapshots are created in the same Region as the
     * instance.</p> </li> <li> <p>To create snapshots from an instance on an Outpost
     * and store the snapshots in the Region, omit this parameter. The snapshots are
     * created in the Region for the Outpost.</p> </li> <li> <p>To create snapshots
     * from an instance on an Outpost and store the snapshots on an Outpost, specify
     * the ARN of the destination Outpost. The snapshots must be created on the same
     * Outpost as the instance.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshots-outposts.html#create-multivol-snapshot">
     * Create multi-volume local snapshots from instances on an Outpost</a> in the
     * <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     */
    inline CreateSnapshotsRequest& WithOutpostArn(const char* value) { SetOutpostArn(value); return *this;}


    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline CreateSnapshotsRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline CreateSnapshotsRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline CreateSnapshotsRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline CreateSnapshotsRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateSnapshotsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Copies the tags from the specified volume to corresponding snapshot.</p>
     */
    inline const CopyTagsFromSource& GetCopyTagsFromSource() const{ return m_copyTagsFromSource; }

    /**
     * <p>Copies the tags from the specified volume to corresponding snapshot.</p>
     */
    inline bool CopyTagsFromSourceHasBeenSet() const { return m_copyTagsFromSourceHasBeenSet; }

    /**
     * <p>Copies the tags from the specified volume to corresponding snapshot.</p>
     */
    inline void SetCopyTagsFromSource(const CopyTagsFromSource& value) { m_copyTagsFromSourceHasBeenSet = true; m_copyTagsFromSource = value; }

    /**
     * <p>Copies the tags from the specified volume to corresponding snapshot.</p>
     */
    inline void SetCopyTagsFromSource(CopyTagsFromSource&& value) { m_copyTagsFromSourceHasBeenSet = true; m_copyTagsFromSource = std::move(value); }

    /**
     * <p>Copies the tags from the specified volume to corresponding snapshot.</p>
     */
    inline CreateSnapshotsRequest& WithCopyTagsFromSource(const CopyTagsFromSource& value) { SetCopyTagsFromSource(value); return *this;}

    /**
     * <p>Copies the tags from the specified volume to corresponding snapshot.</p>
     */
    inline CreateSnapshotsRequest& WithCopyTagsFromSource(CopyTagsFromSource&& value) { SetCopyTagsFromSource(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InstanceSpecification m_instanceSpecification;
    bool m_instanceSpecificationHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    CopyTagsFromSource m_copyTagsFromSource;
    bool m_copyTagsFromSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
