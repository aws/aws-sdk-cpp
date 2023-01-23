/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/Comment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

Comment::Comment() : 
    m_commentIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_inReplyToHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_authorArnHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_callerReactionsHasBeenSet(false),
    m_reactionCountsHasBeenSet(false)
{
}

Comment::Comment(JsonView jsonValue) : 
    m_commentIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_inReplyToHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_authorArnHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_callerReactionsHasBeenSet(false),
    m_reactionCountsHasBeenSet(false)
{
  *this = jsonValue;
}

Comment& Comment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("commentId"))
  {
    m_commentId = jsonValue.GetString("commentId");

    m_commentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inReplyTo"))
  {
    m_inReplyTo = jsonValue.GetString("inReplyTo");

    m_inReplyToHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorArn"))
  {
    m_authorArn = jsonValue.GetString("authorArn");

    m_authorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deleted"))
  {
    m_deleted = jsonValue.GetBool("deleted");

    m_deletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

    m_clientRequestTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("callerReactions"))
  {
    Aws::Utils::Array<JsonView> callerReactionsJsonList = jsonValue.GetArray("callerReactions");
    for(unsigned callerReactionsIndex = 0; callerReactionsIndex < callerReactionsJsonList.GetLength(); ++callerReactionsIndex)
    {
      m_callerReactions.push_back(callerReactionsJsonList[callerReactionsIndex].AsString());
    }
    m_callerReactionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reactionCounts"))
  {
    Aws::Map<Aws::String, JsonView> reactionCountsJsonMap = jsonValue.GetObject("reactionCounts").GetAllObjects();
    for(auto& reactionCountsItem : reactionCountsJsonMap)
    {
      m_reactionCounts[reactionCountsItem.first] = reactionCountsItem.second.AsInteger();
    }
    m_reactionCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue Comment::Jsonize() const
{
  JsonValue payload;

  if(m_commentIdHasBeenSet)
  {
   payload.WithString("commentId", m_commentId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_inReplyToHasBeenSet)
  {
   payload.WithString("inReplyTo", m_inReplyTo);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_authorArnHasBeenSet)
  {
   payload.WithString("authorArn", m_authorArn);

  }

  if(m_deletedHasBeenSet)
  {
   payload.WithBool("deleted", m_deleted);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_callerReactionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> callerReactionsJsonList(m_callerReactions.size());
   for(unsigned callerReactionsIndex = 0; callerReactionsIndex < callerReactionsJsonList.GetLength(); ++callerReactionsIndex)
   {
     callerReactionsJsonList[callerReactionsIndex].AsString(m_callerReactions[callerReactionsIndex]);
   }
   payload.WithArray("callerReactions", std::move(callerReactionsJsonList));

  }

  if(m_reactionCountsHasBeenSet)
  {
   JsonValue reactionCountsJsonMap;
   for(auto& reactionCountsItem : m_reactionCounts)
   {
     reactionCountsJsonMap.WithInteger(reactionCountsItem.first, reactionCountsItem.second);
   }
   payload.WithObject("reactionCounts", std::move(reactionCountsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
