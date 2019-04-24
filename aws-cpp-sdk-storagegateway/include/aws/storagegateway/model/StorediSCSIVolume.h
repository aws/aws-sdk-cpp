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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/VolumeiSCSIAttributes.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes an iSCSI stored volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/StorediSCSIVolume">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API StorediSCSIVolume
  {
  public:
    StorediSCSIVolume();
    StorediSCSIVolume(Aws::Utils::Json::JsonView jsonValue);
    StorediSCSIVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::move(value); }

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline StorediSCSIVolume& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline StorediSCSIVolume& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline StorediSCSIVolume& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline bool VolumeTypeHasBeenSet() const { return m_volumeTypeHasBeenSet; }

    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>One of the VolumeType enumeration values describing the type of the
     * volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline const Aws::String& GetVolumeStatus() const{ return m_volumeStatus; }

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline bool VolumeStatusHasBeenSet() const { return m_volumeStatusHasBeenSet; }

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline void SetVolumeStatus(const Aws::String& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = value; }

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline void SetVolumeStatus(Aws::String&& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = std::move(value); }

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline void SetVolumeStatus(const char* value) { m_volumeStatusHasBeenSet = true; m_volumeStatus.assign(value); }

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeStatus(const Aws::String& value) { SetVolumeStatus(value); return *this;}

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeStatus(Aws::String&& value) { SetVolumeStatus(std::move(value)); return *this;}

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeStatus(const char* value) { SetVolumeStatus(value); return *this;}


    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline const Aws::String& GetVolumeAttachmentStatus() const{ return m_volumeAttachmentStatus; }

    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline bool VolumeAttachmentStatusHasBeenSet() const { return m_volumeAttachmentStatusHasBeenSet; }

    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline void SetVolumeAttachmentStatus(const Aws::String& value) { m_volumeAttachmentStatusHasBeenSet = true; m_volumeAttachmentStatus = value; }

    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline void SetVolumeAttachmentStatus(Aws::String&& value) { m_volumeAttachmentStatusHasBeenSet = true; m_volumeAttachmentStatus = std::move(value); }

    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline void SetVolumeAttachmentStatus(const char* value) { m_volumeAttachmentStatusHasBeenSet = true; m_volumeAttachmentStatus.assign(value); }

    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline StorediSCSIVolume& WithVolumeAttachmentStatus(const Aws::String& value) { SetVolumeAttachmentStatus(value); return *this;}

    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline StorediSCSIVolume& WithVolumeAttachmentStatus(Aws::String&& value) { SetVolumeAttachmentStatus(std::move(value)); return *this;}

    /**
     * <p>A value that indicates whether a storage volume is attached to, detached
     * from, or is in the process of detaching from a gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/managing-volumes.html#attach-detach-volume">Moving
     * Your Volumes to a Different Gateway</a>.</p>
     */
    inline StorediSCSIVolume& WithVolumeAttachmentStatus(const char* value) { SetVolumeAttachmentStatus(value); return *this;}


    /**
     * <p>The size of the volume in bytes.</p>
     */
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }

    /**
     * <p>The size of the volume in bytes.</p>
     */
    inline bool VolumeSizeInBytesHasBeenSet() const { return m_volumeSizeInBytesHasBeenSet; }

    /**
     * <p>The size of the volume in bytes.</p>
     */
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }

    /**
     * <p>The size of the volume in bytes.</p>
     */
    inline StorediSCSIVolume& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}


    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the stored volume is not restoring or
     * bootstrapping.</p>
     */
    inline double GetVolumeProgress() const{ return m_volumeProgress; }

    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the stored volume is not restoring or
     * bootstrapping.</p>
     */
    inline bool VolumeProgressHasBeenSet() const { return m_volumeProgressHasBeenSet; }

    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the stored volume is not restoring or
     * bootstrapping.</p>
     */
    inline void SetVolumeProgress(double value) { m_volumeProgressHasBeenSet = true; m_volumeProgress = value; }

    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the stored volume is not restoring or
     * bootstrapping.</p>
     */
    inline StorediSCSIVolume& WithVolumeProgress(double value) { SetVolumeProgress(value); return *this;}


    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline const Aws::String& GetVolumeDiskId() const{ return m_volumeDiskId; }

    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline bool VolumeDiskIdHasBeenSet() const { return m_volumeDiskIdHasBeenSet; }

    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline void SetVolumeDiskId(const Aws::String& value) { m_volumeDiskIdHasBeenSet = true; m_volumeDiskId = value; }

    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline void SetVolumeDiskId(Aws::String&& value) { m_volumeDiskIdHasBeenSet = true; m_volumeDiskId = std::move(value); }

    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline void SetVolumeDiskId(const char* value) { m_volumeDiskIdHasBeenSet = true; m_volumeDiskId.assign(value); }

    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline StorediSCSIVolume& WithVolumeDiskId(const Aws::String& value) { SetVolumeDiskId(value); return *this;}

    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline StorediSCSIVolume& WithVolumeDiskId(Aws::String&& value) { SetVolumeDiskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the local disk that was specified in the
     * <a>CreateStorediSCSIVolume</a> operation.</p>
     */
    inline StorediSCSIVolume& WithVolumeDiskId(const char* value) { SetVolumeDiskId(value); return *this;}


    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }

    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline bool SourceSnapshotIdHasBeenSet() const { return m_sourceSnapshotIdHasBeenSet; }

    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }

    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = std::move(value); }

    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline void SetSourceSnapshotId(const char* value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId.assign(value); }

    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline StorediSCSIVolume& WithSourceSnapshotId(const Aws::String& value) { SetSourceSnapshotId(value); return *this;}

    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline StorediSCSIVolume& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(std::move(value)); return *this;}

    /**
     * <p>If the stored volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline StorediSCSIVolume& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}


    /**
     * <p>Indicates if when the stored volume was created, existing data on the
     * underlying local disk was preserved.</p> <p> Valid Values: true, false</p>
     */
    inline bool GetPreservedExistingData() const{ return m_preservedExistingData; }

    /**
     * <p>Indicates if when the stored volume was created, existing data on the
     * underlying local disk was preserved.</p> <p> Valid Values: true, false</p>
     */
    inline bool PreservedExistingDataHasBeenSet() const { return m_preservedExistingDataHasBeenSet; }

    /**
     * <p>Indicates if when the stored volume was created, existing data on the
     * underlying local disk was preserved.</p> <p> Valid Values: true, false</p>
     */
    inline void SetPreservedExistingData(bool value) { m_preservedExistingDataHasBeenSet = true; m_preservedExistingData = value; }

    /**
     * <p>Indicates if when the stored volume was created, existing data on the
     * underlying local disk was preserved.</p> <p> Valid Values: true, false</p>
     */
    inline StorediSCSIVolume& WithPreservedExistingData(bool value) { SetPreservedExistingData(value); return *this;}


    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline const VolumeiSCSIAttributes& GetVolumeiSCSIAttributes() const{ return m_volumeiSCSIAttributes; }

    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline bool VolumeiSCSIAttributesHasBeenSet() const { return m_volumeiSCSIAttributesHasBeenSet; }

    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline void SetVolumeiSCSIAttributes(const VolumeiSCSIAttributes& value) { m_volumeiSCSIAttributesHasBeenSet = true; m_volumeiSCSIAttributes = value; }

    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline void SetVolumeiSCSIAttributes(VolumeiSCSIAttributes&& value) { m_volumeiSCSIAttributesHasBeenSet = true; m_volumeiSCSIAttributes = std::move(value); }

    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeiSCSIAttributes(const VolumeiSCSIAttributes& value) { SetVolumeiSCSIAttributes(value); return *this;}

    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline StorediSCSIVolume& WithVolumeiSCSIAttributes(VolumeiSCSIAttributes&& value) { SetVolumeiSCSIAttributes(std::move(value)); return *this;}


    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline StorediSCSIVolume& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline StorediSCSIVolume& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The size of the data stored on the volume in bytes. This value is calculated
     * based on the number of blocks that are touched, instead of the actual amount of
     * data written. This value can be useful for sequential write patterns but less
     * accurate for random write patterns. <code>VolumeUsedInBytes</code> is different
     * from the compressed size of the volume, which is the value that is used to
     * calculate your bill.</p> <note> <p>This value is not available for volumes
     * created prior to May 13, 2015, until you store data on the volume.</p> </note>
     */
    inline long long GetVolumeUsedInBytes() const{ return m_volumeUsedInBytes; }

    /**
     * <p>The size of the data stored on the volume in bytes. This value is calculated
     * based on the number of blocks that are touched, instead of the actual amount of
     * data written. This value can be useful for sequential write patterns but less
     * accurate for random write patterns. <code>VolumeUsedInBytes</code> is different
     * from the compressed size of the volume, which is the value that is used to
     * calculate your bill.</p> <note> <p>This value is not available for volumes
     * created prior to May 13, 2015, until you store data on the volume.</p> </note>
     */
    inline bool VolumeUsedInBytesHasBeenSet() const { return m_volumeUsedInBytesHasBeenSet; }

    /**
     * <p>The size of the data stored on the volume in bytes. This value is calculated
     * based on the number of blocks that are touched, instead of the actual amount of
     * data written. This value can be useful for sequential write patterns but less
     * accurate for random write patterns. <code>VolumeUsedInBytes</code> is different
     * from the compressed size of the volume, which is the value that is used to
     * calculate your bill.</p> <note> <p>This value is not available for volumes
     * created prior to May 13, 2015, until you store data on the volume.</p> </note>
     */
    inline void SetVolumeUsedInBytes(long long value) { m_volumeUsedInBytesHasBeenSet = true; m_volumeUsedInBytes = value; }

    /**
     * <p>The size of the data stored on the volume in bytes. This value is calculated
     * based on the number of blocks that are touched, instead of the actual amount of
     * data written. This value can be useful for sequential write patterns but less
     * accurate for random write patterns. <code>VolumeUsedInBytes</code> is different
     * from the compressed size of the volume, which is the value that is used to
     * calculate your bill.</p> <note> <p>This value is not available for volumes
     * created prior to May 13, 2015, until you store data on the volume.</p> </note>
     */
    inline StorediSCSIVolume& WithVolumeUsedInBytes(long long value) { SetVolumeUsedInBytes(value); return *this;}


    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    
    inline StorediSCSIVolume& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    
    inline StorediSCSIVolume& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    
    inline StorediSCSIVolume& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline const Aws::String& GetTargetName() const{ return m_targetName; }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline void SetTargetName(const Aws::String& value) { m_targetNameHasBeenSet = true; m_targetName = value; }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline void SetTargetName(Aws::String&& value) { m_targetNameHasBeenSet = true; m_targetName = std::move(value); }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline void SetTargetName(const char* value) { m_targetNameHasBeenSet = true; m_targetName.assign(value); }

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline StorediSCSIVolume& WithTargetName(const Aws::String& value) { SetTargetName(value); return *this;}

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline StorediSCSIVolume& WithTargetName(Aws::String&& value) { SetTargetName(std::move(value)); return *this;}

    /**
     * <p>The name of the iSCSI target used by an initiator to connect to a volume and
     * used as a suffix for the target ARN. For example, specifying
     * <code>TargetName</code> as <i>myvolume</i> results in the target ARN of
     * <code>arn:aws:storagegateway:us-east-2:111122223333:gateway/sgw-12A3456B/target/iqn.1997-05.com.amazon:myvolume</code>.
     * The target name must be unique across all volumes on a gateway.</p> <p>If you
     * don't specify a value, Storage Gateway uses the value that was previously used
     * for this volume as the new target name.</p>
     */
    inline StorediSCSIVolume& WithTargetName(const char* value) { SetTargetName(value); return *this;}

  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;

    Aws::String m_volumeStatus;
    bool m_volumeStatusHasBeenSet;

    Aws::String m_volumeAttachmentStatus;
    bool m_volumeAttachmentStatusHasBeenSet;

    long long m_volumeSizeInBytes;
    bool m_volumeSizeInBytesHasBeenSet;

    double m_volumeProgress;
    bool m_volumeProgressHasBeenSet;

    Aws::String m_volumeDiskId;
    bool m_volumeDiskIdHasBeenSet;

    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet;

    bool m_preservedExistingData;
    bool m_preservedExistingDataHasBeenSet;

    VolumeiSCSIAttributes m_volumeiSCSIAttributes;
    bool m_volumeiSCSIAttributesHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    long long m_volumeUsedInBytes;
    bool m_volumeUsedInBytesHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;

    Aws::String m_targetName;
    bool m_targetNameHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
