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
    m_logitMetricsHasBeenSet(false)
{
}

VariableImportanceMetrics::VariableImportanceMetrics(JsonView jsonValue) : 
    m_logitMetricsHasBeenSet(false)
{
  *this = jsonValue;
}

VariableImportanceMetrics& VariableImportanceMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogitMetrics"))
  {
    Array<JsonView> logitMetricsJsonList = jsonValue.GetArray("LogitMetrics");
    for(unsigned logitMetricsIndex = 0; logitMetricsIndex < logitMetricsJsonList.GetLength(); ++logitMetricsIndex)
    {
      m_logitMetrics.push_back(logitMetricsJsonList[logitMetricsIndex].AsObject());
    }
    m_logitMetricsHasBeenSet = true;
  }

  return *this;
}

JsonValue VariableImportanceMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_logitMetricsHasBeenSet)
  {
   Array<JsonValue> logitMetricsJsonList(m_logitMetrics.size());
   for(unsigned logitMetricsIndex = 0; logitMetricsIndex < logitMetricsJsonList.GetLength(); ++logitMetricsIndex)
   {
     logitMetricsJsonList[logitMetricsIndex].AsObject(m_logitMetrics[logitMetricsIndex].Jsonize());
   }
   payload.WithArray("LogitMetrics", std::move(logitMetricsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
