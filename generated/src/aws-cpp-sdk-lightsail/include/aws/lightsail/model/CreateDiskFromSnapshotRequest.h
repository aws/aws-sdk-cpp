﻿/**
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
    AWS_LIGHTSAIL_API CreateDiskFromSnapshotRequest();

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
    inline const Aws::String& GetDiskName() const{ return m_diskName; }
    inline bool DiskNameHasBeenSet() const { return m_diskNameHasBeenSet; }
    inline void SetDiskName(const Aws::String& value) { m_diskNameHasBeenSet = true; m_diskName = value; }
    inline void SetDiskName(Aws::String&& value) { m_diskNameHasBeenSet = true; m_diskName = std::move(value); }
    inline void SetDiskName(const char* value) { m_diskNameHasBeenSet = true; m_diskName.assign(value); }
    inline CreateDiskFromSnapshotRequest& WithDiskName(const Aws::String& value) { SetDiskName(value); return *this;}
    inline CreateDiskFromSnapshotRequest& WithDiskName(Aws::String&& value) { SetDiskName(std::move(value)); return *this;}
    inline CreateDiskFromSnapshotRequest& WithDiskName(const char* value) { SetDiskName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the disk snapshot (<code>my-snapshot</code>) from which to create
     * the new storage disk.</p> <p>Constraint:</p> <ul> <li> <p>This parameter cannot
     * be defined together with the <code>source disk name</code> parameter. The
     * <code>disk snapshot name</code> and <code>source disk name</code> parameters are
     * mutually exclusive.</p> </li> </ul>
     */
    inline const Aws::String& GetDiskSnapshotName() const{ return m_diskSnapshotName; }
    inline bool DiskSnapshotNameHasBeenSet() const { return m_diskSnapshotNameHasBeenSet; }
    inline void SetDiskSnapshotName(const Aws::String& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = value; }
    inline void SetDiskSnapshotName(Aws::String&& value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName = std::move(value); }
    inline void SetDiskSnapshotName(const char* value) { m_diskSnapshotNameHasBeenSet = true; m_diskSnapshotName.assign(value); }
    inline CreateDiskFromSnapshotRequest& WithDiskSnapshotName(const Aws::String& value) { SetDiskSnapshotName(value); return *this;}
    inline CreateDiskFromSnapshotRequest& WithDiskSnapshotName(Aws::String&& value) { SetDiskSnapshotName(std::move(value)); return *this;}
    inline CreateDiskFromSnapshotRequest& WithDiskSnapshotName(const char* value) { SetDiskSnapshotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone where you want to create the disk
     * (<code>us-east-2a</code>). Choose the same Availability Zone as the Lightsail
     * instance where you want to create the disk.</p> <p>Use the GetRegions operation
     * to list the Availability Zones where Lightsail is currently available.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CreateDiskFromSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateDiskFromSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateDiskFromSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the disk in GB (<code>32</code>).</p>
     */
    inline int GetSizeInGb() const{ return m_sizeInGb; }
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
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDiskFromSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDiskFromSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDiskFromSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDiskFromSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that represent the add-ons to enable for the new
     * disk.</p>
     */
    inline const Aws::Vector<AddOnRequest>& GetAddOns() const{ return m_addOns; }
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }
    inline void SetAddOns(const Aws::Vector<AddOnRequest>& value) { m_addOnsHasBeenSet = true; m_addOns = value; }
    inline void SetAddOns(Aws::Vector<AddOnRequest>&& value) { m_addOnsHasBeenSet = true; m_addOns = std::move(value); }
    inline CreateDiskFromSnapshotRequest& WithAddOns(const Aws::Vector<AddOnRequest>& value) { SetAddOns(value); return *this;}
    inline CreateDiskFromSnapshotRequest& WithAddOns(Aws::Vector<AddOnRequest>&& value) { SetAddOns(std::move(value)); return *this;}
    inline CreateDiskFromSnapshotRequest& AddAddOns(const AddOnRequest& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(value); return *this; }
    inline CreateDiskFromSnapshotRequest& AddAddOns(AddOnRequest&& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the source disk from which the source automatic snapshot was
     * created.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>disk snapshot name</code> parameter. The <code>source
     * disk name</code> and <code>disk snapshot name</code> parameters are mutually
     * exclusive.</p> </li> <li> <p>Define this parameter only when creating a new disk
     * from an automatic snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDiskName() const{ return m_sourceDiskName; }
    inline bool SourceDiskNameHasBeenSet() const { return m_sourceDiskNameHasBeenSet; }
    inline void SetSourceDiskName(const Aws::String& value) { m_sourceDiskNameHasBeenSet = true; m_sourceDiskName = value; }
    inline void SetSourceDiskName(Aws::String&& value) { m_sourceDiskNameHasBeenSet = true; m_sourceDiskName = std::move(value); }
    inline void SetSourceDiskName(const char* value) { m_sourceDiskNameHasBeenSet = true; m_sourceDiskName.assign(value); }
    inline CreateDiskFromSnapshotRequest& WithSourceDiskName(const Aws::String& value) { SetSourceDiskName(value); return *this;}
    inline CreateDiskFromSnapshotRequest& WithSourceDiskName(Aws::String&& value) { SetSourceDiskName(std::move(value)); return *this;}
    inline CreateDiskFromSnapshotRequest& WithSourceDiskName(const char* value) { SetSourceDiskName(value); return *this;}
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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetRestoreDate() const{ return m_restoreDate; }
    inline bool RestoreDateHasBeenSet() const { return m_restoreDateHasBeenSet; }
    inline void SetRestoreDate(const Aws::String& value) { m_restoreDateHasBeenSet = true; m_restoreDate = value; }
    inline void SetRestoreDate(Aws::String&& value) { m_restoreDateHasBeenSet = true; m_restoreDate = std::move(value); }
    inline void SetRestoreDate(const char* value) { m_restoreDateHasBeenSet = true; m_restoreDate.assign(value); }
    inline CreateDiskFromSnapshotRequest& WithRestoreDate(const Aws::String& value) { SetRestoreDate(value); return *this;}
    inline CreateDiskFromSnapshotRequest& WithRestoreDate(Aws::String&& value) { SetRestoreDate(std::move(value)); return *this;}
    inline CreateDiskFromSnapshotRequest& WithRestoreDate(const char* value) { SetRestoreDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>This parameter cannot be defined
     * together with the <code>restore date</code> parameter. The <code>use latest
     * restorable auto snapshot</code> and <code>restore date</code> parameters are
     * mutually exclusive.</p> </li> <li> <p>Define this parameter only when creating a
     * new disk from an automatic snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableAutoSnapshot() const{ return m_useLatestRestorableAutoSnapshot; }
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

    int m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AddOnRequest> m_addOns;
    bool m_addOnsHasBeenSet = false;

    Aws::String m_sourceDiskName;
    bool m_sourceDiskNameHasBeenSet = false;

    Aws::String m_restoreDate;
    bool m_restoreDateHasBeenSet = false;

    bool m_useLatestRestorableAutoSnapshot;
    bool m_useLatestRestorableAutoSnapshotHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
