/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{
  enum class FeatureEvaluationStrategy
  {
    NOT_SET,
    ALL_RULES,
    DEFAULT_VARIATION
  };

namespace FeatureEvaluationStrategyMapper
{
AWS_CLOUDWATCHEVIDENTLY_API FeatureEvaluationStrategy GetFeatureEvaluationStrategyForName(const Aws::String& name);

AWS_CLOUDWATCHEVIDENTLY_API Aws::String GetNameForFeatureEvaluationStrategy(FeatureEvaluationStrategy value);
} // namespace FeatureEvaluationStrategyMapper
} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
