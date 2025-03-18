/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DatabaseSnapshotInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DatabaseSnapshotInfo::DatabaseSnapshotInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

DatabaseSnapshotInfo& DatabaseSnapshotInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetString("Table");
    m_tableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestTimestamp"))
  {
    m_requestTimestamp = jsonValue.GetDouble("RequestTimestamp");
    m_requestTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RequestedBy"))
  {
    m_requestedBy = SnapshotRequestedByMapper::GetSnapshotRequestedByForName(jsonValue.GetString("RequestedBy"));
    m_requestedByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SnapshotStatusMapper::GetSnapshotStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureDescription"))
  {
    m_failureDescription = jsonValue.GetObject("FailureDescription");
    m_failureDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue DatabaseSnapshotInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_tableHasBeenSet)
  {
   payload.WithString("Table", m_table);

  }

  if(m_requestTimestampHasBeenSet)
  {
   payload.WithDouble("RequestTimestamp", m_requestTimestamp.SecondsWithMSPrecision());
  }

  if(m_requestedByHasBeenSet)
  {
   payload.WithString("RequestedBy", SnapshotRequestedByMapper::GetNameForSnapshotRequestedBy(m_requestedBy));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SnapshotStatusMapper::GetNameForSnapshotStatus(m_status));
  }

  if(m_failureDescriptionHasBeenSet)
  {
   payload.WithObject("FailureDescription", m_failureDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
