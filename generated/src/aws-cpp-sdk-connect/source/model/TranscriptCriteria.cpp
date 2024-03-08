/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TranscriptCriteria.h>
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

TranscriptCriteria::TranscriptCriteria() : 
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_searchTextHasBeenSet(false),
    m_matchType(SearchContactsMatchType::NOT_SET),
    m_matchTypeHasBeenSet(false)
{
}

TranscriptCriteria::TranscriptCriteria(JsonView jsonValue) : 
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_searchTextHasBeenSet(false),
    m_matchType(SearchContactsMatchType::NOT_SET),
    m_matchTypeHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptCriteria& TranscriptCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

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

JsonValue TranscriptCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

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
