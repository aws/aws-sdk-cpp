/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityAggregatedMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityAggregatedMetrics::DataQualityAggregatedMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

DataQualityAggregatedMetrics& DataQualityAggregatedMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalRowsProcessed"))
  {
    m_totalRowsProcessed = jsonValue.GetDouble("TotalRowsProcessed");
    m_totalRowsProcessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRowsPassed"))
  {
    m_totalRowsPassed = jsonValue.GetDouble("TotalRowsPassed");
    m_totalRowsPassedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRowsFailed"))
  {
    m_totalRowsFailed = jsonValue.GetDouble("TotalRowsFailed");
    m_totalRowsFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRulesProcessed"))
  {
    m_totalRulesProcessed = jsonValue.GetDouble("TotalRulesProcessed");
    m_totalRulesProcessedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRulesPassed"))
  {
    m_totalRulesPassed = jsonValue.GetDouble("TotalRulesPassed");
    m_totalRulesPassedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRulesFailed"))
  {
    m_totalRulesFailed = jsonValue.GetDouble("TotalRulesFailed");
    m_totalRulesFailedHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityAggregatedMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_totalRowsProcessedHasBeenSet)
  {
   payload.WithDouble("TotalRowsProcessed", m_totalRowsProcessed);

  }

  if(m_totalRowsPassedHasBeenSet)
  {
   payload.WithDouble("TotalRowsPassed", m_totalRowsPassed);

  }

  if(m_totalRowsFailedHasBeenSet)
  {
   payload.WithDouble("TotalRowsFailed", m_totalRowsFailed);

  }

  if(m_totalRulesProcessedHasBeenSet)
  {
   payload.WithDouble("TotalRulesProcessed", m_totalRulesProcessed);

  }

  if(m_totalRulesPassedHasBeenSet)
  {
   payload.WithDouble("TotalRulesPassed", m_totalRulesPassed);

  }

  if(m_totalRulesFailedHasBeenSet)
  {
   payload.WithDouble("TotalRulesFailed", m_totalRulesFailed);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
