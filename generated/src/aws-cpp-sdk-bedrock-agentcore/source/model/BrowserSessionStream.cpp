/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/BrowserSessionStream.h>
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

BrowserSessionStream::BrowserSessionStream(JsonView jsonValue)
{
  *this = jsonValue;
}

BrowserSessionStream& BrowserSessionStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("automationStream"))
  {
    m_automationStream = jsonValue.GetObject("automationStream");
    m_automationStreamHasBeenSet = true;
  }
  if(jsonValue.ValueExists("liveViewStream"))
  {
    m_liveViewStream = jsonValue.GetObject("liveViewStream");
    m_liveViewStreamHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserSessionStream::Jsonize() const
{
  JsonValue payload;

  if(m_automationStreamHasBeenSet)
  {
   payload.WithObject("automationStream", m_automationStream.Jsonize());

  }

  if(m_liveViewStreamHasBeenSet)
  {
   payload.WithObject("liveViewStream", m_liveViewStream.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
