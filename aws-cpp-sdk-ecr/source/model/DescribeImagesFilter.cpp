/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

DescribeImagesFilter::DescribeImagesFilter(const JsonValue& jsonValue) : 
    m_tagStatus(TagStatus::NOT_SET),
    m_tagStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeImagesFilter& DescribeImagesFilter::operator =(const JsonValue& jsonValue)
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