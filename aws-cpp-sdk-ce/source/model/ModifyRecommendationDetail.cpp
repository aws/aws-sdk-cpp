/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> targetInstancesJsonList = jsonValue.GetArray("TargetInstances");
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
   Array<JsonValue> targetInstancesJsonList(m_targetInstances.size());
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
