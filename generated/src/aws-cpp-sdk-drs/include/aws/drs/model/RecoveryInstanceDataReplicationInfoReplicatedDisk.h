/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>A disk that should be replicated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceDataReplicationInfoReplicatedDisk">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceDataReplicationInfoReplicatedDisk
  {
  public:
    AWS_DRS_API RecoveryInstanceDataReplicationInfoReplicatedDisk();
    AWS_DRS_API RecoveryInstanceDataReplicationInfoReplicatedDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDataReplicationInfoReplicatedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of the replication backlog in bytes.</p>
     */
    inline long long GetBackloggedStorageBytes() const{ return m_backloggedStorageBytes; }
    inline bool BackloggedStorageBytesHasBeenSet() const { return m_backloggedStorageBytesHasBeenSet; }
    inline void SetBackloggedStorageBytes(long long value) { m_backloggedStorageBytesHasBeenSet = true; m_backloggedStorageBytes = value; }
    inline RecoveryInstanceDataReplicationInfoReplicatedDisk& WithBackloggedStorageBytes(long long value) { SetBackloggedStorageBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline RecoveryInstanceDataReplicationInfoReplicatedDisk& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline RecoveryInstanceDataReplicationInfoReplicatedDisk& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline RecoveryInstanceDataReplicationInfoReplicatedDisk& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of data replicated so far in bytes.</p>
     */
    inline long long GetReplicatedStorageBytes() const{ return m_replicatedStorageBytes; }
    inline bool ReplicatedStorageBytesHasBeenSet() const { return m_replicatedStorageBytesHasBeenSet; }
    inline void SetReplicatedStorageBytes(long long value) { m_replicatedStorageBytesHasBeenSet = true; m_replicatedStorageBytes = value; }
    inline RecoveryInstanceDataReplicationInfoReplicatedDisk& WithReplicatedStorageBytes(long long value) { SetReplicatedStorageBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of data to be rescanned in bytes.</p>
     */
    inline long long GetRescannedStorageBytes() const{ return m_rescannedStorageBytes; }
    inline bool RescannedStorageBytesHasBeenSet() const { return m_rescannedStorageBytesHasBeenSet; }
    inline void SetRescannedStorageBytes(long long value) { m_rescannedStorageBytesHasBeenSet = true; m_rescannedStorageBytes = value; }
    inline RecoveryInstanceDataReplicationInfoReplicatedDisk& WithRescannedStorageBytes(long long value) { SetRescannedStorageBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total amount of data to be replicated in bytes.</p>
     */
    inline long long GetTotalStorageBytes() const{ return m_totalStorageBytes; }
    inline bool TotalStorageBytesHasBeenSet() const { return m_totalStorageBytesHasBeenSet; }
    inline void SetTotalStorageBytes(long long value) { m_totalStorageBytesHasBeenSet = true; m_totalStorageBytes = value; }
    inline RecoveryInstanceDataReplicationInfoReplicatedDisk& WithTotalStorageBytes(long long value) { SetTotalStorageBytes(value); return *this;}
    ///@}
  private:

    long long m_backloggedStorageBytes;
    bool m_backloggedStorageBytesHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    long long m_replicatedStorageBytes;
    bool m_replicatedStorageBytesHasBeenSet = false;

    long long m_rescannedStorageBytes;
    bool m_rescannedStorageBytesHasBeenSet = false;

    long long m_totalStorageBytes;
    bool m_totalStorageBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
