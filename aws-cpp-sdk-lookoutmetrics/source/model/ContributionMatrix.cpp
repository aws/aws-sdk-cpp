/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ContributionMatrix.h>
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

ContributionMatrix::ContributionMatrix() : 
    m_dimensionContributionListHasBeenSet(false)
{
}

ContributionMatrix::ContributionMatrix(JsonView jsonValue) : 
    m_dimensionContributionListHasBeenSet(false)
{
  *this = jsonValue;
}

ContributionMatrix& ContributionMatrix::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionContributionList"))
  {
    Aws::Utils::Array<JsonView> dimensionContributionListJsonList = jsonValue.GetArray("DimensionContributionList");
    for(unsigned dimensionContributionListIndex = 0; dimensionContributionListIndex < dimensionContributionListJsonList.GetLength(); ++dimensionContributionListIndex)
    {
      m_dimensionContributionList.push_back(dimensionContributionListJsonList[dimensionContributionListIndex].AsObject());
    }
    m_dimensionContributionListHasBeenSet = true;
  }

  return *this;
}

JsonValue ContributionMatrix::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionContributionListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dimensionContributionListJsonList(m_dimensionContributionList.size());
   for(unsigned dimensionContributionListIndex = 0; dimensionContributionListIndex < dimensionContributionListJsonList.GetLength(); ++dimensionContributionListIndex)
   {
     dimensionContributionListJsonList[dimensionContributionListIndex].AsObject(m_dimensionContributionList[dimensionContributionListIndex].Jsonize());
   }
   payload.WithArray("DimensionContributionList", std::move(dimensionContributionListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
