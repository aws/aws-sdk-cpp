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

#include <aws/compute-optimizer/model/RecommendationSummary.h>
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

RecommendationSummary::RecommendationSummary() : 
    m_summariesHasBeenSet(false),
    m_recommendationResourceType(RecommendationSourceType::NOT_SET),
    m_recommendationResourceTypeHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

RecommendationSummary::RecommendationSummary(JsonView jsonValue) : 
    m_summariesHasBeenSet(false),
    m_recommendationResourceType(RecommendationSourceType::NOT_SET),
    m_recommendationResourceTypeHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationSummary& RecommendationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("summaries"))
  {
    Array<JsonView> summariesJsonList = jsonValue.GetArray("summaries");
    for(unsigned summariesIndex = 0; summariesIndex < summariesJsonList.GetLength(); ++summariesIndex)
    {
      m_summaries.push_back(summariesJsonList[summariesIndex].AsObject());
    }
    m_summariesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationResourceType"))
  {
    m_recommendationResourceType = RecommendationSourceTypeMapper::GetRecommendationSourceTypeForName(jsonValue.GetString("recommendationResourceType"));

    m_recommendationResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_summariesHasBeenSet)
  {
   Array<JsonValue> summariesJsonList(m_summaries.size());
   for(unsigned summariesIndex = 0; summariesIndex < summariesJsonList.GetLength(); ++summariesIndex)
   {
     summariesJsonList[summariesIndex].AsObject(m_summaries[summariesIndex].Jsonize());
   }
   payload.WithArray("summaries", std::move(summariesJsonList));

  }

  if(m_recommendationResourceTypeHasBeenSet)
  {
   payload.WithString("recommendationResourceType", RecommendationSourceTypeMapper::GetNameForRecommendationSourceType(m_recommendationResourceType));
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
