/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/CustomerAgentlessCollectorInfo.h>
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

CustomerAgentlessCollectorInfo::CustomerAgentlessCollectorInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomerAgentlessCollectorInfo& CustomerAgentlessCollectorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeAgentlessCollectors"))
  {
    m_activeAgentlessCollectors = jsonValue.GetInteger("activeAgentlessCollectors");
    m_activeAgentlessCollectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("healthyAgentlessCollectors"))
  {
    m_healthyAgentlessCollectors = jsonValue.GetInteger("healthyAgentlessCollectors");
    m_healthyAgentlessCollectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("denyListedAgentlessCollectors"))
  {
    m_denyListedAgentlessCollectors = jsonValue.GetInteger("denyListedAgentlessCollectors");
    m_denyListedAgentlessCollectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("shutdownAgentlessCollectors"))
  {
    m_shutdownAgentlessCollectors = jsonValue.GetInteger("shutdownAgentlessCollectors");
    m_shutdownAgentlessCollectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unhealthyAgentlessCollectors"))
  {
    m_unhealthyAgentlessCollectors = jsonValue.GetInteger("unhealthyAgentlessCollectors");
    m_unhealthyAgentlessCollectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalAgentlessCollectors"))
  {
    m_totalAgentlessCollectors = jsonValue.GetInteger("totalAgentlessCollectors");
    m_totalAgentlessCollectorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unknownAgentlessCollectors"))
  {
    m_unknownAgentlessCollectors = jsonValue.GetInteger("unknownAgentlessCollectors");
    m_unknownAgentlessCollectorsHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerAgentlessCollectorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_activeAgentlessCollectorsHasBeenSet)
  {
   payload.WithInteger("activeAgentlessCollectors", m_activeAgentlessCollectors);

  }

  if(m_healthyAgentlessCollectorsHasBeenSet)
  {
   payload.WithInteger("healthyAgentlessCollectors", m_healthyAgentlessCollectors);

  }

  if(m_denyListedAgentlessCollectorsHasBeenSet)
  {
   payload.WithInteger("denyListedAgentlessCollectors", m_denyListedAgentlessCollectors);

  }

  if(m_shutdownAgentlessCollectorsHasBeenSet)
  {
   payload.WithInteger("shutdownAgentlessCollectors", m_shutdownAgentlessCollectors);

  }

  if(m_unhealthyAgentlessCollectorsHasBeenSet)
  {
   payload.WithInteger("unhealthyAgentlessCollectors", m_unhealthyAgentlessCollectors);

  }

  if(m_totalAgentlessCollectorsHasBeenSet)
  {
   payload.WithInteger("totalAgentlessCollectors", m_totalAgentlessCollectors);

  }

  if(m_unknownAgentlessCollectorsHasBeenSet)
  {
   payload.WithInteger("unknownAgentlessCollectors", m_unknownAgentlessCollectors);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
