/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageTagMutabilityExclusionFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ImageTagMutabilityExclusionFilter::ImageTagMutabilityExclusionFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageTagMutabilityExclusionFilter& ImageTagMutabilityExclusionFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterType"))
  {
    m_filterType = ImageTagMutabilityExclusionFilterTypeMapper::GetImageTagMutabilityExclusionFilterTypeForName(jsonValue.GetString("filterType"));
    m_filterTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetString("filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageTagMutabilityExclusionFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("filterType", ImageTagMutabilityExclusionFilterTypeMapper::GetNameForImageTagMutabilityExclusionFilterType(m_filterType));
  }

  if(m_filterHasBeenSet)
  {
   payload.WithString("filter", m_filter);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
