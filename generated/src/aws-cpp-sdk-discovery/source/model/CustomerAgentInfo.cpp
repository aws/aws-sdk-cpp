/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/CustomerAgentInfo.h>
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

CustomerAgentInfo::CustomerAgentInfo() : 
    m_activeAgents(0),
    m_activeAgentsHasBeenSet(false),
    m_healthyAgents(0),
    m_healthyAgentsHasBeenSet(false),
    m_blackListedAgents(0),
    m_blackListedAgentsHasBeenSet(false),
    m_shutdownAgents(0),
    m_shutdownAgentsHasBeenSet(false),
    m_unhealthyAgents(0),
    m_unhealthyAgentsHasBeenSet(false),
    m_totalAgents(0),
    m_totalAgentsHasBeenSet(false),
    m_unknownAgents(0),
    m_unknownAgentsHasBeenSet(false)
{
}

CustomerAgentInfo::CustomerAgentInfo(JsonView jsonValue) : 
    m_activeAgents(0),
    m_activeAgentsHasBeenSet(false),
    m_healthyAgents(0),
    m_healthyAgentsHasBeenSet(false),
    m_blackListedAgents(0),
    m_blackListedAgentsHasBeenSet(false),
    m_shutdownAgents(0),
    m_shutdownAgentsHasBeenSet(false),
    m_unhealthyAgents(0),
    m_unhealthyAgentsHasBeenSet(false),
    m_totalAgents(0),
    m_totalAgentsHasBeenSet(false),
    m_unknownAgents(0),
    m_unknownAgentsHasBeenSet(false)
{
  *this = jsonValue;
}

CustomerAgentInfo& CustomerAgentInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeAgents"))
  {
    m_activeAgents = jsonValue.GetInteger("activeAgents");

    m_activeAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthyAgents"))
  {
    m_healthyAgents = jsonValue.GetInteger("healthyAgents");

    m_healthyAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("blackListedAgents"))
  {
    m_blackListedAgents = jsonValue.GetInteger("blackListedAgents");

    m_blackListedAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shutdownAgents"))
  {
    m_shutdownAgents = jsonValue.GetInteger("shutdownAgents");

    m_shutdownAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unhealthyAgents"))
  {
    m_unhealthyAgents = jsonValue.GetInteger("unhealthyAgents");

    m_unhealthyAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalAgents"))
  {
    m_totalAgents = jsonValue.GetInteger("totalAgents");

    m_totalAgentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("unknownAgents"))
  {
    m_unknownAgents = jsonValue.GetInteger("unknownAgents");

    m_unknownAgentsHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomerAgentInfo::Jsonize() const
{
  JsonValue payload;

  if(m_activeAgentsHasBeenSet)
  {
   payload.WithInteger("activeAgents", m_activeAgents);

  }

  if(m_healthyAgentsHasBeenSet)
  {
   payload.WithInteger("healthyAgents", m_healthyAgents);

  }

  if(m_blackListedAgentsHasBeenSet)
  {
   payload.WithInteger("blackListedAgents", m_blackListedAgents);

  }

  if(m_shutdownAgentsHasBeenSet)
  {
   payload.WithInteger("shutdownAgents", m_shutdownAgents);

  }

  if(m_unhealthyAgentsHasBeenSet)
  {
   payload.WithInteger("unhealthyAgents", m_unhealthyAgents);

  }

  if(m_totalAgentsHasBeenSet)
  {
   payload.WithInteger("totalAgents", m_totalAgents);

  }

  if(m_unknownAgentsHasBeenSet)
  {
   payload.WithInteger("unknownAgents", m_unknownAgents);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
