/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/EventOrchestration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

EventOrchestration::EventOrchestration() : 
    m_eventBridgeEnabled(false),
    m_eventBridgeEnabledHasBeenSet(false)
{
}

EventOrchestration::EventOrchestration(JsonView jsonValue) : 
    m_eventBridgeEnabled(false),
    m_eventBridgeEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

EventOrchestration& EventOrchestration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventBridgeEnabled"))
  {
    m_eventBridgeEnabled = jsonValue.GetBool("eventBridgeEnabled");

    m_eventBridgeEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue EventOrchestration::Jsonize() const
{
  JsonValue payload;

  if(m_eventBridgeEnabledHasBeenSet)
  {
   payload.WithBool("eventBridgeEnabled", m_eventBridgeEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
