/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/VariableImportanceMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

VariableImportanceMetrics::VariableImportanceMetrics() : 
    m_logOddsMetricsHasBeenSet(false)
{
}

VariableImportanceMetrics::VariableImportanceMetrics(JsonView jsonValue) : 
    m_logOddsMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

VariableImportanceMetrics& VariableImportanceMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logOddsMetrics"))
  {
    Aws::Utils::Array<JsonView> logOddsMetricsJsonList = jsonValue.GetArray("logOddsMetrics");
    for(unsigned logOddsMetricsIndex = 0; logOddsMetricsIndex < logOddsMetricsJsonList.GetLength(); ++logOddsMetricsIndex)
    {
      m_logOddsMetrics.push_back(logOddsMetricsJsonList[logOddsMetricsIndex].AsObject());
    }
    m_logOddsMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue VariableImportanceMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_logOddsMetricsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logOddsMetricsJsonList(m_logOddsMetrics.size());
   for(unsigned logOddsMetricsIndex = 0; logOddsMetricsIndex < logOddsMetricsJsonList.GetLength(); ++logOddsMetricsIndex)
   {
     logOddsMetricsJsonList[logOddsMetricsIndex].AsObject(m_logOddsMetrics[logOddsMetricsIndex].Jsonize());
   }
   payload.WithArray("logOddsMetrics", std::move(logOddsMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
