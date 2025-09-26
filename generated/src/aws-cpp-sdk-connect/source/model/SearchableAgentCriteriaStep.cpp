/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchableAgentCriteriaStep.h>
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

SearchableAgentCriteriaStep::SearchableAgentCriteriaStep(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchableAgentCriteriaStep& SearchableAgentCriteriaStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AgentIds"))
  {
    Aws::Utils::Array<JsonView> agentIdsJsonList = jsonValue.GetArray("AgentIds");
    for(unsigned agentIdsIndex = 0; agentIdsIndex < agentIdsJsonList.GetLength(); ++agentIdsIndex)
    {
      m_agentIds.push_back(agentIdsJsonList[agentIdsIndex].AsString());
    }
    m_agentIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MatchType"))
  {
    m_matchType = SearchContactsMatchTypeMapper::GetSearchContactsMatchTypeForName(jsonValue.GetString("MatchType"));
    m_matchTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchableAgentCriteriaStep::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentIdsJsonList(m_agentIds.size());
   for(unsigned agentIdsIndex = 0; agentIdsIndex < agentIdsJsonList.GetLength(); ++agentIdsIndex)
   {
     agentIdsJsonList[agentIdsIndex].AsString(m_agentIds[agentIdsIndex]);
   }
   payload.WithArray("AgentIds", std::move(agentIdsJsonList));

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
