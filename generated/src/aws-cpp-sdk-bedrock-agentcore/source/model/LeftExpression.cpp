/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LeftExpression.h>
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

LeftExpression::LeftExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

LeftExpression& LeftExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadataKey"))
  {
    m_metadataKey = jsonValue.GetString("metadataKey");
    m_metadataKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue LeftExpression::Jsonize() const
{
  JsonValue payload;

  if(m_metadataKeyHasBeenSet)
  {
   payload.WithString("metadataKey", m_metadataKey);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
