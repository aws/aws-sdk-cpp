/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Request to query disks replicated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/DataReplicationInfoReplicatedDisk">AWS
   * API Reference</a></p>
   */
  class DataReplicationInfoReplicatedDisk
  {
  public:
    AWS_MGN_API DataReplicationInfoReplicatedDisk();
    AWS_MGN_API DataReplicationInfoReplicatedDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API DataReplicationInfoReplicatedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Request to query data replication backlog size in bytes.</p>
     */
    inline long long GetBackloggedStorageBytes() const{ return m_backloggedStorageBytes; }

    /**
     * <p>Request to query data replication backlog size in bytes.</p>
     */
    inline bool BackloggedStorageBytesHasBeenSet() const { return m_backloggedStorageBytesHasBeenSet; }

    /**
     * <p>Request to query data replication backlog size in bytes.</p>
     */
    inline void SetBackloggedStorageBytes(long long value) { m_backloggedStorageBytesHasBeenSet = true; m_backloggedStorageBytes = value; }

    /**
     * <p>Request to query data replication backlog size in bytes.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithBackloggedStorageBytes(long long value) { SetBackloggedStorageBytes(value); return *this;}


    /**
     * <p>Request to query device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>Request to query device name.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>Request to query device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>Request to query device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>Request to query device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>Request to query device name.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>Request to query device name.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>Request to query device name.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>Request to query amount of data replicated in bytes.</p>
     */
    inline long long GetReplicatedStorageBytes() const{ return m_replicatedStorageBytes; }

    /**
     * <p>Request to query amount of data replicated in bytes.</p>
     */
    inline bool ReplicatedStorageBytesHasBeenSet() const { return m_replicatedStorageBytesHasBeenSet; }

    /**
     * <p>Request to query amount of data replicated in bytes.</p>
     */
    inline void SetReplicatedStorageBytes(long long value) { m_replicatedStorageBytesHasBeenSet = true; m_replicatedStorageBytes = value; }

    /**
     * <p>Request to query amount of data replicated in bytes.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithReplicatedStorageBytes(long long value) { SetReplicatedStorageBytes(value); return *this;}


    /**
     * <p>Request to query amount of data rescanned in bytes.</p>
     */
    inline long long GetRescannedStorageBytes() const{ return m_rescannedStorageBytes; }

    /**
     * <p>Request to query amount of data rescanned in bytes.</p>
     */
    inline bool RescannedStorageBytesHasBeenSet() const { return m_rescannedStorageBytesHasBeenSet; }

    /**
     * <p>Request to query amount of data rescanned in bytes.</p>
     */
    inline void SetRescannedStorageBytes(long long value) { m_rescannedStorageBytesHasBeenSet = true; m_rescannedStorageBytes = value; }

    /**
     * <p>Request to query amount of data rescanned in bytes.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithRescannedStorageBytes(long long value) { SetRescannedStorageBytes(value); return *this;}


    /**
     * <p>Request to query total amount of data replicated in bytes.</p>
     */
    inline long long GetTotalStorageBytes() const{ return m_totalStorageBytes; }

    /**
     * <p>Request to query total amount of data replicated in bytes.</p>
     */
    inline bool TotalStorageBytesHasBeenSet() const { return m_totalStorageBytesHasBeenSet; }

    /**
     * <p>Request to query total amount of data replicated in bytes.</p>
     */
    inline void SetTotalStorageBytes(long long value) { m_totalStorageBytesHasBeenSet = true; m_totalStorageBytes = value; }

    /**
     * <p>Request to query total amount of data replicated in bytes.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithTotalStorageBytes(long long value) { SetTotalStorageBytes(value); return *this;}

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
} // namespace mgn
} // namespace Aws
