/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MissingLoopInputNodeFlowValidationDetails.h>
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

MissingLoopInputNodeFlowValidationDetails::MissingLoopInputNodeFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MissingLoopInputNodeFlowValidationDetails& MissingLoopInputNodeFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("loopNode"))
  {
    m_loopNode = jsonValue.GetString("loopNode");
    m_loopNodeHasBeenSet = true;
  }
  return *this;
}

JsonValue MissingLoopInputNodeFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_loopNodeHasBeenSet)
  {
   payload.WithString("loopNode", m_loopNode);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
