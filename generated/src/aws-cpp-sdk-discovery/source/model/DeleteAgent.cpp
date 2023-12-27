/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DeleteAgent.h>
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

DeleteAgent::DeleteAgent() : 
    m_agentIdHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
}

DeleteAgent::DeleteAgent(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false)
{
  *this = jsonValue;
}

DeleteAgent& DeleteAgent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("force"))
  {
    m_force = jsonValue.GetBool("force");

    m_forceHasBeenSet = true;
  }

  return *this;
}

JsonValue DeleteAgent::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_forceHasBeenSet)
  {
   payload.WithBool("force", m_force);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
