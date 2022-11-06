/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/MatchItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

MatchItem::MatchItem() : 
    m_matchIdHasBeenSet(false),
    m_profileIdsHasBeenSet(false),
    m_confidenceScore(0.0),
    m_confidenceScoreHasBeenSet(false)
{
}

MatchItem::MatchItem(JsonView jsonValue) : 
    m_matchIdHasBeenSet(false),
    m_profileIdsHasBeenSet(false),
    m_confidenceScore(0.0),
    m_confidenceScoreHasBeenSet(false)
{
  *this = jsonValue;
}

MatchItem& MatchItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MatchId"))
  {
    m_matchId = jsonValue.GetString("MatchId");

    m_matchIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProfileIds"))
  {
    Aws::Utils::Array<JsonView> profileIdsJsonList = jsonValue.GetArray("ProfileIds");
    for(unsigned profileIdsIndex = 0; profileIdsIndex < profileIdsJsonList.GetLength(); ++profileIdsIndex)
    {
      m_profileIds.push_back(profileIdsJsonList[profileIdsIndex].AsString());
    }
    m_profileIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfidenceScore"))
  {
    m_confidenceScore = jsonValue.GetDouble("ConfidenceScore");

    m_confidenceScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchItem::Jsonize() const
{
  JsonValue payload;

  if(m_matchIdHasBeenSet)
  {
   payload.WithString("MatchId", m_matchId);

  }

  if(m_profileIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> profileIdsJsonList(m_profileIds.size());
   for(unsigned profileIdsIndex = 0; profileIdsIndex < profileIdsJsonList.GetLength(); ++profileIdsIndex)
   {
     profileIdsJsonList[profileIdsIndex].AsString(m_profileIds[profileIdsIndex]);
   }
   payload.WithArray("ProfileIds", std::move(profileIdsJsonList));

  }

  if(m_confidenceScoreHasBeenSet)
  {
   payload.WithDouble("ConfidenceScore", m_confidenceScore);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
