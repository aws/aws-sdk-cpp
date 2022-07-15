/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/ReplicationConfigurationReplicatedDisk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

ReplicationConfigurationReplicatedDisk::ReplicationConfigurationReplicatedDisk() : 
    m_deviceNameHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_isBootDisk(false),
    m_isBootDiskHasBeenSet(false),
    m_optimizedStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET),
    m_optimizedStagingDiskTypeHasBeenSet(false),
    m_stagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET),
    m_stagingDiskTypeHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false)
{
}

ReplicationConfigurationReplicatedDisk::ReplicationConfigurationReplicatedDisk(JsonView jsonValue) : 
    m_deviceNameHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_isBootDisk(false),
    m_isBootDiskHasBeenSet(false),
    m_optimizedStagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET),
    m_optimizedStagingDiskTypeHasBeenSet(false),
    m_stagingDiskType(ReplicationConfigurationReplicatedDiskStagingDiskType::NOT_SET),
    m_stagingDiskTypeHasBeenSet(false),
    m_throughput(0),
    m_throughputHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationConfigurationReplicatedDisk& ReplicationConfigurationReplicatedDisk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iops"))
  {
    m_iops = jsonValue.GetInt64("iops");

    m_iopsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isBootDisk"))
  {
    m_isBootDisk = jsonValue.GetBool("isBootDisk");

    m_isBootDiskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("optimizedStagingDiskType"))
  {
    m_optimizedStagingDiskType = ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper::GetReplicationConfigurationReplicatedDiskStagingDiskTypeForName(jsonValue.GetString("optimizedStagingDiskType"));

    m_optimizedStagingDiskTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stagingDiskType"))
  {
    m_stagingDiskType = ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper::GetReplicationConfigurationReplicatedDiskStagingDiskTypeForName(jsonValue.GetString("stagingDiskType"));

    m_stagingDiskTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("throughput"))
  {
    m_throughput = jsonValue.GetInt64("throughput");

    m_throughputHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationConfigurationReplicatedDisk::Jsonize() const
{
  JsonValue payload;

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_iopsHasBeenSet)
  {
   payload.WithInt64("iops", m_iops);

  }

  if(m_isBootDiskHasBeenSet)
  {
   payload.WithBool("isBootDisk", m_isBootDisk);

  }

  if(m_optimizedStagingDiskTypeHasBeenSet)
  {
   payload.WithString("optimizedStagingDiskType", ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper::GetNameForReplicationConfigurationReplicatedDiskStagingDiskType(m_optimizedStagingDiskType));
  }

  if(m_stagingDiskTypeHasBeenSet)
  {
   payload.WithString("stagingDiskType", ReplicationConfigurationReplicatedDiskStagingDiskTypeMapper::GetNameForReplicationConfigurationReplicatedDiskStagingDiskType(m_stagingDiskType));
  }

  if(m_throughputHasBeenSet)
  {
   payload.WithInt64("throughput", m_throughput);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
