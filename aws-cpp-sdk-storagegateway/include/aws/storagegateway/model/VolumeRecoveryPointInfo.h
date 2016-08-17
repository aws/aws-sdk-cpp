/*
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

  class AWS_STORAGEGATEWAY_API VolumeRecoveryPointInfo
  {
  public:
    VolumeRecoveryPointInfo();
    VolumeRecoveryPointInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    VolumeRecoveryPointInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    
    inline VolumeRecoveryPointInfo& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    
    inline VolumeRecoveryPointInfo& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    
    inline VolumeRecoveryPointInfo& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }

    
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }

    
    inline VolumeRecoveryPointInfo& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}

    
    inline long long GetVolumeUsageInBytes() const{ return m_volumeUsageInBytes; }

    
    inline void SetVolumeUsageInBytes(long long value) { m_volumeUsageInBytesHasBeenSet = true; m_volumeUsageInBytes = value; }

    
    inline VolumeRecoveryPointInfo& WithVolumeUsageInBytes(long long value) { SetVolumeUsageInBytes(value); return *this;}

    
    inline const Aws::String& GetVolumeRecoveryPointTime() const{ return m_volumeRecoveryPointTime; }

    
    inline void SetVolumeRecoveryPointTime(const Aws::String& value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime = value; }

    
    inline void SetVolumeRecoveryPointTime(Aws::String&& value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime = value; }

    
    inline void SetVolumeRecoveryPointTime(const char* value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime.assign(value); }

    
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(const Aws::String& value) { SetVolumeRecoveryPointTime(value); return *this;}

    
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(Aws::String&& value) { SetVolumeRecoveryPointTime(value); return *this;}

    
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(const char* value) { SetVolumeRecoveryPointTime(value); return *this;}

  private:
    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;
    long long m_volumeSizeInBytes;
    bool m_volumeSizeInBytesHasBeenSet;
    long long m_volumeUsageInBytes;
    bool m_volumeUsageInBytesHasBeenSet;
    Aws::String m_volumeRecoveryPointTime;
    bool m_volumeRecoveryPointTimeHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
