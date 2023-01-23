/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/VehicleStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

VehicleStatus::VehicleStatus() : 
    m_campaignNameHasBeenSet(false),
    m_vehicleNameHasBeenSet(false),
    m_status(VehicleState::NOT_SET),
    m_statusHasBeenSet(false)
{
}

VehicleStatus::VehicleStatus(JsonView jsonValue) : 
    m_campaignNameHasBeenSet(false),
    m_vehicleNameHasBeenSet(false),
    m_status(VehicleState::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

VehicleStatus& VehicleStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("campaignName"))
  {
    m_campaignName = jsonValue.GetString("campaignName");

    m_campaignNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vehicleName"))
  {
    m_vehicleName = jsonValue.GetString("vehicleName");

    m_vehicleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = VehicleStateMapper::GetVehicleStateForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue VehicleStatus::Jsonize() const
{
  JsonValue payload;

  if(m_campaignNameHasBeenSet)
  {
   payload.WithString("campaignName", m_campaignName);

  }

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", VehicleStateMapper::GetNameForVehicleState(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
