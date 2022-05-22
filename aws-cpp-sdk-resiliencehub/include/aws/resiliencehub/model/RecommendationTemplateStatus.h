/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class RecommendationTemplateStatus
  {
    NOT_SET,
    Pending,
    InProgress,
    Failed,
    Success
  };

namespace RecommendationTemplateStatusMapper
{
AWS_RESILIENCEHUB_API RecommendationTemplateStatus GetRecommendationTemplateStatusForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForRecommendationTemplateStatus(RecommendationTemplateStatus value);
} // namespace RecommendationTemplateStatusMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
