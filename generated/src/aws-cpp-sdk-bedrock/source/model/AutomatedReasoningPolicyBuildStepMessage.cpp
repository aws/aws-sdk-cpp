/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyBuildStepMessage.h>
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

AutomatedReasoningPolicyBuildStepMessage::AutomatedReasoningPolicyBuildStepMessage(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyBuildStepMessage& AutomatedReasoningPolicyBuildStepMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("messageType"))
  {
    m_messageType = AutomatedReasoningPolicyBuildMessageTypeMapper::GetAutomatedReasoningPolicyBuildMessageTypeForName(jsonValue.GetString("messageType"));
    m_messageTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyBuildStepMessage::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_messageTypeHasBeenSet)
  {
   payload.WithString("messageType", AutomatedReasoningPolicyBuildMessageTypeMapper::GetNameForAutomatedReasoningPolicyBuildMessageType(m_messageType));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
