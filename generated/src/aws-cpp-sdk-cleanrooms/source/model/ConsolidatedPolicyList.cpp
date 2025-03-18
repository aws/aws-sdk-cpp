/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConsolidatedPolicyList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ConsolidatedPolicyList::ConsolidatedPolicyList(JsonView jsonValue)
{
  *this = jsonValue;
}

ConsolidatedPolicyList& ConsolidatedPolicyList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("joinColumns"))
  {
    Aws::Utils::Array<JsonView> joinColumnsJsonList = jsonValue.GetArray("joinColumns");
    for(unsigned joinColumnsIndex = 0; joinColumnsIndex < joinColumnsJsonList.GetLength(); ++joinColumnsIndex)
    {
      m_joinColumns.push_back(joinColumnsJsonList[joinColumnsIndex].AsString());
    }
    m_joinColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedJoinOperators"))
  {
    Aws::Utils::Array<JsonView> allowedJoinOperatorsJsonList = jsonValue.GetArray("allowedJoinOperators");
    for(unsigned allowedJoinOperatorsIndex = 0; allowedJoinOperatorsIndex < allowedJoinOperatorsJsonList.GetLength(); ++allowedJoinOperatorsIndex)
    {
      m_allowedJoinOperators.push_back(JoinOperatorMapper::GetJoinOperatorForName(allowedJoinOperatorsJsonList[allowedJoinOperatorsIndex].AsString()));
    }
    m_allowedJoinOperatorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("listColumns"))
  {
    Aws::Utils::Array<JsonView> listColumnsJsonList = jsonValue.GetArray("listColumns");
    for(unsigned listColumnsIndex = 0; listColumnsIndex < listColumnsJsonList.GetLength(); ++listColumnsIndex)
    {
      m_listColumns.push_back(listColumnsJsonList[listColumnsIndex].AsString());
    }
    m_listColumnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalAnalyses"))
  {
    m_additionalAnalyses = AdditionalAnalysesMapper::GetAdditionalAnalysesForName(jsonValue.GetString("additionalAnalyses"));
    m_additionalAnalysesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedResultReceivers"))
  {
    Aws::Utils::Array<JsonView> allowedResultReceiversJsonList = jsonValue.GetArray("allowedResultReceivers");
    for(unsigned allowedResultReceiversIndex = 0; allowedResultReceiversIndex < allowedResultReceiversJsonList.GetLength(); ++allowedResultReceiversIndex)
    {
      m_allowedResultReceivers.push_back(allowedResultReceiversJsonList[allowedResultReceiversIndex].AsString());
    }
    m_allowedResultReceiversHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedAdditionalAnalyses"))
  {
    Aws::Utils::Array<JsonView> allowedAdditionalAnalysesJsonList = jsonValue.GetArray("allowedAdditionalAnalyses");
    for(unsigned allowedAdditionalAnalysesIndex = 0; allowedAdditionalAnalysesIndex < allowedAdditionalAnalysesJsonList.GetLength(); ++allowedAdditionalAnalysesIndex)
    {
      m_allowedAdditionalAnalyses.push_back(allowedAdditionalAnalysesJsonList[allowedAdditionalAnalysesIndex].AsString());
    }
    m_allowedAdditionalAnalysesHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsolidatedPolicyList::Jsonize() const
{
  JsonValue payload;

  if(m_joinColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> joinColumnsJsonList(m_joinColumns.size());
   for(unsigned joinColumnsIndex = 0; joinColumnsIndex < joinColumnsJsonList.GetLength(); ++joinColumnsIndex)
   {
     joinColumnsJsonList[joinColumnsIndex].AsString(m_joinColumns[joinColumnsIndex]);
   }
   payload.WithArray("joinColumns", std::move(joinColumnsJsonList));

  }

  if(m_allowedJoinOperatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedJoinOperatorsJsonList(m_allowedJoinOperators.size());
   for(unsigned allowedJoinOperatorsIndex = 0; allowedJoinOperatorsIndex < allowedJoinOperatorsJsonList.GetLength(); ++allowedJoinOperatorsIndex)
   {
     allowedJoinOperatorsJsonList[allowedJoinOperatorsIndex].AsString(JoinOperatorMapper::GetNameForJoinOperator(m_allowedJoinOperators[allowedJoinOperatorsIndex]));
   }
   payload.WithArray("allowedJoinOperators", std::move(allowedJoinOperatorsJsonList));

  }

  if(m_listColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> listColumnsJsonList(m_listColumns.size());
   for(unsigned listColumnsIndex = 0; listColumnsIndex < listColumnsJsonList.GetLength(); ++listColumnsIndex)
   {
     listColumnsJsonList[listColumnsIndex].AsString(m_listColumns[listColumnsIndex]);
   }
   payload.WithArray("listColumns", std::move(listColumnsJsonList));

  }

  if(m_additionalAnalysesHasBeenSet)
  {
   payload.WithString("additionalAnalyses", AdditionalAnalysesMapper::GetNameForAdditionalAnalyses(m_additionalAnalyses));
  }

  if(m_allowedResultReceiversHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedResultReceiversJsonList(m_allowedResultReceivers.size());
   for(unsigned allowedResultReceiversIndex = 0; allowedResultReceiversIndex < allowedResultReceiversJsonList.GetLength(); ++allowedResultReceiversIndex)
   {
     allowedResultReceiversJsonList[allowedResultReceiversIndex].AsString(m_allowedResultReceivers[allowedResultReceiversIndex]);
   }
   payload.WithArray("allowedResultReceivers", std::move(allowedResultReceiversJsonList));

  }

  if(m_allowedAdditionalAnalysesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedAdditionalAnalysesJsonList(m_allowedAdditionalAnalyses.size());
   for(unsigned allowedAdditionalAnalysesIndex = 0; allowedAdditionalAnalysesIndex < allowedAdditionalAnalysesJsonList.GetLength(); ++allowedAdditionalAnalysesIndex)
   {
     allowedAdditionalAnalysesJsonList[allowedAdditionalAnalysesIndex].AsString(m_allowedAdditionalAnalyses[allowedAdditionalAnalysesIndex]);
   }
   payload.WithArray("allowedAdditionalAnalyses", std::move(allowedAdditionalAnalysesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
