/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/UpdateVehicleResponseItem.h>
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

UpdateVehicleResponseItem::UpdateVehicleResponseItem() : 
    m_vehicleNameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

UpdateVehicleResponseItem::UpdateVehicleResponseItem(JsonView jsonValue) : 
    m_vehicleNameHasBeenSet(false),
    m_arnHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateVehicleResponseItem& UpdateVehicleResponseItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vehicleName"))
  {
    m_vehicleName = jsonValue.GetString("vehicleName");

    m_vehicleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateVehicleResponseItem::Jsonize() const
{
  JsonValue payload;

  if(m_vehicleNameHasBeenSet)
  {
   payload.WithString("vehicleName", m_vehicleName);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
