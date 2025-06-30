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

KnowledgeBaseVectorSearchConfiguration::KnowledgeBaseVectorSearchConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("implicitFilterConfiguration"))
  {
    m_implicitFilterConfiguration = jsonValue.GetObject("implicitFilterConfiguration");
    m_implicitFilterConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rerankingConfiguration"))
  {
    m_rerankingConfiguration = jsonValue.GetObject("rerankingConfiguration");
    m_rerankingConfigurationHasBeenSet = true;
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

  if(m_implicitFilterConfigurationHasBeenSet)
  {
   payload.WithObject("implicitFilterConfiguration", m_implicitFilterConfiguration.Jsonize());

  }

  if(m_rerankingConfigurationHasBeenSet)
  {
   payload.WithObject("rerankingConfiguration", m_rerankingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
