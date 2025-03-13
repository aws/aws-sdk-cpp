/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation-runtime/model/EventBridgeConfiguration.h>
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

EventBridgeConfiguration::EventBridgeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EventBridgeConfiguration& EventBridgeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventBridgeEnabled"))
  {
    m_eventBridgeEnabled = jsonValue.GetBool("eventBridgeEnabled");
    m_eventBridgeEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue EventBridgeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_eventBridgeEnabledHasBeenSet)
  {
   payload.WithBool("eventBridgeEnabled", m_eventBridgeEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
