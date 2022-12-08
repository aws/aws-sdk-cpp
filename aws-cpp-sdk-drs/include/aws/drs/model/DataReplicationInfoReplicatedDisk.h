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
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/DataReplicationInfoReplicatedDisk">AWS
   * API Reference</a></p>
   */
  class DataReplicationInfoReplicatedDisk
  {
  public:
    AWS_DRS_API DataReplicationInfoReplicatedDisk();
    AWS_DRS_API DataReplicationInfoReplicatedDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API DataReplicationInfoReplicatedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the replication backlog in bytes.</p>
     */
    inline long long GetBackloggedStorageBytes() const{ return m_backloggedStorageBytes; }

    /**
     * <p>The size of the replication backlog in bytes.</p>
     */
    inline bool BackloggedStorageBytesHasBeenSet() const { return m_backloggedStorageBytesHasBeenSet; }

    /**
     * <p>The size of the replication backlog in bytes.</p>
     */
    inline void SetBackloggedStorageBytes(long long value) { m_backloggedStorageBytesHasBeenSet = true; m_backloggedStorageBytes = value; }

    /**
     * <p>The size of the replication backlog in bytes.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithBackloggedStorageBytes(long long value) { SetBackloggedStorageBytes(value); return *this;}


    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The name of the device.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The name of the device.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The name of the device.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The name of the device.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The name of the device.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of the device.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of the device.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The amount of data replicated so far in bytes.</p>
     */
    inline long long GetReplicatedStorageBytes() const{ return m_replicatedStorageBytes; }

    /**
     * <p>The amount of data replicated so far in bytes.</p>
     */
    inline bool ReplicatedStorageBytesHasBeenSet() const { return m_replicatedStorageBytesHasBeenSet; }

    /**
     * <p>The amount of data replicated so far in bytes.</p>
     */
    inline void SetReplicatedStorageBytes(long long value) { m_replicatedStorageBytesHasBeenSet = true; m_replicatedStorageBytes = value; }

    /**
     * <p>The amount of data replicated so far in bytes.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithReplicatedStorageBytes(long long value) { SetReplicatedStorageBytes(value); return *this;}


    /**
     * <p>The amount of data to be rescanned in bytes.</p>
     */
    inline long long GetRescannedStorageBytes() const{ return m_rescannedStorageBytes; }

    /**
     * <p>The amount of data to be rescanned in bytes.</p>
     */
    inline bool RescannedStorageBytesHasBeenSet() const { return m_rescannedStorageBytesHasBeenSet; }

    /**
     * <p>The amount of data to be rescanned in bytes.</p>
     */
    inline void SetRescannedStorageBytes(long long value) { m_rescannedStorageBytesHasBeenSet = true; m_rescannedStorageBytes = value; }

    /**
     * <p>The amount of data to be rescanned in bytes.</p>
     */
    inline DataReplicationInfoReplicatedDisk& WithRescannedStorageBytes(long long value) { SetRescannedStorageBytes(value); return *this;}


    /**
     * <p>The total amount of data to be replicated in bytes.</p>
     */
    inline long long GetTotalStorageBytes() const{ return m_totalStorageBytes; }

    /**
     * <p>The total amount of data to be replicated in bytes.</p>
     */
    inline bool TotalStorageBytesHasBeenSet() const { return m_totalStorageBytesHasBeenSet; }

    /**
     * <p>The total amount of data to be replicated in bytes.</p>
     */
    inline void SetTotalStorageBytes(long long value) { m_totalStorageBytesHasBeenSet = true; m_totalStorageBytes = value; }

    /**
     * <p>The total amount of data to be replicated in bytes.</p>
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
} // namespace drs
} // namespace Aws
