/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Span.h>
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

Span::Span() : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
}

Span::Span(JsonView jsonValue) : 
    m_end(0),
    m_endHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

Span& Span::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetInteger("end");

    m_endHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetInteger("start");

    m_startHasBeenSet = true;
  }

  return *this;
}

JsonValue Span::Jsonize() const
{
  JsonValue payload;

  if(m_endHasBeenSet)
  {
   payload.WithInteger("end", m_end);

  }

  if(m_startHasBeenSet)
  {
   payload.WithInteger("start", m_start);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
