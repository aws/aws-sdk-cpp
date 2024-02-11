/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ProvisionData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ProvisionData::ProvisionData() : 
    m_provisionStateHasBeenSet(false),
    m_provisionedCapacityUnits(0),
    m_provisionedCapacityUnitsHasBeenSet(false),
    m_dateProvisionedHasBeenSet(false),
    m_isNewProvisioningAvailable(false),
    m_isNewProvisioningAvailableHasBeenSet(false),
    m_dateNewProvisioningDataAvailableHasBeenSet(false),
    m_reasonForNewProvisioningDataHasBeenSet(false)
{
}

ProvisionData::ProvisionData(JsonView jsonValue) : 
    m_provisionStateHasBeenSet(false),
    m_provisionedCapacityUnits(0),
    m_provisionedCapacityUnitsHasBeenSet(false),
    m_dateProvisionedHasBeenSet(false),
    m_isNewProvisioningAvailable(false),
    m_isNewProvisioningAvailableHasBeenSet(false),
    m_dateNewProvisioningDataAvailableHasBeenSet(false),
    m_reasonForNewProvisioningDataHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionData& ProvisionData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProvisionState"))
  {
    m_provisionState = jsonValue.GetString("ProvisionState");

    m_provisionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionedCapacityUnits"))
  {
    m_provisionedCapacityUnits = jsonValue.GetInteger("ProvisionedCapacityUnits");

    m_provisionedCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateProvisioned"))
  {
    m_dateProvisioned = jsonValue.GetDouble("DateProvisioned");

    m_dateProvisionedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsNewProvisioningAvailable"))
  {
    m_isNewProvisioningAvailable = jsonValue.GetBool("IsNewProvisioningAvailable");

    m_isNewProvisioningAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateNewProvisioningDataAvailable"))
  {
    m_dateNewProvisioningDataAvailable = jsonValue.GetDouble("DateNewProvisioningDataAvailable");

    m_dateNewProvisioningDataAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReasonForNewProvisioningData"))
  {
    m_reasonForNewProvisioningData = jsonValue.GetString("ReasonForNewProvisioningData");

    m_reasonForNewProvisioningDataHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionData::Jsonize() const
{
  JsonValue payload;

  if(m_provisionStateHasBeenSet)
  {
   payload.WithString("ProvisionState", m_provisionState);

  }

  if(m_provisionedCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("ProvisionedCapacityUnits", m_provisionedCapacityUnits);

  }

  if(m_dateProvisionedHasBeenSet)
  {
   payload.WithDouble("DateProvisioned", m_dateProvisioned.SecondsWithMSPrecision());
  }

  if(m_isNewProvisioningAvailableHasBeenSet)
  {
   payload.WithBool("IsNewProvisioningAvailable", m_isNewProvisioningAvailable);

  }

  if(m_dateNewProvisioningDataAvailableHasBeenSet)
  {
   payload.WithDouble("DateNewProvisioningDataAvailable", m_dateNewProvisioningDataAvailable.SecondsWithMSPrecision());
  }

  if(m_reasonForNewProvisioningDataHasBeenSet)
  {
   payload.WithString("ReasonForNewProvisioningData", m_reasonForNewProvisioningData);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
