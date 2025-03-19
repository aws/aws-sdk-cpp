/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/VolumeStatus.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A disk that should be replicated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DataReplicationInfoReplicatedDisk">AWS
   * API Reference</a></p>
   */
  class DataReplicationInfoReplicatedDisk
  {
  public:
    AWS_DRS_API DataReplicationInfoReplicatedDisk() = default;
    AWS_DRS_API DataReplicationInfoReplicatedDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DataReplicationInfoReplicatedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of the replication backlog in bytes.</p>
     */
    inline long long GetBackloggedStorageBytes() const { return m_backloggedStorageBytes; }
    inline bool BackloggedStorageBytesHasBeenSet() const { return m_backloggedStorageBytesHasBeenSet; }
    inline void SetBackloggedStorageBytes(long long value) { m_backloggedStorageBytesHasBeenSet = true; m_backloggedStorageBytes = value; }
    inline DataReplicationInfoReplicatedDisk& WithBackloggedStorageBytes(long long value) { SetBackloggedStorageBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    DataReplicationInfoReplicatedDisk& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of data replicated so far in bytes.</p>
     */
    inline long long GetReplicatedStorageBytes() const { return m_replicatedStorageBytes; }
    inline bool ReplicatedStorageBytesHasBeenSet() const { return m_replicatedStorageBytesHasBeenSet; }
    inline void SetReplicatedStorageBytes(long long value) { m_replicatedStorageBytesHasBeenSet = true; m_replicatedStorageBytes = value; }
    inline DataReplicationInfoReplicatedDisk& WithReplicatedStorageBytes(long long value) { SetReplicatedStorageBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of data to be rescanned in bytes.</p>
     */
    inline long long GetRescannedStorageBytes() const { return m_rescannedStorageBytes; }
    inline bool RescannedStorageBytesHasBeenSet() const { return m_rescannedStorageBytesHasBeenSet; }
    inline void SetRescannedStorageBytes(long long value) { m_rescannedStorageBytesHasBeenSet = true; m_rescannedStorageBytes = value; }
    inline DataReplicationInfoReplicatedDisk& WithRescannedStorageBytes(long long value) { SetRescannedStorageBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of data to be replicated in bytes.</p>
     */
    inline long long GetTotalStorageBytes() const { return m_totalStorageBytes; }
    inline bool TotalStorageBytesHasBeenSet() const { return m_totalStorageBytesHasBeenSet; }
    inline void SetTotalStorageBytes(long long value) { m_totalStorageBytesHasBeenSet = true; m_totalStorageBytes = value; }
    inline DataReplicationInfoReplicatedDisk& WithTotalStorageBytes(long long value) { SetTotalStorageBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the volume.</p>
     */
    inline VolumeStatus GetVolumeStatus() const { return m_volumeStatus; }
    inline bool VolumeStatusHasBeenSet() const { return m_volumeStatusHasBeenSet; }
    inline void SetVolumeStatus(VolumeStatus value) { m_volumeStatusHasBeenSet = true; m_volumeStatus = value; }
    inline DataReplicationInfoReplicatedDisk& WithVolumeStatus(VolumeStatus value) { SetVolumeStatus(value); return *this;}
    ///@}
  private:

    long long m_backloggedStorageBytes{0};
    bool m_backloggedStorageBytesHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    long long m_replicatedStorageBytes{0};
    bool m_replicatedStorageBytesHasBeenSet = false;

    long long m_rescannedStorageBytes{0};
    bool m_rescannedStorageBytesHasBeenSet = false;

    long long m_totalStorageBytes{0};
    bool m_totalStorageBytesHasBeenSet = false;

    VolumeStatus m_volumeStatus{VolumeStatus::NOT_SET};
    bool m_volumeStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
