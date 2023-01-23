/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

Destination::Destination() : 
    m_status(ReplicationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_lastReplicatedTimestampHasBeenSet(false)
{
}

Destination::Destination(JsonView jsonValue) : 
    m_status(ReplicationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_lastReplicatedTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

Destination& Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReplicationStatusMapper::GetReplicationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastReplicatedTimestamp"))
  {
    m_lastReplicatedTimestamp = jsonValue.GetDouble("LastReplicatedTimestamp");

    m_lastReplicatedTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue Destination::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReplicationStatusMapper::GetNameForReplicationStatus(m_status));
  }

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_lastReplicatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastReplicatedTimestamp", m_lastReplicatedTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
