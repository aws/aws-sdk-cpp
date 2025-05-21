/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/SatisfiedCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

SatisfiedCondition::SatisfiedCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

SatisfiedCondition& SatisfiedCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conditionName"))
  {
    m_conditionName = jsonValue.GetString("conditionName");
    m_conditionNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SatisfiedCondition::Jsonize() const
{
  JsonValue payload;

  if(m_conditionNameHasBeenSet)
  {
   payload.WithString("conditionName", m_conditionName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
