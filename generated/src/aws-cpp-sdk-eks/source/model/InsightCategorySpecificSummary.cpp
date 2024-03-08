/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/InsightCategorySpecificSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

InsightCategorySpecificSummary::InsightCategorySpecificSummary() : 
    m_deprecationDetailsHasBeenSet(false)
{
}

InsightCategorySpecificSummary::InsightCategorySpecificSummary(JsonView jsonValue) : 
    m_deprecationDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

InsightCategorySpecificSummary& InsightCategorySpecificSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deprecationDetails"))
  {
    Aws::Utils::Array<JsonView> deprecationDetailsJsonList = jsonValue.GetArray("deprecationDetails");
    for(unsigned deprecationDetailsIndex = 0; deprecationDetailsIndex < deprecationDetailsJsonList.GetLength(); ++deprecationDetailsIndex)
    {
      m_deprecationDetails.push_back(deprecationDetailsJsonList[deprecationDetailsIndex].AsObject());
    }
    m_deprecationDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightCategorySpecificSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deprecationDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deprecationDetailsJsonList(m_deprecationDetails.size());
   for(unsigned deprecationDetailsIndex = 0; deprecationDetailsIndex < deprecationDetailsJsonList.GetLength(); ++deprecationDetailsIndex)
   {
     deprecationDetailsJsonList[deprecationDetailsIndex].AsObject(m_deprecationDetails[deprecationDetailsIndex].Jsonize());
   }
   payload.WithArray("deprecationDetails", std::move(deprecationDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
