/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{
  enum class FeedbackKey
  {
    NOT_SET,
    INSIGHTS_FEEDBACK
  };

namespace FeedbackKeyMapper
{
AWS_APPLICATIONINSIGHTS_API FeedbackKey GetFeedbackKeyForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForFeedbackKey(FeedbackKey value);
} // namespace FeedbackKeyMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
