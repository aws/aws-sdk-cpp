/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/Snapshot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

Snapshot::Snapshot() : 
    m_snapshotTimeHasBeenSet(false)
{
}

Snapshot::Snapshot(JsonView jsonValue) : 
    m_snapshotTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Snapshot& Snapshot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnapshotTime"))
  {
    m_snapshotTime = jsonValue.GetDouble("SnapshotTime");

    m_snapshotTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Snapshot::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotTimeHasBeenSet)
  {
   payload.WithDouble("SnapshotTime", m_snapshotTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
