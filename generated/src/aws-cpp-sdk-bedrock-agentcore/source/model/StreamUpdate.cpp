/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/StreamUpdate.h>
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

StreamUpdate::StreamUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

StreamUpdate& StreamUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("automationStreamUpdate"))
  {
    m_automationStreamUpdate = jsonValue.GetObject("automationStreamUpdate");
    m_automationStreamUpdateHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_automationStreamUpdateHasBeenSet)
  {
   payload.WithObject("automationStreamUpdate", m_automationStreamUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
