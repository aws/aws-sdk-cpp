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

#include <aws/ecr/model/LifecyclePolicyPreviewSummary.h>
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

LifecyclePolicyPreviewSummary::LifecyclePolicyPreviewSummary() : 
    m_expiringImageTotalCount(0),
    m_expiringImageTotalCountHasBeenSet(false)
{
}

LifecyclePolicyPreviewSummary::LifecyclePolicyPreviewSummary(const JsonValue& jsonValue) : 
    m_expiringImageTotalCount(0),
    m_expiringImageTotalCountHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyPreviewSummary& LifecyclePolicyPreviewSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("expiringImageTotalCount"))
  {
    m_expiringImageTotalCount = jsonValue.GetInteger("expiringImageTotalCount");

    m_expiringImageTotalCountHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyPreviewSummary::Jsonize() const
{
  JsonValue payload;

  if(m_expiringImageTotalCountHasBeenSet)
  {
   payload.WithInteger("expiringImageTotalCount", m_expiringImageTotalCount);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
