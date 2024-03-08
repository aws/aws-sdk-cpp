/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/AutoshiftSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{

AutoshiftSummary::AutoshiftSummary() : 
    m_awayFromHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(AutoshiftExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

AutoshiftSummary::AutoshiftSummary(JsonView jsonValue) : 
    m_awayFromHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(AutoshiftExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AutoshiftSummary& AutoshiftSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awayFrom"))
  {
    m_awayFrom = jsonValue.GetString("awayFrom");

    m_awayFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AutoshiftExecutionStatusMapper::GetAutoshiftExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoshiftSummary::Jsonize() const
{
  JsonValue payload;

  if(m_awayFromHasBeenSet)
  {
   payload.WithString("awayFrom", m_awayFrom);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AutoshiftExecutionStatusMapper::GetNameForAutoshiftExecutionStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
