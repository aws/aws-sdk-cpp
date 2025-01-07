/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/CitationEvent.h>
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

CitationEvent::CitationEvent() : 
    m_citationHasBeenSet(false)
{
}

CitationEvent::CitationEvent(JsonView jsonValue)
  : CitationEvent()
{
  *this = jsonValue;
}

CitationEvent& CitationEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("citation"))
  {
    m_citation = jsonValue.GetObject("citation");

    m_citationHasBeenSet = true;
  }

  return *this;
}

JsonValue CitationEvent::Jsonize() const
{
  JsonValue payload;

  if(m_citationHasBeenSet)
  {
   payload.WithObject("citation", m_citation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
