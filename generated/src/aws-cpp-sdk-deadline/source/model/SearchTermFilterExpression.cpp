/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchTermFilterExpression.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

SearchTermFilterExpression::SearchTermFilterExpression(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchTermFilterExpression& SearchTermFilterExpression::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("searchTerm"))
  {
    m_searchTerm = jsonValue.GetString("searchTerm");
    m_searchTermHasBeenSet = true;
  }
  if(jsonValue.ValueExists("matchType"))
  {
    m_matchType = SearchTermMatchingTypeMapper::GetSearchTermMatchingTypeForName(jsonValue.GetString("matchType"));
    m_matchTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchTermFilterExpression::Jsonize() const
{
  JsonValue payload;

  if(m_searchTermHasBeenSet)
  {
   payload.WithString("searchTerm", m_searchTerm);

  }

  if(m_matchTypeHasBeenSet)
  {
   payload.WithString("matchType", SearchTermMatchingTypeMapper::GetNameForSearchTermMatchingType(m_matchType));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
