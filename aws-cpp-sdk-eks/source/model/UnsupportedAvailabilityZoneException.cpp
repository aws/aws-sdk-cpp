/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/UnsupportedAvailabilityZoneException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

UnsupportedAvailabilityZoneException::UnsupportedAvailabilityZoneException() : 
    m_messageHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_validZonesHasBeenSet(false)
{
}

UnsupportedAvailabilityZoneException::UnsupportedAvailabilityZoneException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false),
    m_validZonesHasBeenSet(false)
{
  *this = jsonValue;
}

UnsupportedAvailabilityZoneException& UnsupportedAvailabilityZoneException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nodegroupName"))
  {
    m_nodegroupName = jsonValue.GetString("nodegroupName");

    m_nodegroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validZones"))
  {
    Aws::Utils::Array<JsonView> validZonesJsonList = jsonValue.GetArray("validZones");
    for(unsigned validZonesIndex = 0; validZonesIndex < validZonesJsonList.GetLength(); ++validZonesIndex)
    {
      m_validZones.push_back(validZonesJsonList[validZonesIndex].AsString());
    }
    m_validZonesHasBeenSet = true;
  }

  return *this;
}

JsonValue UnsupportedAvailabilityZoneException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_nodegroupNameHasBeenSet)
  {
   payload.WithString("nodegroupName", m_nodegroupName);

  }

  if(m_validZonesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> validZonesJsonList(m_validZones.size());
   for(unsigned validZonesIndex = 0; validZonesIndex < validZonesJsonList.GetLength(); ++validZonesIndex)
   {
     validZonesJsonList[validZonesIndex].AsString(m_validZones[validZonesIndex]);
   }
   payload.WithArray("validZones", std::move(validZonesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
