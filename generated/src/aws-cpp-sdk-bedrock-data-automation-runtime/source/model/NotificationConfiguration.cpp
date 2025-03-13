/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/NotificationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{

NotificationConfiguration::NotificationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

NotificationConfiguration& NotificationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventBridgeConfiguration"))
  {
    m_eventBridgeConfiguration = jsonValue.GetObject("eventBridgeConfiguration");
    m_eventBridgeConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue NotificationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_eventBridgeConfigurationHasBeenSet)
  {
   payload.WithObject("eventBridgeConfiguration", m_eventBridgeConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
