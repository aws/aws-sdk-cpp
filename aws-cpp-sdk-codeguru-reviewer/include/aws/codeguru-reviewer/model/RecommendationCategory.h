/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{
  enum class RecommendationCategory
  {
    NOT_SET,
    AWSBestPractices,
    AWSCloudFormationIssues,
    DuplicateCode,
    CodeMaintenanceIssues,
    ConcurrencyIssues,
    InputValidations,
    PythonBestPractices,
    JavaBestPractices,
    ResourceLeaks,
    SecurityIssues,
    CodeInconsistencies
  };

namespace RecommendationCategoryMapper
{
AWS_CODEGURUREVIEWER_API RecommendationCategory GetRecommendationCategoryForName(const Aws::String& name);

AWS_CODEGURUREVIEWER_API Aws::String GetNameForRecommendationCategory(RecommendationCategory value);
} // namespace RecommendationCategoryMapper
} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
