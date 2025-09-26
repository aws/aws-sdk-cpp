/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/NameCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

NameCriteria::NameCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

NameCriteria& NameCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SearchText"))
  {
    Aws::Utils::Array<JsonView> searchTextJsonList = jsonValue.GetArray("SearchText");
    for(unsigned searchTextIndex = 0; searchTextIndex < searchTextJsonList.GetLength(); ++searchTextIndex)
    {
      m_searchText.push_back(searchTextJsonList[searchTextIndex].AsString());
    }
    m_searchTextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchType"))
  {
    m_matchType = SearchContactsMatchTypeMapper::GetSearchContactsMatchTypeForName(jsonValue.GetString("MatchType"));
    m_matchTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue NameCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_searchTextHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> searchTextJsonList(m_searchText.size());
   for(unsigned searchTextIndex = 0; searchTextIndex < searchTextJsonList.GetLength(); ++searchTextIndex)
   {
     searchTextJsonList[searchTextIndex].AsString(m_searchText[searchTextIndex]);
   }
   payload.WithArray("SearchText", std::move(searchTextJsonList));

  }

  if(m_matchTypeHasBeenSet)
  {
   payload.WithString("MatchType", SearchContactsMatchTypeMapper::GetNameForSearchContactsMatchType(m_matchType));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
