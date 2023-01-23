/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/AgentConfigurationStatus.h>
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

AgentConfigurationStatus::AgentConfigurationStatus() : 
    m_agentIdHasBeenSet(false),
    m_operationSucceeded(false),
    m_operationSucceededHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

AgentConfigurationStatus::AgentConfigurationStatus(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_operationSucceeded(false),
    m_operationSucceededHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AgentConfigurationStatus& AgentConfigurationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationSucceeded"))
  {
    m_operationSucceeded = jsonValue.GetBool("operationSucceeded");

    m_operationSucceededHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentConfigurationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_operationSucceededHasBeenSet)
  {
   payload.WithBool("operationSucceeded", m_operationSucceeded);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
