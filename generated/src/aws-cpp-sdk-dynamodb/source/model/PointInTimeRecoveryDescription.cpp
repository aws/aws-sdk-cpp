/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/PointInTimeRecoveryDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

PointInTimeRecoveryDescription::PointInTimeRecoveryDescription() : 
    m_pointInTimeRecoveryStatus(PointInTimeRecoveryStatus::NOT_SET),
    m_pointInTimeRecoveryStatusHasBeenSet(false),
    m_earliestRestorableDateTimeHasBeenSet(false),
    m_latestRestorableDateTimeHasBeenSet(false)
{
}

PointInTimeRecoveryDescription::PointInTimeRecoveryDescription(JsonView jsonValue) : 
    m_pointInTimeRecoveryStatus(PointInTimeRecoveryStatus::NOT_SET),
    m_pointInTimeRecoveryStatusHasBeenSet(false),
    m_earliestRestorableDateTimeHasBeenSet(false),
    m_latestRestorableDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PointInTimeRecoveryDescription& PointInTimeRecoveryDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PointInTimeRecoveryStatus"))
  {
    m_pointInTimeRecoveryStatus = PointInTimeRecoveryStatusMapper::GetPointInTimeRecoveryStatusForName(jsonValue.GetString("PointInTimeRecoveryStatus"));

    m_pointInTimeRecoveryStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EarliestRestorableDateTime"))
  {
    m_earliestRestorableDateTime = jsonValue.GetDouble("EarliestRestorableDateTime");

    m_earliestRestorableDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LatestRestorableDateTime"))
  {
    m_latestRestorableDateTime = jsonValue.GetDouble("LatestRestorableDateTime");

    m_latestRestorableDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PointInTimeRecoveryDescription::Jsonize() const
{
  JsonValue payload;

  if(m_pointInTimeRecoveryStatusHasBeenSet)
  {
   payload.WithString("PointInTimeRecoveryStatus", PointInTimeRecoveryStatusMapper::GetNameForPointInTimeRecoveryStatus(m_pointInTimeRecoveryStatus));
  }

  if(m_earliestRestorableDateTimeHasBeenSet)
  {
   payload.WithDouble("EarliestRestorableDateTime", m_earliestRestorableDateTime.SecondsWithMSPrecision());
  }

  if(m_latestRestorableDateTimeHasBeenSet)
  {
   payload.WithDouble("LatestRestorableDateTime", m_latestRestorableDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
