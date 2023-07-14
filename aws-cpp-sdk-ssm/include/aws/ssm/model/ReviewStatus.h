/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class ReviewStatus
  {
    NOT_SET,
    APPROVED,
    NOT_REVIEWED,
    PENDING,
    REJECTED
  };

namespace ReviewStatusMapper
{
AWS_SSM_API ReviewStatus GetReviewStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForReviewStatus(ReviewStatus value);
} // namespace ReviewStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
