﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  class AWS_STORAGEGATEWAY_API StorediSCSIVolume
  {
  public:
    StorediSCSIVolume();
    StorediSCSIVolume(const Aws::Utils::Json::JsonValue& jsonValue);
    StorediSCSIVolume& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    
    inline StorediSCSIVolume& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    
    inline StorediSCSIVolume& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeId(Aws::String&& value) { SetVolumeId(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

    
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    
    inline StorediSCSIVolume& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeType(Aws::String&& value) { SetVolumeType(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

    
    inline const Aws::String& GetVolumeStatus() const{ return m_volumeStatus; }

    
    inline void SetVolumeStatus(const Aws::String& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = value; }

    
    inline void SetVolumeStatus(Aws::String&& value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = value; }

    
    inline void SetVolumeStatus(const char* value) { m_volumeStatusHasBeenSet = true; m_volumeStatus.assign(value); }

    
    inline StorediSCSIVolume& WithVolumeStatus(const Aws::String& value) { SetVolumeStatus(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeStatus(Aws::String&& value) { SetVolumeStatus(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeStatus(const char* value) { SetVolumeStatus(value); return *this;}

    
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }

    
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }

    
    inline StorediSCSIVolume& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}

    
    inline double GetVolumeProgress() const{ return m_volumeProgress; }

    
    inline void SetVolumeProgress(double value) { m_volumeProgressHasBeenSet = true; m_volumeProgress = value; }

    
    inline StorediSCSIVolume& WithVolumeProgress(double value) { SetVolumeProgress(value); return *this;}

    
    inline const Aws::String& GetVolumeDiskId() const{ return m_volumeDiskId; }

    
    inline void SetVolumeDiskId(const Aws::String& value) { m_volumeDiskIdHasBeenSet = true; m_volumeDiskId = value; }

    
    inline void SetVolumeDiskId(Aws::String&& value) { m_volumeDiskIdHasBeenSet = true; m_volumeDiskId = value; }

    
    inline void SetVolumeDiskId(const char* value) { m_volumeDiskIdHasBeenSet = true; m_volumeDiskId.assign(value); }

    
    inline StorediSCSIVolume& WithVolumeDiskId(const Aws::String& value) { SetVolumeDiskId(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeDiskId(Aws::String&& value) { SetVolumeDiskId(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeDiskId(const char* value) { SetVolumeDiskId(value); return *this;}

    
    inline const Aws::String& GetSourceSnapshotId() const{ return m_sourceSnapshotId; }

    
    inline void SetSourceSnapshotId(const Aws::String& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }

    
    inline void SetSourceSnapshotId(Aws::String&& value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId = value; }

    
    inline void SetSourceSnapshotId(const char* value) { m_sourceSnapshotIdHasBeenSet = true; m_sourceSnapshotId.assign(value); }

    
    inline StorediSCSIVolume& WithSourceSnapshotId(const Aws::String& value) { SetSourceSnapshotId(value); return *this;}

    
    inline StorediSCSIVolume& WithSourceSnapshotId(Aws::String&& value) { SetSourceSnapshotId(value); return *this;}

    
    inline StorediSCSIVolume& WithSourceSnapshotId(const char* value) { SetSourceSnapshotId(value); return *this;}

    
    inline bool GetPreservedExistingData() const{ return m_preservedExistingData; }

    
    inline void SetPreservedExistingData(bool value) { m_preservedExistingDataHasBeenSet = true; m_preservedExistingData = value; }

    
    inline StorediSCSIVolume& WithPreservedExistingData(bool value) { SetPreservedExistingData(value); return *this;}

    
    inline const VolumeiSCSIAttributes& GetVolumeiSCSIAttributes() const{ return m_volumeiSCSIAttributes; }

    
    inline void SetVolumeiSCSIAttributes(const VolumeiSCSIAttributes& value) { m_volumeiSCSIAttributesHasBeenSet = true; m_volumeiSCSIAttributes = value; }

    
    inline void SetVolumeiSCSIAttributes(VolumeiSCSIAttributes&& value) { m_volumeiSCSIAttributesHasBeenSet = true; m_volumeiSCSIAttributes = value; }

    
    inline StorediSCSIVolume& WithVolumeiSCSIAttributes(const VolumeiSCSIAttributes& value) { SetVolumeiSCSIAttributes(value); return *this;}

    
    inline StorediSCSIVolume& WithVolumeiSCSIAttributes(VolumeiSCSIAttributes&& value) { SetVolumeiSCSIAttributes(value); return *this;}

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
    Aws::String m_volumeDiskId;
    bool m_volumeDiskIdHasBeenSet;
    Aws::String m_sourceSnapshotId;
    bool m_sourceSnapshotIdHasBeenSet;
    bool m_preservedExistingData;
    bool m_preservedExistingDataHasBeenSet;
    VolumeiSCSIAttributes m_volumeiSCSIAttributes;
    bool m_volumeiSCSIAttributesHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
