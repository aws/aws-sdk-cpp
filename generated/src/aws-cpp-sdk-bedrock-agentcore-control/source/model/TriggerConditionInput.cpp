/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TriggerConditionInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

TriggerConditionInput::TriggerConditionInput(JsonView jsonValue)
{
  *this = jsonValue;
}

TriggerConditionInput& TriggerConditionInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageBasedTrigger"))
  {
    m_messageBasedTrigger = jsonValue.GetObject("messageBasedTrigger");
    m_messageBasedTriggerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenBasedTrigger"))
  {
    m_tokenBasedTrigger = jsonValue.GetObject("tokenBasedTrigger");
    m_tokenBasedTriggerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeBasedTrigger"))
  {
    m_timeBasedTrigger = jsonValue.GetObject("timeBasedTrigger");
    m_timeBasedTriggerHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerConditionInput::Jsonize() const
{
  JsonValue payload;

  if(m_messageBasedTriggerHasBeenSet)
  {
   payload.WithObject("messageBasedTrigger", m_messageBasedTrigger.Jsonize());

  }

  if(m_tokenBasedTriggerHasBeenSet)
  {
   payload.WithObject("tokenBasedTrigger", m_tokenBasedTrigger.Jsonize());

  }

  if(m_timeBasedTriggerHasBeenSet)
  {
   payload.WithObject("timeBasedTrigger", m_timeBasedTrigger.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
