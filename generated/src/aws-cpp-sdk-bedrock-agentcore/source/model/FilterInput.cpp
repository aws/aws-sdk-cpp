/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/FilterInput.h>
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

FilterInput::FilterInput(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterInput& FilterInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetObject("branch");
    m_branchHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterInput::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithObject("branch", m_branch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
