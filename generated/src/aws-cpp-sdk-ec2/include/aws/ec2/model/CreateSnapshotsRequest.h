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
#include <aws/ec2/model/SnapshotLocationEnum.h>
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
    AWS_EC2_API CreateSnapshotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshots"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p> A description propagated to every snapshot specified by the instance.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSnapshotsRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance to specify which volumes should be included in the
     * snapshots.</p>
     */
    inline const InstanceSpecification& GetInstanceSpecification() const { return m_instanceSpecification; }
    inline bool InstanceSpecificationHasBeenSet() const { return m_instanceSpecificationHasBeenSet; }
    template<typename InstanceSpecificationT = InstanceSpecification>
    void SetInstanceSpecification(InstanceSpecificationT&& value) { m_instanceSpecificationHasBeenSet = true; m_instanceSpecification = std::forward<InstanceSpecificationT>(value); }
    template<typename InstanceSpecificationT = InstanceSpecification>
    CreateSnapshotsRequest& WithInstanceSpecification(InstanceSpecificationT&& value) { SetInstanceSpecification(std::forward<InstanceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Only supported for instances on Outposts. If the source instance is
     * not on an Outpost, omit this parameter.</p>  <ul> <li> <p>To create the
     * snapshots on the same Outpost as the source instance, specify the ARN of that
     * Outpost. The snapshots must be created on the same Outpost as the instance.</p>
     * </li> <li> <p>To create the snapshots in the parent Region of the Outpost, omit
     * this parameter.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/ebs/latest/userguide/snapshots-outposts.html#create-snapshot">
     * Create local snapshots from volumes on an Outpost</a> in the <i>Amazon EBS User
     * Guide</i>.</p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    CreateSnapshotsRequest& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to apply to every snapshot specified by the instance.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateSnapshotsRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateSnapshotsRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
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
    inline CreateSnapshotsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copies the tags from the specified volume to corresponding snapshot.</p>
     */
    inline CopyTagsFromSource GetCopyTagsFromSource() const { return m_copyTagsFromSource; }
    inline bool CopyTagsFromSourceHasBeenSet() const { return m_copyTagsFromSourceHasBeenSet; }
    inline void SetCopyTagsFromSource(CopyTagsFromSource value) { m_copyTagsFromSourceHasBeenSet = true; m_copyTagsFromSource = value; }
    inline CreateSnapshotsRequest& WithCopyTagsFromSource(CopyTagsFromSource value) { SetCopyTagsFromSource(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Only supported for instances in Local Zones. If the source instance is
     * not in a Local Zone, omit this parameter.</p>  <ul> <li> <p>To create
     * local snapshots in the same Local Zone as the source instance, specify
     * <code>local</code>.</p> </li> <li> <p>To create regional snapshots in the parent
     * Region of the Local Zone, specify <code>regional</code> or omit this
     * parameter.</p> </li> </ul> <p>Default value: <code>regional</code> </p>
     */
    inline SnapshotLocationEnum GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(SnapshotLocationEnum value) { m_locationHasBeenSet = true; m_location = value; }
    inline CreateSnapshotsRequest& WithLocation(SnapshotLocationEnum value) { SetLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InstanceSpecification m_instanceSpecification;
    bool m_instanceSpecificationHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    CopyTagsFromSource m_copyTagsFromSource{CopyTagsFromSource::NOT_SET};
    bool m_copyTagsFromSourceHasBeenSet = false;

    SnapshotLocationEnum m_location{SnapshotLocationEnum::NOT_SET};
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
