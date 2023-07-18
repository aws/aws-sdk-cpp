/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDataReplicationInfoReplicatedDisk.h>
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

RecoveryInstanceDataReplicationInfoReplicatedDisk::RecoveryInstanceDataReplicationInfoReplicatedDisk() : 
    m_backloggedStorageBytes(0),
    m_backloggedStorageBytesHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_replicatedStorageBytes(0),
    m_replicatedStorageBytesHasBeenSet(false),
    m_rescannedStorageBytes(0),
    m_rescannedStorageBytesHasBeenSet(false),
    m_totalStorageBytes(0),
    m_totalStorageBytesHasBeenSet(false)
{
}

RecoveryInstanceDataReplicationInfoReplicatedDisk::RecoveryInstanceDataReplicationInfoReplicatedDisk(JsonView jsonValue) : 
    m_backloggedStorageBytes(0),
    m_backloggedStorageBytesHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_replicatedStorageBytes(0),
    m_replicatedStorageBytesHasBeenSet(false),
    m_rescannedStorageBytes(0),
    m_rescannedStorageBytesHasBeenSet(false),
    m_totalStorageBytes(0),
    m_totalStorageBytesHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstanceDataReplicationInfoReplicatedDisk& RecoveryInstanceDataReplicationInfoReplicatedDisk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("backloggedStorageBytes"))
  {
    m_backloggedStorageBytes = jsonValue.GetInt64("backloggedStorageBytes");

    m_backloggedStorageBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceName"))
  {
    m_deviceName = jsonValue.GetString("deviceName");

    m_deviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicatedStorageBytes"))
  {
    m_replicatedStorageBytes = jsonValue.GetInt64("replicatedStorageBytes");

    m_replicatedStorageBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rescannedStorageBytes"))
  {
    m_rescannedStorageBytes = jsonValue.GetInt64("rescannedStorageBytes");

    m_rescannedStorageBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalStorageBytes"))
  {
    m_totalStorageBytes = jsonValue.GetInt64("totalStorageBytes");

    m_totalStorageBytesHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstanceDataReplicationInfoReplicatedDisk::Jsonize() const
{
  JsonValue payload;

  if(m_backloggedStorageBytesHasBeenSet)
  {
   payload.WithInt64("backloggedStorageBytes", m_backloggedStorageBytes);

  }

  if(m_deviceNameHasBeenSet)
  {
   payload.WithString("deviceName", m_deviceName);

  }

  if(m_replicatedStorageBytesHasBeenSet)
  {
   payload.WithInt64("replicatedStorageBytes", m_replicatedStorageBytes);

  }

  if(m_rescannedStorageBytesHasBeenSet)
  {
   payload.WithInt64("rescannedStorageBytes", m_rescannedStorageBytes);

  }

  if(m_totalStorageBytesHasBeenSet)
  {
   payload.WithInt64("totalStorageBytes", m_totalStorageBytes);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
