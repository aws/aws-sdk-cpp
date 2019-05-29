/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_EC2_API CreateSnapshotsRequest : public EC2Request
  {
  public:
    CreateSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshots"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
     * <p>Checks whether you have the required permissions for the action without
     * actually making the request. Provides an error response. If you have the
     * required permissions, the error response is DryRunOperation. Otherwise, it is
     * UnauthorizedOperation.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action without
     * actually making the request. Provides an error response. If you have the
     * required permissions, the error response is DryRunOperation. Otherwise, it is
     * UnauthorizedOperation.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action without
     * actually making the request. Provides an error response. If you have the
     * required permissions, the error response is DryRunOperation. Otherwise, it is
     * UnauthorizedOperation.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action without
     * actually making the request. Provides an error response. If you have the
     * required permissions, the error response is DryRunOperation. Otherwise, it is
     * UnauthorizedOperation.</p>
     */
    inline CreateSnapshotsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Copies the tags from the specified instance to all snapshots.</p>
     */
    inline const CopyTagsFromSource& GetCopyTagsFromSource() const{ return m_copyTagsFromSource; }

    /**
     * <p>Copies the tags from the specified instance to all snapshots.</p>
     */
    inline bool CopyTagsFromSourceHasBeenSet() const { return m_copyTagsFromSourceHasBeenSet; }

    /**
     * <p>Copies the tags from the specified instance to all snapshots.</p>
     */
    inline void SetCopyTagsFromSource(const CopyTagsFromSource& value) { m_copyTagsFromSourceHasBeenSet = true; m_copyTagsFromSource = value; }

    /**
     * <p>Copies the tags from the specified instance to all snapshots.</p>
     */
    inline void SetCopyTagsFromSource(CopyTagsFromSource&& value) { m_copyTagsFromSourceHasBeenSet = true; m_copyTagsFromSource = std::move(value); }

    /**
     * <p>Copies the tags from the specified instance to all snapshots.</p>
     */
    inline CreateSnapshotsRequest& WithCopyTagsFromSource(const CopyTagsFromSource& value) { SetCopyTagsFromSource(value); return *this;}

    /**
     * <p>Copies the tags from the specified instance to all snapshots.</p>
     */
    inline CreateSnapshotsRequest& WithCopyTagsFromSource(CopyTagsFromSource&& value) { SetCopyTagsFromSource(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    InstanceSpecification m_instanceSpecification;
    bool m_instanceSpecificationHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    CopyTagsFromSource m_copyTagsFromSource;
    bool m_copyTagsFromSourceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
