﻿/*
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
   * <p>Describes an iSCSI cached volume.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CachediSCSIVolume">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API CachediSCSIVolume
  {
  public:
    CachediSCSIVolume();
    CachediSCSIVolume(Aws::Utils::Json::JsonView jsonValue);
    CachediSCSIVolume& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

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
    inline CachediSCSIVolume& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

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
    inline CachediSCSIVolume& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline CachediSCSIVolume& WithVolumeId(Aws::String&& value) { SetVolumeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the volume, e.g. vol-AE4B946D.</p>
     */
    inline CachediSCSIVolume& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}


    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = std::move(value); }

    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeType(Aws::String&& value) { SetVolumeType(std::move(value)); return *this;}

    /**
     * <p>One of the VolumeType enumeration values that describes the type of the
     * volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}


    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline const Aws::String& GetVolumeStatus() const{ return m_volumeStatus; }

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
    inline CachediSCSIVolume& WithVolumeStatus(const Aws::String& value) { SetVolumeStatus(value); return *this;}

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeStatus(Aws::String&& value) { SetVolumeStatus(std::move(value)); return *this;}

    /**
     * <p>One of the VolumeStatus values that indicates the state of the storage
     * volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeStatus(const char* value) { SetVolumeStatus(value); return *this;}


    /**
     * <p>The size, in bytes, of the volume capacity.</p>
     */
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the volume capacity.</p>
     */
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the volume capacity.</p>
     */
    inline CachediSCSIVolume& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}


    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the cached volume is not restoring or
     * bootstrapping.</p>
     */
    inline double GetVolumeProgress() const{ return m_volumeProgress; }

    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the cached volume is not restoring or
     * bootstrapping.</p>
     */
    inline void SetVolumeProgress(double value) { m_volumeProgressHasBeenSet = true; m_volumeProgress = value; }

    /**
     * <p>Represents the percentage complete if the volume is restoring or
     * bootstrapping that represents the percent of data transferred. This field does
     * not appear in the response if the cached volume is not restoring or
     * bootstrapping.</p>
     */
    inline CachediSCSIVolume& WithVolumeProgress(double value) { SetVolumeProgress(value); return *this;}


    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }

    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }

    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = std::move(value); }

    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline void SetSourceSnapshotId(const char* value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId.assign(value); }

    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline CachediSCSIVolume& WithSourceSnapshotId(const Aws::String& value) { SetSourceSnapshotId(value); return *this;}

    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline CachediSCSIVolume& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(std::move(value)); return *this;}

    /**
     * <p>If the cached volume was created from a snapshot, this field contains the
     * snapshot ID used, e.g. snap-78e22663. Otherwise, this field is not included.</p>
     */
    inline CachediSCSIVolume& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}


    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline const VolumeiSCSIAttributes& GetVolumeiSCSIAttributes() const{ return m_volumeiSCSIAttributes; }

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
    inline CachediSCSIVolume& WithVolumeiSCSIAttributes(const VolumeiSCSIAttributes& value) { SetVolumeiSCSIAttributes(value); return *this;}

    /**
     * <p>An <a>VolumeiSCSIAttributes</a> object that represents a collection of iSCSI
     * attributes for one stored volume.</p>
     */
    inline CachediSCSIVolume& WithVolumeiSCSIAttributes(VolumeiSCSIAttributes&& value) { SetVolumeiSCSIAttributes(std::move(value)); return *this;}


    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

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
    inline CachediSCSIVolume& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the volume was created. Volumes created prior to March 28, 2017
     * don’t have this time stamp.</p>
     */
    inline CachediSCSIVolume& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The size of the data stored on the volume in bytes.</p> <note> <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> </note>
     */
    inline long long GetVolumeUsedInBytes() const{ return m_volumeUsedInBytes; }

    /**
     * <p>The size of the data stored on the volume in bytes.</p> <note> <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> </note>
     */
    inline void SetVolumeUsedInBytes(long long value) { m_volumeUsedInBytesHasBeenSet = true; m_volumeUsedInBytes = value; }

    /**
     * <p>The size of the data stored on the volume in bytes.</p> <note> <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> </note>
     */
    inline CachediSCSIVolume& WithVolumeUsedInBytes(long long value) { SetVolumeUsedInBytes(value); return *this;}


    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    
    inline CachediSCSIVolume& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    
    inline CachediSCSIVolume& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    
    inline CachediSCSIVolume& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}

  private:

    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;

    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;

    Aws::String m_volumeStatus;
    bool m_volumeStatusHasBeenSet;

    long long m_volumeSizeInBytes;
    bool m_volumeSizeInBytesHasBeenSet;

    double m_volumeProgress;
    bool m_volumeProgressHasBeenSet;

    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet;

    VolumeiSCSIAttributes m_volumeiSCSIAttributes;
    bool m_volumeiSCSIAttributesHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    long long m_volumeUsedInBytes;
    bool m_volumeUsedInBytesHasBeenSet;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
