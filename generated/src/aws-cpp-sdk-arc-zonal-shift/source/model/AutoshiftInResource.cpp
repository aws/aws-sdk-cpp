/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/AutoshiftInResource.h>
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

AutoshiftInResource::AutoshiftInResource() : 
    m_appliedStatus(AutoshiftAppliedStatus::NOT_SET),
    m_appliedStatusHasBeenSet(false),
    m_awayFromHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

AutoshiftInResource::AutoshiftInResource(JsonView jsonValue) : 
    m_appliedStatus(AutoshiftAppliedStatus::NOT_SET),
    m_appliedStatusHasBeenSet(false),
    m_awayFromHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AutoshiftInResource& AutoshiftInResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appliedStatus"))
  {
    m_appliedStatus = AutoshiftAppliedStatusMapper::GetAutoshiftAppliedStatusForName(jsonValue.GetString("appliedStatus"));

    m_appliedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awayFrom"))
  {
    m_awayFrom = jsonValue.GetString("awayFrom");

    m_awayFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoshiftInResource::Jsonize() const
{
  JsonValue payload;

  if(m_appliedStatusHasBeenSet)
  {
   payload.WithString("appliedStatus", AutoshiftAppliedStatusMapper::GetNameForAutoshiftAppliedStatus(m_appliedStatus));
  }

  if(m_awayFromHasBeenSet)
  {
   payload.WithString("awayFrom", m_awayFrom);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
