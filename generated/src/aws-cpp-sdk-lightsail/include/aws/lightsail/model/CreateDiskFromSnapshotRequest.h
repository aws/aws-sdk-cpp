/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOnRequest.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateDiskFromSnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateDiskFromSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDiskFromSnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique Lightsail disk name (<code>my-disk</code>).</p>
     */
    inline const Aws::String& GetDiskName() const { return m_diskName; }
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }
    template<typename DiskNameT = Aws::String>
    void SetDiskName(DiskNameT&& value) { m_diskNameHasBeenSet = true; m_diskName = std::forward<DiskNameT>(value); }
    template<typename DiskNameT = Aws::String>
    CreateDiskFromSnapshotRequest& WithDiskName(DiskNameT&& value) { SetDiskName(std::forward<DiskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the disk snapshot (<code>my-snapshot</code>) from which to create
     * the new storage disk.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot
     * be defined together with the <code>source disk name</code> parameter. The
     * <code>disk snapshot name</code> and <code>source disk name</code> parameters are
     * mutually exclusive.</p> </li> </ul>
     */
    inline const Aws::String& GetDiskSnapshotName() const { return m_diskSnapshotName; }
    inline bool DiskSnapshotNameHasBeenSet() const { return m_diskSnapshotNameHasBeenSet; }
    template<typename DiskSnapshotNameT = Aws::String>
    void SetDiskSnapshotName(DiskSnapshotNameT&& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = std::forward<DiskSnapshotNameT>(value); }
    template<typename DiskSnapshotNameT = Aws::String>
    CreateDiskFromSnapshotRequest& WithDiskSnapshotName(DiskSnapshotNameT&& value) { SetDiskSnapshotName(std::forward<DiskSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where you want to create the disk
     * (<code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    CreateDiskFromSnapshotRequest& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk in GB (<code>32</code>).</p>
     */
    inline int GetSizeInGb() const { return m_sizeInGb; }
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }
    inline void SetSizeInGb(int value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }
    inline CreateDiskFromSnapshotRequest& WithSizeInGb(int value) { SetSizeInGb(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDiskFromSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDiskFromSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline const Aws::Vector<AddOnRequest>& GetAddOns() const { return m_addOns; }
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }
    template<typename AddOnsT = Aws::Vector<AddOnRequest>>
    void SetAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns = std::forward<AddOnsT>(value); }
    template<typename AddOnsT = Aws::Vector<AddOnRequest>>
    CreateDiskFromSnapshotRequest& WithAddOns(AddOnsT&& value) { SetAddOns(std::forward<AddOnsT>(value)); return *this;}
    template<typename AddOnsT = AddOnRequest>
    CreateDiskFromSnapshotRequest& AddAddOns(AddOnsT&& value) { m_addOnsHasBeenSet = true; m_addOns.emplace_back(std::forward<AddOnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the source disk from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>disk snapshot name</code> parameter. The <code>source
     * disk name</code> and <code>disk snapshot name</code> parameters are mutually
     * exclusive.</p> </li> <li> <p>Define this parameter only when creating a new disk
     * from an automatic snapshot. For more information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDiskName() const { return m_sourceDiskName; }
    inline bool SourceDiskNameHasBeenSet() const { return m_sourceDiskNameHasBeenSet; }
    template<typename SourceDiskNameT = Aws::String>
    void SetSourceDiskName(SourceDiskNameT&& value) { m_sourceDiskNameHasBeenSet = true; m_sourceDiskName = std::forward<SourceDiskNameT>(value); }
    template<typename SourceDiskNameT = Aws::String>
    CreateDiskFromSnapshotRequest& WithSourceDiskName(SourceDiskNameT&& value) { SetSourceDiskName(std::forward<SourceDiskNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the automatic snapshot to use for the new disk. Use the <code>get
     * auto snapshots</code> operation to identify the dates of the available automatic
     * snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when creating a new disk from an automatic snapshot. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetRestoreDate() const { return m_restoreDate; }
    inline bool RestoreDateHasBeenSet() const { return m_restoreDateHasBeenSet; }
    template<typename RestoreDateT = Aws::String>
    void SetRestoreDate(RestoreDateT&& value) { m_restoreDateHasBeenSet = true; m_restoreDate = std::forward<RestoreDateT>(value); }
    template<typename RestoreDateT = Aws::String>
    CreateDiskFromSnapshotRequest& WithRestoreDate(RestoreDateT&& value) { SetRestoreDate(std::forward<RestoreDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>restore date</code> parameter. The <code>use latest
     * restorable auto snapshot</code> and <code>restore date</code> parameters are
     * mutually exclusive.</p> </li> <li> <p>Define this parameter only when creating a
     * new disk from an automatic snapshot. For more information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableAutoSnapshot() const { return m_useLatestRestorableAutoSnapshot; }
    inline bool UseLatestRestorableAutoSnapshotHasBeenSet() const { return m_useLatestRestorableAutoSnapshotHasBeenSet; }
    inline void SetUseLatestRestorableAutoSnapshot(bool value) { m_useLatestRestorableAutoSnapshotHasBeenSet = true; m_useLatestRestorableAutoSnapshot = value; }
    inline CreateDiskFromSnapshotRequest& WithUseLatestRestorableAutoSnapshot(bool value) { SetUseLatestRestorableAutoSnapshot(value); return *this;}
    ///@}
  private:

    Aws::String m_diskName;
    bool m_diskNameHasBeenSet = false;

    Aws::String m_diskSnapshotName;
    bool m_diskSnapshotNameHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    int m_sizeInGb{0};
    bool m_sizeInGbHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AddOnRequest> m_addOns;
    bool m_addOnsHasBeenSet = false;

    Aws::String m_sourceDiskName;
    bool m_sourceDiskNameHasBeenSet = false;

    Aws::String m_restoreDate;
    bool m_restoreDateHasBeenSet = false;

    bool m_useLatestRestorableAutoSnapshot{false};
    bool m_useLatestRestorableAutoSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
