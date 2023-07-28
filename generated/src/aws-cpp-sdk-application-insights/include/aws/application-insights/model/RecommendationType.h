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
  enum class RecommendationType
  {
    NOT_SET,
    INFRA_ONLY,
    WORKLOAD_ONLY,
    ALL
  };

namespace RecommendationTypeMapper
{
AWS_APPLICATIONINSIGHTS_API RecommendationType GetRecommendationTypeForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForRecommendationType(RecommendationType value);
} // namespace RecommendationTypeMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
