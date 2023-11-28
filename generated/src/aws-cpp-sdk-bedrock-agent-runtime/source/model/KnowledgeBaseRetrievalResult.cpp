/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/KnowledgeBaseRetrievalResult.h>
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

KnowledgeBaseRetrievalResult::KnowledgeBaseRetrievalResult() : 
    m_contentHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

KnowledgeBaseRetrievalResult::KnowledgeBaseRetrievalResult(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

KnowledgeBaseRetrievalResult& KnowledgeBaseRetrievalResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue KnowledgeBaseRetrievalResult::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
