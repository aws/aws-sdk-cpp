/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/ReplicationConfigurationReplicatedDiskStagingDiskType.h>
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
   * <p>The configuration of a disk of the Source Server to be
   * replicated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ReplicationConfigurationReplicatedDisk">AWS
   * API Reference</a></p>
   */
  class ReplicationConfigurationReplicatedDisk
  {
  public:
    AWS_DRS_API ReplicationConfigurationReplicatedDisk() = default;
    AWS_DRS_API ReplicationConfigurationReplicatedDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ReplicationConfigurationReplicatedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    ReplicationConfigurationReplicatedDisk& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested number of I/O operations per second (IOPS).</p>
     */
    inline long long GetIops() const { return m_iops; }
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }
    inline void SetIops(long long value) { m_iopsHasBeenSet = true; m_iops = value; }
    inline ReplicationConfigurationReplicatedDisk& WithIops(long long value) { SetIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to boot from this disk or not.</p>
     */
    inline bool GetIsBootDisk() const { return m_isBootDisk; }
    inline bool IsBootDiskHasBeenSet() const { return m_isBootDiskHasBeenSet; }
    inline void SetIsBootDisk(bool value) { m_isBootDiskHasBeenSet = true; m_isBootDisk = value; }
    inline ReplicationConfigurationReplicatedDisk& WithIsBootDisk(bool value) { SetIsBootDisk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Staging Disk EBS volume type to be used during replication when
     * <code>stagingDiskType</code> is set to Auto. This is a read-only field.</p>
     */
    inline ReplicationConfigurationReplicatedDiskStagingDiskType GetOptimizedStagingDiskType() const { return m_optimizedStagingDiskType; }
    inline bool OptimizedStagingDiskTypeHasBeenSet() const { return m_optimizedStagingDiskTypeHasBeenSet; }
    inline void SetOptimizedStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType value) { m_optimizedStagingDiskTypeHasBeenSet = true; m_optimizedStagingDiskType = value; }
    inline ReplicationConfigurationReplicatedDisk& WithOptimizedStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType value) { SetOptimizedStagingDiskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline ReplicationConfigurationReplicatedDiskStagingDiskType GetStagingDiskType() const { return m_stagingDiskType; }
    inline bool StagingDiskTypeHasBeenSet() const { return m_stagingDiskTypeHasBeenSet; }
    inline void SetStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType value) { m_stagingDiskTypeHasBeenSet = true; m_stagingDiskType = value; }
    inline ReplicationConfigurationReplicatedDisk& WithStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType value) { SetStagingDiskType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput to use for the EBS volume in MiB/s. This parameter is valid
     * only for gp3 volumes.</p>
     */
    inline long long GetThroughput() const { return m_throughput; }
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }
    inline void SetThroughput(long long value) { m_throughputHasBeenSet = true; m_throughput = value; }
    inline ReplicationConfigurationReplicatedDisk& WithThroughput(long long value) { SetThroughput(value); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    long long m_iops{0};
    bool m_iopsHasBeenSet = false;

    bool m_isBootDisk{false};
    bool m_isBootDiskHasBeenSet = false;

    ReplicationConfigurationReplicatedDiskStagingDiskType m_optimizedStagingDiskType{ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET};
    bool m_optimizedStagingDiskTypeHasBeenSet = false;

    ReplicationConfigurationReplicatedDiskStagingDiskType m_stagingDiskType{ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET};
    bool m_stagingDiskTypeHasBeenSet = false;

    long long m_throughput{0};
    bool m_throughputHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
