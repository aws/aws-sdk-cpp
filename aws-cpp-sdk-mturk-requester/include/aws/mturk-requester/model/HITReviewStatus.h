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
  enum class HITReviewStatus
  {
    NOT_SET,
    NotReviewed,
    MarkedForReview,
    ReviewedAppropriate,
    ReviewedInappropriate
  };

namespace HITReviewStatusMapper
{
AWS_MTURK_API HITReviewStatus GetHITReviewStatusForName(const Aws::String& name);

AWS_MTURK_API Aws::String GetNameForHITReviewStatus(HITReviewStatus value);
} // namespace HITReviewStatusMapper
} // namespace Model
} // namespace MTurk
} // namespace Aws
