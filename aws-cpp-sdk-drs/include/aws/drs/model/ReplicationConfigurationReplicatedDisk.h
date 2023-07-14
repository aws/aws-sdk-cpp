﻿/**
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
  class AWS_DRS_API ReplicationConfigurationReplicatedDisk
  {
  public:
    ReplicationConfigurationReplicatedDisk();
    ReplicationConfigurationReplicatedDisk(Aws::Utils::Json::JsonView jsonValue);
    ReplicationConfigurationReplicatedDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The name of the device.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The name of the device.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}


    /**
     * <p>The requested number of I/O operations per second (IOPS).</p>
     */
    inline long long GetIops() const{ return m_iops; }

    /**
     * <p>The requested number of I/O operations per second (IOPS).</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The requested number of I/O operations per second (IOPS).</p>
     */
    inline void SetIops(long long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The requested number of I/O operations per second (IOPS).</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithIops(long long value) { SetIops(value); return *this;}


    /**
     * <p>Whether to boot from this disk or not.</p>
     */
    inline bool GetIsBootDisk() const{ return m_isBootDisk; }

    /**
     * <p>Whether to boot from this disk or not.</p>
     */
    inline bool IsBootDiskHasBeenSet() const { return m_isBootDiskHasBeenSet; }

    /**
     * <p>Whether to boot from this disk or not.</p>
     */
    inline void SetIsBootDisk(bool value) { m_isBootDiskHasBeenSet = true; m_isBootDisk = value; }

    /**
     * <p>Whether to boot from this disk or not.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithIsBootDisk(bool value) { SetIsBootDisk(value); return *this;}


    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline const ReplicationConfigurationReplicatedDiskStagingDiskType& GetStagingDiskType() const{ return m_stagingDiskType; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline bool StagingDiskTypeHasBeenSet() const { return m_stagingDiskTypeHasBeenSet; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline void SetStagingDiskType(const ReplicationConfigurationReplicatedDiskStagingDiskType& value) { m_stagingDiskTypeHasBeenSet = true; m_stagingDiskType = value; }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline void SetStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType&& value) { m_stagingDiskTypeHasBeenSet = true; m_stagingDiskType = std::move(value); }

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithStagingDiskType(const ReplicationConfigurationReplicatedDiskStagingDiskType& value) { SetStagingDiskType(value); return *this;}

    /**
     * <p>The Staging Disk EBS volume type to be used during replication.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType&& value) { SetStagingDiskType(std::move(value)); return *this;}


    /**
     * <p>The throughput to use for the EBS volume in MiB/s. This parameter is valid
     * only for gp3 volumes.</p>
     */
    inline long long GetThroughput() const{ return m_throughput; }

    /**
     * <p>The throughput to use for the EBS volume in MiB/s. This parameter is valid
     * only for gp3 volumes.</p>
     */
    inline bool ThroughputHasBeenSet() const { return m_throughputHasBeenSet; }

    /**
     * <p>The throughput to use for the EBS volume in MiB/s. This parameter is valid
     * only for gp3 volumes.</p>
     */
    inline void SetThroughput(long long value) { m_throughputHasBeenSet = true; m_throughput = value; }

    /**
     * <p>The throughput to use for the EBS volume in MiB/s. This parameter is valid
     * only for gp3 volumes.</p>
     */
    inline ReplicationConfigurationReplicatedDisk& WithThroughput(long long value) { SetThroughput(value); return *this;}

  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet;

    long long m_iops;
    bool m_iopsHasBeenSet;

    bool m_isBootDisk;
    bool m_isBootDiskHasBeenSet;

    ReplicationConfigurationReplicatedDiskStagingDiskType m_stagingDiskType;
    bool m_stagingDiskTypeHasBeenSet;

    long long m_throughput;
    bool m_throughputHasBeenSet;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
