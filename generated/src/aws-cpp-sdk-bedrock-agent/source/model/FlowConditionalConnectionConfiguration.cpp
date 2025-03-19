/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowConditionalConnectionConfiguration.h>
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

FlowConditionalConnectionConfiguration::FlowConditionalConnectionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowConditionalConnectionConfiguration& FlowConditionalConnectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetString("condition");
    m_conditionHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowConditionalConnectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", m_condition);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
