/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowAliasSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

FlowAliasSummary::FlowAliasSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowAliasSummary& FlowAliasSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routingConfiguration"))
  {
    Aws::Utils::Array<JsonView> routingConfigurationJsonList = jsonValue.GetArray("routingConfiguration");
    for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
    {
      m_routingConfiguration.push_back(routingConfigurationJsonList[routingConfigurationIndex].AsObject());
    }
    m_routingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("concurrencyConfiguration"))
  {
    m_concurrencyConfiguration = jsonValue.GetObject("concurrencyConfiguration");
    m_concurrencyConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowId"))
  {
    m_flowId = jsonValue.GetString("flowId");
    m_flowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowAliasSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_routingConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingConfigurationJsonList(m_routingConfiguration.size());
   for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
   {
     routingConfigurationJsonList[routingConfigurationIndex].AsObject(m_routingConfiguration[routingConfigurationIndex].Jsonize());
   }
   payload.WithArray("routingConfiguration", std::move(routingConfigurationJsonList));

  }

  if(m_concurrencyConfigurationHasBeenSet)
  {
   payload.WithObject("concurrencyConfiguration", m_concurrencyConfiguration.Jsonize());

  }

  if(m_flowIdHasBeenSet)
  {
   payload.WithString("flowId", m_flowId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
