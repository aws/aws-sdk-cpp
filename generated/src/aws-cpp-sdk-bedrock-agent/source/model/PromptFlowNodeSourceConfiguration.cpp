/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptFlowNodeSourceConfiguration.h>
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

PromptFlowNodeSourceConfiguration::PromptFlowNodeSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptFlowNodeSourceConfiguration& PromptFlowNodeSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inline"))
  {
    m_inline = jsonValue.GetObject("inline");
    m_inlineHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptFlowNodeSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

  if(m_inlineHasBeenSet)
  {
   payload.WithObject("inline", m_inline.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
