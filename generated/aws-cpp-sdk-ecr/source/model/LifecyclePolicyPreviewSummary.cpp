/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

LifecyclePolicyPreviewSummary::LifecyclePolicyPreviewSummary(JsonView jsonValue) : 
    m_expiringImageTotalCount(0),
    m_expiringImageTotalCountHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyPreviewSummary& LifecyclePolicyPreviewSummary::operator =(JsonView jsonValue)
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
