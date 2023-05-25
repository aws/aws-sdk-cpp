/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/PerformanceInsightsMetricDimensionGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

PerformanceInsightsMetricDimensionGroup::PerformanceInsightsMetricDimensionGroup() : 
    m_groupHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

PerformanceInsightsMetricDimensionGroup::PerformanceInsightsMetricDimensionGroup(JsonView jsonValue) : 
    m_groupHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceInsightsMetricDimensionGroup& PerformanceInsightsMetricDimensionGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Group"))
  {
    m_group = jsonValue.GetString("Group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Dimensions"))
  {
    Aws::Utils::Array<JsonView> dimensionsJsonList = jsonValue.GetArray("Dimensions");
    for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
    {
      m_dimensions.push_back(dimensionsJsonList[dimensionsIndex].AsString());
    }
    m_dimensionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetInteger("Limit");

    m_limitHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceInsightsMetricDimensionGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupHasBeenSet)
  {
   payload.WithString("Group", m_group);

  }

  if(m_dimensionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionsJsonList(m_dimensions.size());
   for(unsigned dimensionsIndex = 0; dimensionsIndex < dimensionsJsonList.GetLength(); ++dimensionsIndex)
   {
     dimensionsJsonList[dimensionsIndex].AsString(m_dimensions[dimensionsIndex]);
   }
   payload.WithArray("Dimensions", std::move(dimensionsJsonList));

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
