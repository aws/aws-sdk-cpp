/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DimensionContribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

DimensionContribution::DimensionContribution() : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueContributionListHasBeenSet(false)
{
}

DimensionContribution::DimensionContribution(JsonView jsonValue) : 
    m_dimensionNameHasBeenSet(false),
    m_dimensionValueContributionListHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionContribution& DimensionContribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionName"))
  {
    m_dimensionName = jsonValue.GetString("DimensionName");

    m_dimensionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DimensionValueContributionList"))
  {
    Aws::Utils::Array<JsonView> dimensionValueContributionListJsonList = jsonValue.GetArray("DimensionValueContributionList");
    for(unsigned dimensionValueContributionListIndex = 0; dimensionValueContributionListIndex < dimensionValueContributionListJsonList.GetLength(); ++dimensionValueContributionListIndex)
    {
      m_dimensionValueContributionList.push_back(dimensionValueContributionListJsonList[dimensionValueContributionListIndex].AsObject());
    }
    m_dimensionValueContributionListHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionContribution::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionNameHasBeenSet)
  {
   payload.WithString("DimensionName", m_dimensionName);

  }

  if(m_dimensionValueContributionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionValueContributionListJsonList(m_dimensionValueContributionList.size());
   for(unsigned dimensionValueContributionListIndex = 0; dimensionValueContributionListIndex < dimensionValueContributionListJsonList.GetLength(); ++dimensionValueContributionListIndex)
   {
     dimensionValueContributionListJsonList[dimensionValueContributionListIndex].AsObject(m_dimensionValueContributionList[dimensionValueContributionListIndex].Jsonize());
   }
   payload.WithArray("DimensionValueContributionList", std::move(dimensionValueContributionListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
