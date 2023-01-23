/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{
  enum class FeedbackType
  {
    NOT_SET,
    Positive,
    Negative
  };

namespace FeedbackTypeMapper
{
AWS_CODEGURUPROFILER_API FeedbackType GetFeedbackTypeForName(const Aws::String& name);

AWS_CODEGURUPROFILER_API Aws::String GetNameForFeedbackType(FeedbackType value);
} // namespace FeedbackTypeMapper
} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
