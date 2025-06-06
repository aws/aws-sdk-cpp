﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/InstanceFleet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

InstanceFleet::InstanceFleet(JsonView jsonValue)
{
  *this = jsonValue;
}

InstanceFleet& InstanceFleet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceFleetType"))
  {
    m_instanceFleetType = InstanceFleetTypeMapper::GetInstanceFleetTypeForName(jsonValue.GetString("InstanceFleetType"));
    m_instanceFleetTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetOnDemandCapacity"))
  {
    m_targetOnDemandCapacity = jsonValue.GetInteger("TargetOnDemandCapacity");
    m_targetOnDemandCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetSpotCapacity"))
  {
    m_targetSpotCapacity = jsonValue.GetInteger("TargetSpotCapacity");
    m_targetSpotCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedOnDemandCapacity"))
  {
    m_provisionedOnDemandCapacity = jsonValue.GetInteger("ProvisionedOnDemandCapacity");
    m_provisionedOnDemandCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProvisionedSpotCapacity"))
  {
    m_provisionedSpotCapacity = jsonValue.GetInteger("ProvisionedSpotCapacity");
    m_provisionedSpotCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceTypeSpecifications"))
  {
    Aws::Utils::Array<JsonView> instanceTypeSpecificationsJsonList = jsonValue.GetArray("InstanceTypeSpecifications");
    for(unsigned instanceTypeSpecificationsIndex = 0; instanceTypeSpecificationsIndex < instanceTypeSpecificationsJsonList.GetLength(); ++instanceTypeSpecificationsIndex)
    {
      m_instanceTypeSpecifications.push_back(instanceTypeSpecificationsJsonList[instanceTypeSpecificationsIndex].AsObject());
    }
    m_instanceTypeSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LaunchSpecifications"))
  {
    m_launchSpecifications = jsonValue.GetObject("LaunchSpecifications");
    m_launchSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResizeSpecifications"))
  {
    m_resizeSpecifications = jsonValue.GetObject("ResizeSpecifications");
    m_resizeSpecificationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Context"))
  {
    m_context = jsonValue.GetString("Context");
    m_contextHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceFleet::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_instanceFleetTypeHasBeenSet)
  {
   payload.WithString("InstanceFleetType", InstanceFleetTypeMapper::GetNameForInstanceFleetType(m_instanceFleetType));
  }

  if(m_targetOnDemandCapacityHasBeenSet)
  {
   payload.WithInteger("TargetOnDemandCapacity", m_targetOnDemandCapacity);

  }

  if(m_targetSpotCapacityHasBeenSet)
  {
   payload.WithInteger("TargetSpotCapacity", m_targetSpotCapacity);

  }

  if(m_provisionedOnDemandCapacityHasBeenSet)
  {
   payload.WithInteger("ProvisionedOnDemandCapacity", m_provisionedOnDemandCapacity);

  }

  if(m_provisionedSpotCapacityHasBeenSet)
  {
   payload.WithInteger("ProvisionedSpotCapacity", m_provisionedSpotCapacity);

  }

  if(m_instanceTypeSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceTypeSpecificationsJsonList(m_instanceTypeSpecifications.size());
   for(unsigned instanceTypeSpecificationsIndex = 0; instanceTypeSpecificationsIndex < instanceTypeSpecificationsJsonList.GetLength(); ++instanceTypeSpecificationsIndex)
   {
     instanceTypeSpecificationsJsonList[instanceTypeSpecificationsIndex].AsObject(m_instanceTypeSpecifications[instanceTypeSpecificationsIndex].Jsonize());
   }
   payload.WithArray("InstanceTypeSpecifications", std::move(instanceTypeSpecificationsJsonList));

  }

  if(m_launchSpecificationsHasBeenSet)
  {
   payload.WithObject("LaunchSpecifications", m_launchSpecifications.Jsonize());

  }

  if(m_resizeSpecificationsHasBeenSet)
  {
   payload.WithObject("ResizeSpecifications", m_resizeSpecifications.Jsonize());

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("Context", m_context);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
