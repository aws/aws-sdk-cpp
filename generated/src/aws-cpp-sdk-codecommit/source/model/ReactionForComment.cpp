/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ReactionForComment.h>
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

ReactionForComment::ReactionForComment() : 
    m_reactionHasBeenSet(false),
    m_reactionUsersHasBeenSet(false),
    m_reactionsFromDeletedUsersCount(0),
    m_reactionsFromDeletedUsersCountHasBeenSet(false)
{
}

ReactionForComment::ReactionForComment(JsonView jsonValue) : 
    m_reactionHasBeenSet(false),
    m_reactionUsersHasBeenSet(false),
    m_reactionsFromDeletedUsersCount(0),
    m_reactionsFromDeletedUsersCountHasBeenSet(false)
{
  *this = jsonValue;
}

ReactionForComment& ReactionForComment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reaction"))
  {
    m_reaction = jsonValue.GetObject("reaction");

    m_reactionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reactionUsers"))
  {
    Aws::Utils::Array<JsonView> reactionUsersJsonList = jsonValue.GetArray("reactionUsers");
    for(unsigned reactionUsersIndex = 0; reactionUsersIndex < reactionUsersJsonList.GetLength(); ++reactionUsersIndex)
    {
      m_reactionUsers.push_back(reactionUsersJsonList[reactionUsersIndex].AsString());
    }
    m_reactionUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reactionsFromDeletedUsersCount"))
  {
    m_reactionsFromDeletedUsersCount = jsonValue.GetInteger("reactionsFromDeletedUsersCount");

    m_reactionsFromDeletedUsersCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ReactionForComment::Jsonize() const
{
  JsonValue payload;

  if(m_reactionHasBeenSet)
  {
   payload.WithObject("reaction", m_reaction.Jsonize());

  }

  if(m_reactionUsersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reactionUsersJsonList(m_reactionUsers.size());
   for(unsigned reactionUsersIndex = 0; reactionUsersIndex < reactionUsersJsonList.GetLength(); ++reactionUsersIndex)
   {
     reactionUsersJsonList[reactionUsersIndex].AsString(m_reactionUsers[reactionUsersIndex]);
   }
   payload.WithArray("reactionUsers", std::move(reactionUsersJsonList));

  }

  if(m_reactionsFromDeletedUsersCountHasBeenSet)
  {
   payload.WithInteger("reactionsFromDeletedUsersCount", m_reactionsFromDeletedUsersCount);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
