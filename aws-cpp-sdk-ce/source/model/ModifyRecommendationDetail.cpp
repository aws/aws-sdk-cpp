/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ModifyRecommendationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

ModifyRecommendationDetail::ModifyRecommendationDetail() : 
    m_targetInstancesHasBeenSet(false)
{
}

ModifyRecommendationDetail::ModifyRecommendationDetail(JsonView jsonValue) : 
    m_targetInstancesHasBeenSet(false)
{
  *this = jsonValue;
}

ModifyRecommendationDetail& ModifyRecommendationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TargetInstances"))
  {
    Aws::Utils::Array<JsonView> targetInstancesJsonList = jsonValue.GetArray("TargetInstances");
    for(unsigned targetInstancesIndex = 0; targetInstancesIndex < targetInstancesJsonList.GetLength(); ++targetInstancesIndex)
    {
      m_targetInstances.push_back(targetInstancesJsonList[targetInstancesIndex].AsObject());
    }
    m_targetInstancesHasBeenSet = true;
  }

  return *this;
}

JsonValue ModifyRecommendationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_targetInstancesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetInstancesJsonList(m_targetInstances.size());
   for(unsigned targetInstancesIndex = 0; targetInstancesIndex < targetInstancesJsonList.GetLength(); ++targetInstancesIndex)
   {
     targetInstancesJsonList[targetInstancesIndex].AsObject(m_targetInstances[targetInstancesIndex].Jsonize());
   }
   payload.WithArray("TargetInstances", std::move(targetInstancesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
