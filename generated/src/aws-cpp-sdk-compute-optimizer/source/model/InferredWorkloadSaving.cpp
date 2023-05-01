/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/InferredWorkloadSaving.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

InferredWorkloadSaving::InferredWorkloadSaving() : 
    m_inferredWorkloadTypesHasBeenSet(false),
    m_estimatedMonthlySavingsHasBeenSet(false)
{
}

InferredWorkloadSaving::InferredWorkloadSaving(JsonView jsonValue) : 
    m_inferredWorkloadTypesHasBeenSet(false),
    m_estimatedMonthlySavingsHasBeenSet(false)
{
  *this = jsonValue;
}

InferredWorkloadSaving& InferredWorkloadSaving::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inferredWorkloadTypes"))
  {
    Aws::Utils::Array<JsonView> inferredWorkloadTypesJsonList = jsonValue.GetArray("inferredWorkloadTypes");
    for(unsigned inferredWorkloadTypesIndex = 0; inferredWorkloadTypesIndex < inferredWorkloadTypesJsonList.GetLength(); ++inferredWorkloadTypesIndex)
    {
      m_inferredWorkloadTypes.push_back(InferredWorkloadTypeMapper::GetInferredWorkloadTypeForName(inferredWorkloadTypesJsonList[inferredWorkloadTypesIndex].AsString()));
    }
    m_inferredWorkloadTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("estimatedMonthlySavings"))
  {
    m_estimatedMonthlySavings = jsonValue.GetObject("estimatedMonthlySavings");

    m_estimatedMonthlySavingsHasBeenSet = true;
  }

  return *this;
}

JsonValue InferredWorkloadSaving::Jsonize() const
{
  JsonValue payload;

  if(m_inferredWorkloadTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inferredWorkloadTypesJsonList(m_inferredWorkloadTypes.size());
   for(unsigned inferredWorkloadTypesIndex = 0; inferredWorkloadTypesIndex < inferredWorkloadTypesJsonList.GetLength(); ++inferredWorkloadTypesIndex)
   {
     inferredWorkloadTypesJsonList[inferredWorkloadTypesIndex].AsString(InferredWorkloadTypeMapper::GetNameForInferredWorkloadType(m_inferredWorkloadTypes[inferredWorkloadTypesIndex]));
   }
   payload.WithArray("inferredWorkloadTypes", std::move(inferredWorkloadTypesJsonList));

  }

  if(m_estimatedMonthlySavingsHasBeenSet)
  {
   payload.WithObject("estimatedMonthlySavings", m_estimatedMonthlySavings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
