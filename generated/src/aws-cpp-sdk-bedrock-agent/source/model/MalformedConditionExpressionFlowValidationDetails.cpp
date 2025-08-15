/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MalformedConditionExpressionFlowValidationDetails.h>
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

MalformedConditionExpressionFlowValidationDetails::MalformedConditionExpressionFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MalformedConditionExpressionFlowValidationDetails& MalformedConditionExpressionFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");
    m_nodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetString("condition");
    m_conditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");
    m_causeHasBeenSet = true;
  }
  return *this;
}

JsonValue MalformedConditionExpressionFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", m_condition);

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
