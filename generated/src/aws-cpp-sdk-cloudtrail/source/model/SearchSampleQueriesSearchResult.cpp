/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/SearchSampleQueriesSearchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

SearchSampleQueriesSearchResult::SearchSampleQueriesSearchResult(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchSampleQueriesSearchResult& SearchSampleQueriesSearchResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SQL"))
  {
    m_sQL = jsonValue.GetString("SQL");
    m_sQLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Relevance"))
  {
    m_relevance = jsonValue.GetDouble("Relevance");
    m_relevanceHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchSampleQueriesSearchResult::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sQLHasBeenSet)
  {
   payload.WithString("SQL", m_sQL);

  }

  if(m_relevanceHasBeenSet)
  {
   payload.WithDouble("Relevance", m_relevance);

  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
