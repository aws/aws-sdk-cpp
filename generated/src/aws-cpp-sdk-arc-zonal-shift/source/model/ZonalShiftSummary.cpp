/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ZonalShiftSummary.h>
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

ZonalShiftSummary::ZonalShiftSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ZonalShiftSummary& ZonalShiftSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("zonalShiftId"))
  {
    m_zonalShiftId = jsonValue.GetString("zonalShiftId");
    m_zonalShiftIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");
    m_resourceIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awayFrom"))
  {
    m_awayFrom = jsonValue.GetString("awayFrom");
    m_awayFromHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiryTime"))
  {
    m_expiryTime = jsonValue.GetDouble("expiryTime");
    m_expiryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ZonalShiftStatusMapper::GetZonalShiftStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");
    m_commentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shiftType"))
  {
    m_shiftType = ShiftTypeMapper::GetShiftTypeForName(jsonValue.GetString("shiftType"));
    m_shiftTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("practiceRunOutcome"))
  {
    m_practiceRunOutcome = PracticeRunOutcomeMapper::GetPracticeRunOutcomeForName(jsonValue.GetString("practiceRunOutcome"));
    m_practiceRunOutcomeHasBeenSet = true;
  }
  return *this;
}

JsonValue ZonalShiftSummary::Jsonize() const
{
  JsonValue payload;

  if(m_zonalShiftIdHasBeenSet)
  {
   payload.WithString("zonalShiftId", m_zonalShiftId);

  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("resourceIdentifier", m_resourceIdentifier);

  }

  if(m_awayFromHasBeenSet)
  {
   payload.WithString("awayFrom", m_awayFrom);

  }

  if(m_expiryTimeHasBeenSet)
  {
   payload.WithDouble("expiryTime", m_expiryTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ZonalShiftStatusMapper::GetNameForZonalShiftStatus(m_status));
  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_shiftTypeHasBeenSet)
  {
   payload.WithString("shiftType", ShiftTypeMapper::GetNameForShiftType(m_shiftType));
  }

  if(m_practiceRunOutcomeHasBeenSet)
  {
   payload.WithString("practiceRunOutcome", PracticeRunOutcomeMapper::GetNameForPracticeRunOutcome(m_practiceRunOutcome));
  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
