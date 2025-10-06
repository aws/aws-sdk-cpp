/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/RightExpression.h>
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

RightExpression::RightExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

RightExpression& RightExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadataValue"))
  {
    m_metadataValue = jsonValue.GetObject("metadataValue");
    m_metadataValueHasBeenSet = true;
  }
  return *this;
}

JsonValue RightExpression::Jsonize() const
{
  JsonValue payload;

  if(m_metadataValueHasBeenSet)
  {
   payload.WithObject("metadataValue", m_metadataValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
