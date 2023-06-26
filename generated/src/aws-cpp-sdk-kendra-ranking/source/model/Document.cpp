/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/Document.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KendraRanking
{
namespace Model
{

Document::Document() : 
    m_idHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_tokenizedTitleHasBeenSet(false),
    m_tokenizedBodyHasBeenSet(false),
    m_originalScore(0.0),
    m_originalScoreHasBeenSet(false)
{
}

Document::Document(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_tokenizedTitleHasBeenSet(false),
    m_tokenizedBodyHasBeenSet(false),
    m_originalScore(0.0),
    m_originalScoreHasBeenSet(false)
{
  *this = jsonValue;
}

Document& Document::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenizedTitle"))
  {
    Aws::Utils::Array<JsonView> tokenizedTitleJsonList = jsonValue.GetArray("TokenizedTitle");
    for(unsigned tokenizedTitleIndex = 0; tokenizedTitleIndex < tokenizedTitleJsonList.GetLength(); ++tokenizedTitleIndex)
    {
      m_tokenizedTitle.push_back(tokenizedTitleJsonList[tokenizedTitleIndex].AsString());
    }
    m_tokenizedTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenizedBody"))
  {
    Aws::Utils::Array<JsonView> tokenizedBodyJsonList = jsonValue.GetArray("TokenizedBody");
    for(unsigned tokenizedBodyIndex = 0; tokenizedBodyIndex < tokenizedBodyJsonList.GetLength(); ++tokenizedBodyIndex)
    {
      m_tokenizedBody.push_back(tokenizedBodyJsonList[tokenizedBodyIndex].AsString());
    }
    m_tokenizedBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginalScore"))
  {
    m_originalScore = jsonValue.GetDouble("OriginalScore");

    m_originalScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue Document::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_tokenizedTitleHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenizedTitleJsonList(m_tokenizedTitle.size());
   for(unsigned tokenizedTitleIndex = 0; tokenizedTitleIndex < tokenizedTitleJsonList.GetLength(); ++tokenizedTitleIndex)
   {
     tokenizedTitleJsonList[tokenizedTitleIndex].AsString(m_tokenizedTitle[tokenizedTitleIndex]);
   }
   payload.WithArray("TokenizedTitle", std::move(tokenizedTitleJsonList));

  }

  if(m_tokenizedBodyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tokenizedBodyJsonList(m_tokenizedBody.size());
   for(unsigned tokenizedBodyIndex = 0; tokenizedBodyIndex < tokenizedBodyJsonList.GetLength(); ++tokenizedBodyIndex)
   {
     tokenizedBodyJsonList[tokenizedBodyIndex].AsString(m_tokenizedBody[tokenizedBodyIndex]);
   }
   payload.WithArray("TokenizedBody", std::move(tokenizedBodyJsonList));

  }

  if(m_originalScoreHasBeenSet)
  {
   payload.WithDouble("OriginalScore", m_originalScore);

  }

  return payload;
}

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
