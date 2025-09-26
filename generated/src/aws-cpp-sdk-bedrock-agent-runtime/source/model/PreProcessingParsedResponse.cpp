/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PreProcessingParsedResponse.h>
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

PreProcessingParsedResponse::PreProcessingParsedResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

PreProcessingParsedResponse& PreProcessingParsedResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rationale"))
  {
    m_rationale = jsonValue.GetString("rationale");
    m_rationaleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isValid"))
  {
    m_isValid = jsonValue.GetBool("isValid");
    m_isValidHasBeenSet = true;
  }
  return *this;
}

JsonValue PreProcessingParsedResponse::Jsonize() const
{
  JsonValue payload;

  if(m_rationaleHasBeenSet)
  {
   payload.WithString("rationale", m_rationale);

  }

  if(m_isValidHasBeenSet)
  {
   payload.WithBool("isValid", m_isValid);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
