/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class InsightFeedbackOption
  {
    NOT_SET,
    VALID_COLLECTION,
    RECOMMENDATION_USEFUL,
    ALERT_TOO_SENSITIVE,
    DATA_NOISY_ANOMALY,
    DATA_INCORRECT
  };

namespace InsightFeedbackOptionMapper
{
AWS_DEVOPSGURU_API InsightFeedbackOption GetInsightFeedbackOptionForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForInsightFeedbackOption(InsightFeedbackOption value);
} // namespace InsightFeedbackOptionMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
