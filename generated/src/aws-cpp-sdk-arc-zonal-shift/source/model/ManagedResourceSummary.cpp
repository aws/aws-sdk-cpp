/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ManagedResourceSummary.h>
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

ManagedResourceSummary::ManagedResourceSummary() : 
    m_appliedWeightsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_autoshiftsHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_practiceRunStatus(ZonalAutoshiftStatus::NOT_SET),
    m_practiceRunStatusHasBeenSet(false),
    m_zonalAutoshiftStatus(ZonalAutoshiftStatus::NOT_SET),
    m_zonalAutoshiftStatusHasBeenSet(false),
    m_zonalShiftsHasBeenSet(false)
{
}

ManagedResourceSummary::ManagedResourceSummary(JsonView jsonValue) : 
    m_appliedWeightsHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_autoshiftsHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_practiceRunStatus(ZonalAutoshiftStatus::NOT_SET),
    m_practiceRunStatusHasBeenSet(false),
    m_zonalAutoshiftStatus(ZonalAutoshiftStatus::NOT_SET),
    m_zonalAutoshiftStatusHasBeenSet(false),
    m_zonalShiftsHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedResourceSummary& ManagedResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appliedWeights"))
  {
    Aws::Map<Aws::String, JsonView> appliedWeightsJsonMap = jsonValue.GetObject("appliedWeights").GetAllObjects();
    for(auto& appliedWeightsItem : appliedWeightsJsonMap)
    {
      m_appliedWeights[appliedWeightsItem.first] = appliedWeightsItem.second.AsDouble();
    }
    m_appliedWeightsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoshifts"))
  {
    Aws::Utils::Array<JsonView> autoshiftsJsonList = jsonValue.GetArray("autoshifts");
    for(unsigned autoshiftsIndex = 0; autoshiftsIndex < autoshiftsJsonList.GetLength(); ++autoshiftsIndex)
    {
      m_autoshifts.push_back(autoshiftsJsonList[autoshiftsIndex].AsObject());
    }
    m_autoshiftsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZones"))
  {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("availabilityZones");
    for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
    {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("practiceRunStatus"))
  {
    m_practiceRunStatus = ZonalAutoshiftStatusMapper::GetZonalAutoshiftStatusForName(jsonValue.GetString("practiceRunStatus"));

    m_practiceRunStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("zonalAutoshiftStatus"))
  {
    m_zonalAutoshiftStatus = ZonalAutoshiftStatusMapper::GetZonalAutoshiftStatusForName(jsonValue.GetString("zonalAutoshiftStatus"));

    m_zonalAutoshiftStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("zonalShifts"))
  {
    Aws::Utils::Array<JsonView> zonalShiftsJsonList = jsonValue.GetArray("zonalShifts");
    for(unsigned zonalShiftsIndex = 0; zonalShiftsIndex < zonalShiftsJsonList.GetLength(); ++zonalShiftsIndex)
    {
      m_zonalShifts.push_back(zonalShiftsJsonList[zonalShiftsIndex].AsObject());
    }
    m_zonalShiftsHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_appliedWeightsHasBeenSet)
  {
   JsonValue appliedWeightsJsonMap;
   for(auto& appliedWeightsItem : m_appliedWeights)
   {
     appliedWeightsJsonMap.WithDouble(appliedWeightsItem.first, appliedWeightsItem.second);
   }
   payload.WithObject("appliedWeights", std::move(appliedWeightsJsonMap));

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_autoshiftsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> autoshiftsJsonList(m_autoshifts.size());
   for(unsigned autoshiftsIndex = 0; autoshiftsIndex < autoshiftsJsonList.GetLength(); ++autoshiftsIndex)
   {
     autoshiftsJsonList[autoshiftsIndex].AsObject(m_autoshifts[autoshiftsIndex].Jsonize());
   }
   payload.WithArray("autoshifts", std::move(autoshiftsJsonList));

  }

  if(m_availabilityZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
   for(unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex)
   {
     availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
   }
   payload.WithArray("availabilityZones", std::move(availabilityZonesJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_practiceRunStatusHasBeenSet)
  {
   payload.WithString("practiceRunStatus", ZonalAutoshiftStatusMapper::GetNameForZonalAutoshiftStatus(m_practiceRunStatus));
  }

  if(m_zonalAutoshiftStatusHasBeenSet)
  {
   payload.WithString("zonalAutoshiftStatus", ZonalAutoshiftStatusMapper::GetNameForZonalAutoshiftStatus(m_zonalAutoshiftStatus));
  }

  if(m_zonalShiftsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> zonalShiftsJsonList(m_zonalShifts.size());
   for(unsigned zonalShiftsIndex = 0; zonalShiftsIndex < zonalShiftsJsonList.GetLength(); ++zonalShiftsIndex)
   {
     zonalShiftsJsonList[zonalShiftsIndex].AsObject(m_zonalShifts[zonalShiftsIndex].Jsonize());
   }
   payload.WithArray("zonalShifts", std::move(zonalShiftsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
