/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/PointInTimeRecoverySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

PointInTimeRecoverySummary::PointInTimeRecoverySummary() : 
    m_status(PointInTimeRecoveryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_earliestRestorableTimestampHasBeenSet(false)
{
}

PointInTimeRecoverySummary::PointInTimeRecoverySummary(JsonView jsonValue) : 
    m_status(PointInTimeRecoveryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_earliestRestorableTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

PointInTimeRecoverySummary& PointInTimeRecoverySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = PointInTimeRecoveryStatusMapper::GetPointInTimeRecoveryStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("earliestRestorableTimestamp"))
  {
    m_earliestRestorableTimestamp = jsonValue.GetDouble("earliestRestorableTimestamp");

    m_earliestRestorableTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue PointInTimeRecoverySummary::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PointInTimeRecoveryStatusMapper::GetNameForPointInTimeRecoveryStatus(m_status));
  }

  if(m_earliestRestorableTimestampHasBeenSet)
  {
   payload.WithDouble("earliestRestorableTimestamp", m_earliestRestorableTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
