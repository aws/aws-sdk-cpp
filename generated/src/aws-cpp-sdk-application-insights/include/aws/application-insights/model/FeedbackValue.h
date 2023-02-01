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
  enum class FeedbackValue
  {
    NOT_SET,
    NOT_SPECIFIED,
    USEFUL,
    NOT_USEFUL
  };

namespace FeedbackValueMapper
{
AWS_APPLICATIONINSIGHTS_API FeedbackValue GetFeedbackValueForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForFeedbackValue(FeedbackValue value);
} // namespace FeedbackValueMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
