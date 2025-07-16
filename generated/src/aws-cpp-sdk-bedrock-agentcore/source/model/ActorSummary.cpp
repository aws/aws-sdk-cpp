/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ActorSummary.h>
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

ActorSummary::ActorSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ActorSummary& ActorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actorId"))
  {
    m_actorId = jsonValue.GetString("actorId");
    m_actorIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ActorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_actorIdHasBeenSet)
  {
   payload.WithString("actorId", m_actorId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
