/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoverySnapshot.h>
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

RecoverySnapshot::RecoverySnapshot() : 
    m_ebsSnapshotsHasBeenSet(false),
    m_expectedTimestampHasBeenSet(false),
    m_snapshotIDHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

RecoverySnapshot::RecoverySnapshot(JsonView jsonValue) : 
    m_ebsSnapshotsHasBeenSet(false),
    m_expectedTimestampHasBeenSet(false),
    m_snapshotIDHasBeenSet(false),
    m_sourceServerIDHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
  *this = jsonValue;
}

RecoverySnapshot& RecoverySnapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ebsSnapshots"))
  {
    Aws::Utils::Array<JsonView> ebsSnapshotsJsonList = jsonValue.GetArray("ebsSnapshots");
    for(unsigned ebsSnapshotsIndex = 0; ebsSnapshotsIndex < ebsSnapshotsJsonList.GetLength(); ++ebsSnapshotsIndex)
    {
      m_ebsSnapshots.push_back(ebsSnapshotsJsonList[ebsSnapshotsIndex].AsString());
    }
    m_ebsSnapshotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expectedTimestamp"))
  {
    m_expectedTimestamp = jsonValue.GetString("expectedTimestamp");

    m_expectedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotID"))
  {
    m_snapshotID = jsonValue.GetString("snapshotID");

    m_snapshotIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

    m_sourceServerIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");

    m_timestampHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoverySnapshot::Jsonize() const
{
  JsonValue payload;

  if(m_ebsSnapshotsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ebsSnapshotsJsonList(m_ebsSnapshots.size());
   for(unsigned ebsSnapshotsIndex = 0; ebsSnapshotsIndex < ebsSnapshotsJsonList.GetLength(); ++ebsSnapshotsIndex)
   {
     ebsSnapshotsJsonList[ebsSnapshotsIndex].AsString(m_ebsSnapshots[ebsSnapshotsIndex]);
   }
   payload.WithArray("ebsSnapshots", std::move(ebsSnapshotsJsonList));

  }

  if(m_expectedTimestampHasBeenSet)
  {
   payload.WithString("expectedTimestamp", m_expectedTimestamp);

  }

  if(m_snapshotIDHasBeenSet)
  {
   payload.WithString("snapshotID", m_snapshotID);

  }

  if(m_sourceServerIDHasBeenSet)
  {
   payload.WithString("sourceServerID", m_sourceServerID);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
