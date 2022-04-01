/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/DescribeImagesFilter.h>
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

DescribeImagesFilter::DescribeImagesFilter() : 
    m_tagStatus(TagStatus::NOT_SET),
    m_tagStatusHasBeenSet(false)
{
}

DescribeImagesFilter::DescribeImagesFilter(JsonView jsonValue) : 
    m_tagStatus(TagStatus::NOT_SET),
    m_tagStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeImagesFilter& DescribeImagesFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tagStatus"))
  {
    m_tagStatus = TagStatusMapper::GetTagStatusForName(jsonValue.GetString("tagStatus"));

    m_tagStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeImagesFilter::Jsonize() const
{
  JsonValue payload;

  if(m_tagStatusHasBeenSet)
  {
   payload.WithString("tagStatus", TagStatusMapper::GetNameForTagStatus(m_tagStatus));
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
