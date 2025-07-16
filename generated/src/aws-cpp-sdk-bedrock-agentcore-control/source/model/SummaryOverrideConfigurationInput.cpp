/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SummaryOverrideConfigurationInput.h>
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

SummaryOverrideConfigurationInput::SummaryOverrideConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

SummaryOverrideConfigurationInput& SummaryOverrideConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consolidation"))
  {
    m_consolidation = jsonValue.GetObject("consolidation");
    m_consolidationHasBeenSet = true;
  }
  return *this;
}

JsonValue SummaryOverrideConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_consolidationHasBeenSet)
  {
   payload.WithObject("consolidation", m_consolidation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
