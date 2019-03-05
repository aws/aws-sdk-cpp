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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_STORAGEGATEWAY_API CreateSnapshotFromVolumeRecoveryPointResult
  {
  public:
    CreateSnapshotFromVolumeRecoveryPointResult();
    CreateSnapshotFromVolumeRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSnapshotFromVolumeRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the iSCSI volume target. Use the
     * <a>DescribeStorediSCSIVolumes</a> operation to return to retrieve the TargetARN
     * for specified VolumeARN.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}


    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline const Aws::String& GetVolumeRecoveryPointTime() const{ return m_volumeRecoveryPointTime; }

    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline void SetVolumeRecoveryPointTime(const Aws::String& value) { m_volumeRecoveryPointTime = value; }

    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline void SetVolumeRecoveryPointTime(Aws::String&& value) { m_volumeRecoveryPointTime = std::move(value); }

    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline void SetVolumeRecoveryPointTime(const char* value) { m_volumeRecoveryPointTime.assign(value); }

    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(const Aws::String& value) { SetVolumeRecoveryPointTime(value); return *this;}

    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(Aws::String&& value) { SetVolumeRecoveryPointTime(std::move(value)); return *this;}

    /**
     * <p>The time the volume was created from the recovery point.</p>
     */
    inline CreateSnapshotFromVolumeRecoveryPointResult& WithVolumeRecoveryPointTime(const char* value) { SetVolumeRecoveryPointTime(value); return *this;}

  private:

    Aws::String m_snapshotId;

    Aws::String m_volumeARN;

    Aws::String m_volumeRecoveryPointTime;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
