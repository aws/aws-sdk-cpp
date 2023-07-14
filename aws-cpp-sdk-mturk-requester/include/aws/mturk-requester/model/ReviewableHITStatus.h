/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MTurk
{
namespace Model
{
  enum class ReviewableHITStatus
  {
    NOT_SET,
    Reviewable,
    Reviewing
  };

namespace ReviewableHITStatusMapper
{
AWS_MTURK_API ReviewableHITStatus GetReviewableHITStatusForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForReviewableHITStatus(ReviewableHITStatus value);
} // namespace ReviewableHITStatusMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
