/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AutoSnapshotDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AutoSnapshotDetails::AutoSnapshotDetails() : 
    m_dateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(AutoSnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fromAttachedDisksHasBeenSet(false)
{
}

AutoSnapshotDetails::AutoSnapshotDetails(JsonView jsonValue) : 
    m_dateHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_status(AutoSnapshotStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_fromAttachedDisksHasBeenSet(false)
{
  *this = jsonValue;
}

AutoSnapshotDetails& AutoSnapshotDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("date"))
  {
    m_date = jsonValue.GetString("date");

    m_dateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AutoSnapshotStatusMapper::GetAutoSnapshotStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fromAttachedDisks"))
  {
    Aws::Utils::Array<JsonView> fromAttachedDisksJsonList = jsonValue.GetArray("fromAttachedDisks");
    for(unsigned fromAttachedDisksIndex = 0; fromAttachedDisksIndex < fromAttachedDisksJsonList.GetLength(); ++fromAttachedDisksIndex)
    {
      m_fromAttachedDisks.push_back(fromAttachedDisksJsonList[fromAttachedDisksIndex].AsObject());
    }
    m_fromAttachedDisksHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoSnapshotDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dateHasBeenSet)
  {
   payload.WithString("date", m_date);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AutoSnapshotStatusMapper::GetNameForAutoSnapshotStatus(m_status));
  }

  if(m_fromAttachedDisksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fromAttachedDisksJsonList(m_fromAttachedDisks.size());
   for(unsigned fromAttachedDisksIndex = 0; fromAttachedDisksIndex < fromAttachedDisksJsonList.GetLength(); ++fromAttachedDisksIndex)
   {
     fromAttachedDisksJsonList[fromAttachedDisksIndex].AsObject(m_fromAttachedDisks[fromAttachedDisksIndex].Jsonize());
   }
   payload.WithArray("fromAttachedDisks", std::move(fromAttachedDisksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
