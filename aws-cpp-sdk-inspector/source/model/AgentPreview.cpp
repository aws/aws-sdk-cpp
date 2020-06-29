/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AgentPreview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AgentPreview::AgentPreview() : 
    m_hostnameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_agentHealth(AgentHealth::NOT_SET),
    m_agentHealthHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_ipv4AddressHasBeenSet(false)
{
}

AgentPreview::AgentPreview(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_agentHealth(AgentHealth::NOT_SET),
    m_agentHealthHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_operatingSystemHasBeenSet(false),
    m_kernelVersionHasBeenSet(false),
    m_ipv4AddressHasBeenSet(false)
{
  *this = jsonValue;
}

AgentPreview& AgentPreview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroup"))
  {
    m_autoScalingGroup = jsonValue.GetString("autoScalingGroup");

    m_autoScalingGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentHealth"))
  {
    m_agentHealth = AgentHealthMapper::GetAgentHealthForName(jsonValue.GetString("agentHealth"));

    m_agentHealthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("operatingSystem");

    m_operatingSystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kernelVersion"))
  {
    m_kernelVersion = jsonValue.GetString("kernelVersion");

    m_kernelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipv4Address"))
  {
    m_ipv4Address = jsonValue.GetString("ipv4Address");

    m_ipv4AddressHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentPreview::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_autoScalingGroupHasBeenSet)
  {
   payload.WithString("autoScalingGroup", m_autoScalingGroup);

  }

  if(m_agentHealthHasBeenSet)
  {
   payload.WithString("agentHealth", AgentHealthMapper::GetNameForAgentHealth(m_agentHealth));
  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("operatingSystem", m_operatingSystem);

  }

  if(m_kernelVersionHasBeenSet)
  {
   payload.WithString("kernelVersion", m_kernelVersion);

  }

  if(m_ipv4AddressHasBeenSet)
  {
   payload.WithString("ipv4Address", m_ipv4Address);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
