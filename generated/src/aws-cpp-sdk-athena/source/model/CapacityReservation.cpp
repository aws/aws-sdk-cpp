/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CapacityReservation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

CapacityReservation::CapacityReservation() : 
    m_nameHasBeenSet(false),
    m_status(CapacityReservationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetDpus(0),
    m_targetDpusHasBeenSet(false),
    m_allocatedDpus(0),
    m_allocatedDpusHasBeenSet(false),
    m_lastAllocationHasBeenSet(false),
    m_lastSuccessfulAllocationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

CapacityReservation::CapacityReservation(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(CapacityReservationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetDpus(0),
    m_targetDpusHasBeenSet(false),
    m_allocatedDpus(0),
    m_allocatedDpusHasBeenSet(false),
    m_lastAllocationHasBeenSet(false),
    m_lastSuccessfulAllocationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityReservation& CapacityReservation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CapacityReservationStatusMapper::GetCapacityReservationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDpus"))
  {
    m_targetDpus = jsonValue.GetInteger("TargetDpus");

    m_targetDpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocatedDpus"))
  {
    m_allocatedDpus = jsonValue.GetInteger("AllocatedDpus");

    m_allocatedDpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAllocation"))
  {
    m_lastAllocation = jsonValue.GetObject("LastAllocation");

    m_lastAllocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulAllocationTime"))
  {
    m_lastSuccessfulAllocationTime = jsonValue.GetDouble("LastSuccessfulAllocationTime");

    m_lastSuccessfulAllocationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityReservation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CapacityReservationStatusMapper::GetNameForCapacityReservationStatus(m_status));
  }

  if(m_targetDpusHasBeenSet)
  {
   payload.WithInteger("TargetDpus", m_targetDpus);

  }

  if(m_allocatedDpusHasBeenSet)
  {
   payload.WithInteger("AllocatedDpus", m_allocatedDpus);

  }

  if(m_lastAllocationHasBeenSet)
  {
   payload.WithObject("LastAllocation", m_lastAllocation.Jsonize());

  }

  if(m_lastSuccessfulAllocationTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulAllocationTime", m_lastSuccessfulAllocationTime.SecondsWithMSPrecision());
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
