/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CreateVehicleResponseItem.h>
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

CreateVehicleResponseItem::CreateVehicleResponseItem() : 
    m_vehicleNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
}

CreateVehicleResponseItem::CreateVehicleResponseItem(JsonView jsonValue) : 
    m_vehicleNameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_thingArnHasBeenSet(false)
{
  *this = jsonValue;
}

CreateVehicleResponseItem& CreateVehicleResponseItem::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("thingArn"))
  {
    m_thingArn = jsonValue.GetString("thingArn");

    m_thingArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateVehicleResponseItem::Jsonize() const
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

  if(m_thingArnHasBeenSet)
  {
   payload.WithString("thingArn", m_thingArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
