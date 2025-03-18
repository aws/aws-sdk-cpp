/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptFlowNodeResourceConfiguration.h>
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

PromptFlowNodeResourceConfiguration::PromptFlowNodeResourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptFlowNodeResourceConfiguration& PromptFlowNodeResourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("promptArn"))
  {
    m_promptArn = jsonValue.GetString("promptArn");
    m_promptArnHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptFlowNodeResourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_promptArnHasBeenSet)
  {
   payload.WithString("promptArn", m_promptArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
