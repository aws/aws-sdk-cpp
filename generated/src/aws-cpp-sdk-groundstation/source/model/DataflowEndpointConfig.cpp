/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DataflowEndpointConfig.h>
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

DataflowEndpointConfig::DataflowEndpointConfig() : 
    m_dataflowEndpointNameHasBeenSet(false),
    m_dataflowEndpointRegionHasBeenSet(false)
{
}

DataflowEndpointConfig::DataflowEndpointConfig(JsonView jsonValue) : 
    m_dataflowEndpointNameHasBeenSet(false),
    m_dataflowEndpointRegionHasBeenSet(false)
{
  *this = jsonValue;
}

DataflowEndpointConfig& DataflowEndpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataflowEndpointName"))
  {
    m_dataflowEndpointName = jsonValue.GetString("dataflowEndpointName");

    m_dataflowEndpointNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataflowEndpointRegion"))
  {
    m_dataflowEndpointRegion = jsonValue.GetString("dataflowEndpointRegion");

    m_dataflowEndpointRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue DataflowEndpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataflowEndpointNameHasBeenSet)
  {
   payload.WithString("dataflowEndpointName", m_dataflowEndpointName);

  }

  if(m_dataflowEndpointRegionHasBeenSet)
  {
   payload.WithString("dataflowEndpointRegion", m_dataflowEndpointRegion);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
