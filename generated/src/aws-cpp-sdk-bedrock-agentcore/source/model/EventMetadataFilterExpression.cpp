/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/EventMetadataFilterExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

EventMetadataFilterExpression::EventMetadataFilterExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

EventMetadataFilterExpression& EventMetadataFilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("left"))
  {
    m_left = jsonValue.GetObject("left");
    m_leftHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operator"))
  {
    m_operator = OperatorTypeMapper::GetOperatorTypeForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("right"))
  {
    m_right = jsonValue.GetObject("right");
    m_rightHasBeenSet = true;
  }
  return *this;
}

JsonValue EventMetadataFilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_leftHasBeenSet)
  {
   payload.WithObject("left", m_left.Jsonize());

  }

  if(m_operatorHasBeenSet)
  {
   payload.WithString("operator", OperatorTypeMapper::GetNameForOperatorType(m_operator));
  }

  if(m_rightHasBeenSet)
  {
   payload.WithObject("right", m_right.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
