/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/KnowledgeBaseVectorSearchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

KnowledgeBaseVectorSearchConfiguration::KnowledgeBaseVectorSearchConfiguration() : 
    m_numberOfResults(0),
    m_numberOfResultsHasBeenSet(false),
    m_overrideSearchType(SearchType::NOT_SET),
    m_overrideSearchTypeHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

KnowledgeBaseVectorSearchConfiguration::KnowledgeBaseVectorSearchConfiguration(JsonView jsonValue)
  : KnowledgeBaseVectorSearchConfiguration()
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

  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetObject("filter");

    m_filterHasBeenSet = true;
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

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
