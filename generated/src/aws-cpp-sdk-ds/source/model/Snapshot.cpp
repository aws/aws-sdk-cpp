/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/Snapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

Snapshot::Snapshot() : 
    m_directoryIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_type(SnapshotType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Snapshot::Snapshot(JsonView jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_type(SnapshotType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(SnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Snapshot& Snapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");

    m_snapshotIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SnapshotTypeMapper::GetSnapshotTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Snapshot::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_snapshotIdHasBeenSet)
  {
   payload.WithString("SnapshotId", m_snapshotId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", SnapshotTypeMapper::GetNameForSnapshotType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SnapshotStatusMapper::GetNameForSnapshotStatus(m_status));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
