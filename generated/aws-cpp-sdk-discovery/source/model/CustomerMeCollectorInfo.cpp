/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/CustomerMeCollectorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

CustomerMeCollectorInfo::CustomerMeCollectorInfo() : 
    m_activeMeCollectors(0),
    m_activeMeCollectorsHasBeenSet(false),
    m_healthyMeCollectors(0),
    m_healthyMeCollectorsHasBeenSet(false),
    m_denyListedMeCollectors(0),
    m_denyListedMeCollectorsHasBeenSet(false),
    m_shutdownMeCollectors(0),
    m_shutdownMeCollectorsHasBeenSet(false),
    m_unhealthyMeCollectors(0),
    m_unhealthyMeCollectorsHasBeenSet(false),
    m_totalMeCollectors(0),
    m_totalMeCollectorsHasBeenSet(false),
    m_unknownMeCollectors(0),
    m_unknownMeCollectorsHasBeenSet(false)
{
}

CustomerMeCollectorInfo::CustomerMeCollectorInfo(JsonView jsonValue) : 
    m_activeMeCollectors(0),
    m_activeMeCollectorsHasBeenSet(false),
    m_healthyMeCollectors(0),
    m_healthyMeCollectorsHasBeenSet(false),
    m_denyListedMeCollectors(0),
    m_denyListedMeCollectorsHasBeenSet(false),
    m_shutdownMeCollectors(0),
    m_shutdownMeCollectorsHasBeenSet(false),
    m_unhealthyMeCollectors(0),
    m_unhealthyMeCollectorsHasBeenSet(false),
    m_totalMeCollectors(0),
    m_totalMeCollectorsHasBeenSet(false),
    m_unknownMeCollectors(0),
    m_unknownMeCollectorsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerMeCollectorInfo& CustomerMeCollectorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeMeCollectors"))
  {
    m_activeMeCollectors = jsonValue.GetInteger("activeMeCollectors");

    m_activeMeCollectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthyMeCollectors"))
  {
    m_healthyMeCollectors = jsonValue.GetInteger("healthyMeCollectors");

    m_healthyMeCollectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("denyListedMeCollectors"))
  {
    m_denyListedMeCollectors = jsonValue.GetInteger("denyListedMeCollectors");

    m_denyListedMeCollectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shutdownMeCollectors"))
  {
    m_shutdownMeCollectors = jsonValue.GetInteger("shutdownMeCollectors");

    m_shutdownMeCollectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unhealthyMeCollectors"))
  {
    m_unhealthyMeCollectors = jsonValue.GetInteger("unhealthyMeCollectors");

    m_unhealthyMeCollectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalMeCollectors"))
  {
    m_totalMeCollectors = jsonValue.GetInteger("totalMeCollectors");

    m_totalMeCollectorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownMeCollectors"))
  {
    m_unknownMeCollectors = jsonValue.GetInteger("unknownMeCollectors");

    m_unknownMeCollectorsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerMeCollectorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_activeMeCollectorsHasBeenSet)
  {
   payload.WithInteger("activeMeCollectors", m_activeMeCollectors);

  }

  if(m_healthyMeCollectorsHasBeenSet)
  {
   payload.WithInteger("healthyMeCollectors", m_healthyMeCollectors);

  }

  if(m_denyListedMeCollectorsHasBeenSet)
  {
   payload.WithInteger("denyListedMeCollectors", m_denyListedMeCollectors);

  }

  if(m_shutdownMeCollectorsHasBeenSet)
  {
   payload.WithInteger("shutdownMeCollectors", m_shutdownMeCollectors);

  }

  if(m_unhealthyMeCollectorsHasBeenSet)
  {
   payload.WithInteger("unhealthyMeCollectors", m_unhealthyMeCollectors);

  }

  if(m_totalMeCollectorsHasBeenSet)
  {
   payload.WithInteger("totalMeCollectors", m_totalMeCollectors);

  }

  if(m_unknownMeCollectorsHasBeenSet)
  {
   payload.WithInteger("unknownMeCollectors", m_unknownMeCollectors);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
