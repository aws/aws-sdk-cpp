/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptFlowNodeConfiguration.h>
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

PromptFlowNodeConfiguration::PromptFlowNodeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptFlowNodeConfiguration& PromptFlowNodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceConfiguration"))
  {
    m_sourceConfiguration = jsonValue.GetObject("sourceConfiguration");
    m_sourceConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailConfiguration"))
  {
    m_guardrailConfiguration = jsonValue.GetObject("guardrailConfiguration");
    m_guardrailConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptFlowNodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  if(m_guardrailConfigurationHasBeenSet)
  {
   payload.WithObject("guardrailConfiguration", m_guardrailConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
