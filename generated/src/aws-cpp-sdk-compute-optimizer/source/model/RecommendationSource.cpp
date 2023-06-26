/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
