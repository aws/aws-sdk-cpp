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

ZonalShiftSummary::ZonalShiftSummary() : 
    m_awayFromHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(ZonalShiftStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_zonalShiftIdHasBeenSet(false)
{
}

ZonalShiftSummary::ZonalShiftSummary(JsonView jsonValue) : 
    m_awayFromHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(ZonalShiftStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_zonalShiftIdHasBeenSet(false)
{
  *this = jsonValue;
}

ZonalShiftSummary& ZonalShiftSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awayFrom"))
  {
    m_awayFrom = jsonValue.GetString("awayFrom");

    m_awayFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("comment"))
  {
    m_comment = jsonValue.GetString("comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expiryTime"))
  {
    m_expiryTime = jsonValue.GetDouble("expiryTime");

    m_expiryTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("resourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
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

  if(jsonValue.ValueExists("zonalShiftId"))
  {
    m_zonalShiftId = jsonValue.GetString("zonalShiftId");

    m_zonalShiftIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ZonalShiftSummary::Jsonize() const
{
  JsonValue payload;

  if(m_awayFromHasBeenSet)
  {
   payload.WithString("awayFrom", m_awayFrom);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("comment", m_comment);

  }

  if(m_expiryTimeHasBeenSet)
  {
   payload.WithDouble("expiryTime", m_expiryTime.SecondsWithMSPrecision());
  }

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("resourceIdentifier", m_resourceIdentifier);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ZonalShiftStatusMapper::GetNameForZonalShiftStatus(m_status));
  }

  if(m_zonalShiftIdHasBeenSet)
  {
   payload.WithString("zonalShiftId", m_zonalShiftId);

  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
