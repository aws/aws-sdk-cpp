/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MalformedNodeInputExpressionFlowValidationDetails.h>
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

MalformedNodeInputExpressionFlowValidationDetails::MalformedNodeInputExpressionFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MalformedNodeInputExpressionFlowValidationDetails& MalformedNodeInputExpressionFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");
    m_nodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");
    m_inputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");
    m_causeHasBeenSet = true;
  }
  return *this;
}

JsonValue MalformedNodeInputExpressionFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", m_cause);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
