/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

AgentConfigurationStatus::AgentConfigurationStatus(const JsonValue& jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_operationSucceeded(false),
    m_operationSucceededHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

AgentConfigurationStatus& AgentConfigurationStatus::operator =(const JsonValue& jsonValue)
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
