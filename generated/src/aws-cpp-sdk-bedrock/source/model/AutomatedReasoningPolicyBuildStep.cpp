/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyBuildStep::AutomatedReasoningPolicyBuildStep(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildStep& AutomatedReasoningPolicyBuildStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("context"))
  {
    m_context = jsonValue.GetObject("context");
    m_contextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("priorElement"))
  {
    m_priorElement = jsonValue.GetObject("priorElement");
    m_priorElementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("messages"))
  {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
    {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildStep::Jsonize() const
{
  JsonValue payload;

  if(m_contextHasBeenSet)
  {
   payload.WithObject("context", m_context.Jsonize());

  }

  if(m_priorElementHasBeenSet)
  {
   payload.WithObject("priorElement", m_priorElement.Jsonize());

  }

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
