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

#include <aws/compute-optimizer/model/RecommendationSource.h>
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

RecommendationSource::RecommendationSource() : 
    m_recommendationSourceArnHasBeenSet(false),
    m_recommendationSourceType(RecommendationSourceType::NOT_SET),
    m_recommendationSourceTypeHasBeenSet(false)
{
}

RecommendationSource::RecommendationSource(JsonView jsonValue) : 
    m_recommendationSourceArnHasBeenSet(false),
    m_recommendationSourceType(RecommendationSourceType::NOT_SET),
    m_recommendationSourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationSource& RecommendationSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recommendationSourceArn"))
  {
    m_recommendationSourceArn = jsonValue.GetString("recommendationSourceArn");

    m_recommendationSourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendationSourceType"))
  {
    m_recommendationSourceType = RecommendationSourceTypeMapper::GetRecommendationSourceTypeForName(jsonValue.GetString("recommendationSourceType"));

    m_recommendationSourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationSource::Jsonize() const
{
  JsonValue payload;

  if(m_recommendationSourceArnHasBeenSet)
  {
   payload.WithString("recommendationSourceArn", m_recommendationSourceArn);

  }

  if(m_recommendationSourceTypeHasBeenSet)
  {
   payload.WithString("recommendationSourceType", RecommendationSourceTypeMapper::GetNameForRecommendationSourceType(m_recommendationSourceType));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
