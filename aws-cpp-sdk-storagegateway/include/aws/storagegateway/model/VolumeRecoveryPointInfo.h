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
   * <p>Describes a storage volume recovery point object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/VolumeRecoveryPointInfo">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API VolumeRecoveryPointInfo
  {
  public:
    VolumeRecoveryPointInfo();
    VolumeRecoveryPointInfo(Aws::Utils::Json::JsonView jsonValue);
    VolumeRecoveryPointInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline bool VolumeARNHasBeenSet() const { return m_volumeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline VolumeRecoveryPointInfo& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline VolumeRecoveryPointInfo& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the volume target.</p>
     */
    inline VolumeRecoveryPointInfo& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


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
    inline VolumeRecoveryPointInfo& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}


    /**
     * <p>The size of the data stored on the volume in bytes.</p> <note> <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> </note>
     */
    inline long long GetVolumeUsageInBytes() const{ return m_volumeUsageInBytes; }

    /**
     * <p>The size of the data stored on the volume in bytes.</p> <note> <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> </note>
     */
    inline bool VolumeUsageInBytesHasBeenSet() const { return m_volumeUsageInBytesHasBeenSet; }

    /**
     * <p>The size of the data stored on the volume in bytes.</p> <note> <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> </note>
     */
    inline void SetVolumeUsageInBytes(long long value) { m_volumeUsageInBytesHasBeenSet = true; m_volumeUsageInBytes = value; }

    /**
     * <p>The size of the data stored on the volume in bytes.</p> <note> <p>This value
     * is not available for volumes created prior to May 13, 2015, until you store data
     * on the volume.</p> </note>
     */
    inline VolumeRecoveryPointInfo& WithVolumeUsageInBytes(long long value) { SetVolumeUsageInBytes(value); return *this;}


    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline const Aws::String& GetVolumeRecoveryPointTime() const{ return m_volumeRecoveryPointTime; }

    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline bool VolumeRecoveryPointTimeHasBeenSet() const { return m_volumeRecoveryPointTimeHasBeenSet; }

    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline void SetVolumeRecoveryPointTime(const Aws::String& value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime = value; }

    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline void SetVolumeRecoveryPointTime(Aws::String&& value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime = std::move(value); }

    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline void SetVolumeRecoveryPointTime(const char* value) { m_volumeRecoveryPointTimeHasBeenSet = true; m_volumeRecoveryPointTime.assign(value); }

    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(const Aws::String& value) { SetVolumeRecoveryPointTime(value); return *this;}

    /**
     * <p>The time the recovery point was taken.</p>
     */
    inline VolumeRecoveryPointInfo& WithVolumeRecoveryPointTime(Aws::String&& value) { SetVolumeRecoveryPointTime(std::move(value)); return *this;}

    /**
     * <p>The time the recovery point was taken.</p>
     */
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
