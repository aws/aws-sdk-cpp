/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ZonalShiftInResource.h>
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

ZonalShiftInResource::ZonalShiftInResource() : 
    m_appliedStatus(AppliedStatus::NOT_SET),
    m_appliedStatusHasBeenSet(false),
    m_awayFromHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_zonalShiftIdHasBeenSet(false)
{
}

ZonalShiftInResource::ZonalShiftInResource(JsonView jsonValue) : 
    m_appliedStatus(AppliedStatus::NOT_SET),
    m_appliedStatusHasBeenSet(false),
    m_awayFromHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_expiryTimeHasBeenSet(false),
    m_resourceIdentifierHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_zonalShiftIdHasBeenSet(false)
{
  *this = jsonValue;
}

ZonalShiftInResource& ZonalShiftInResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appliedStatus"))
  {
    m_appliedStatus = AppliedStatusMapper::GetAppliedStatusForName(jsonValue.GetString("appliedStatus"));

    m_appliedStatusHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("zonalShiftId"))
  {
    m_zonalShiftId = jsonValue.GetString("zonalShiftId");

    m_zonalShiftIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ZonalShiftInResource::Jsonize() const
{
  JsonValue payload;

  if(m_appliedStatusHasBeenSet)
  {
   payload.WithString("appliedStatus", AppliedStatusMapper::GetNameForAppliedStatus(m_appliedStatus));
  }

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

  if(m_zonalShiftIdHasBeenSet)
  {
   payload.WithString("zonalShiftId", m_zonalShiftId);

  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
