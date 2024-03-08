/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/KnowledgeBaseVectorSearchConfiguration.h>
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

KnowledgeBaseVectorSearchConfiguration::KnowledgeBaseVectorSearchConfiguration() : 
    m_numberOfResults(0),
    m_numberOfResultsHasBeenSet(false),
    m_overrideSearchType(SearchType::NOT_SET),
    m_overrideSearchTypeHasBeenSet(false)
{
}

KnowledgeBaseVectorSearchConfiguration::KnowledgeBaseVectorSearchConfiguration(JsonView jsonValue) : 
    m_numberOfResults(0),
    m_numberOfResultsHasBeenSet(false),
    m_overrideSearchType(SearchType::NOT_SET),
    m_overrideSearchTypeHasBeenSet(false)
{
  *this = jsonValue;
}

KnowledgeBaseVectorSearchConfiguration& KnowledgeBaseVectorSearchConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfResults"))
  {
    m_numberOfResults = jsonValue.GetInteger("numberOfResults");

    m_numberOfResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrideSearchType"))
  {
    m_overrideSearchType = SearchTypeMapper::GetSearchTypeForName(jsonValue.GetString("overrideSearchType"));

    m_overrideSearchTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue KnowledgeBaseVectorSearchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfResultsHasBeenSet)
  {
   payload.WithInteger("numberOfResults", m_numberOfResults);

  }

  if(m_overrideSearchTypeHasBeenSet)
  {
   payload.WithString("overrideSearchType", SearchTypeMapper::GetNameForSearchType(m_overrideSearchType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
