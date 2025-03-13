/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRuleAggregation.h>
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

ConfiguredTableAssociationAnalysisRuleAggregation::ConfiguredTableAssociationAnalysisRuleAggregation(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfiguredTableAssociationAnalysisRuleAggregation& ConfiguredTableAssociationAnalysisRuleAggregation::operator =(JsonView jsonValue)
{
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

JsonValue ConfiguredTableAssociationAnalysisRuleAggregation::Jsonize() const
{
  JsonValue payload;

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
