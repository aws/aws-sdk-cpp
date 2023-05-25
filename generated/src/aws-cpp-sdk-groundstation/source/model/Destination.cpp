/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/Destination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

Destination::Destination() : 
    m_configDetailsHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configType(ConfigCapabilityType::NOT_SET),
    m_configTypeHasBeenSet(false),
    m_dataflowDestinationRegionHasBeenSet(false)
{
}

Destination::Destination(JsonView jsonValue) : 
    m_configDetailsHasBeenSet(false),
    m_configIdHasBeenSet(false),
    m_configType(ConfigCapabilityType::NOT_SET),
    m_configTypeHasBeenSet(false),
    m_dataflowDestinationRegionHasBeenSet(false)
{
  *this = jsonValue;
}

Destination& Destination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configDetails"))
  {
    m_configDetails = jsonValue.GetObject("configDetails");

    m_configDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configId"))
  {
    m_configId = jsonValue.GetString("configId");

    m_configIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configType"))
  {
    m_configType = ConfigCapabilityTypeMapper::GetConfigCapabilityTypeForName(jsonValue.GetString("configType"));

    m_configTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataflowDestinationRegion"))
  {
    m_dataflowDestinationRegion = jsonValue.GetString("dataflowDestinationRegion");

    m_dataflowDestinationRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue Destination::Jsonize() const
{
  JsonValue payload;

  if(m_configDetailsHasBeenSet)
  {
   payload.WithObject("configDetails", m_configDetails.Jsonize());

  }

  if(m_configIdHasBeenSet)
  {
   payload.WithString("configId", m_configId);

  }

  if(m_configTypeHasBeenSet)
  {
   payload.WithString("configType", ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(m_configType));
  }

  if(m_dataflowDestinationRegionHasBeenSet)
  {
   payload.WithString("dataflowDestinationRegion", m_dataflowDestinationRegion);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
