/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{
  enum class RecommendationType
  {
    NOT_SET,
    UnusedPermissionRecommendation
  };

namespace RecommendationTypeMapper
{
AWS_ACCESSANALYZER_API RecommendationType GetRecommendationTypeForName(const Aws::String& name);

AWS_ACCESSANALYZER_API Aws::String GetNameForRecommendationType(RecommendationType value);
} // namespace RecommendationTypeMapper
} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
