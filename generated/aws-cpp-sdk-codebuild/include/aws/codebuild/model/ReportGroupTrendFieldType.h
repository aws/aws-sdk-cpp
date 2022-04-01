/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class ReportGroupTrendFieldType
  {
    NOT_SET,
    PASS_RATE,
    DURATION,
    TOTAL,
    LINE_COVERAGE,
    LINES_COVERED,
    LINES_MISSED,
    BRANCH_COVERAGE,
    BRANCHES_COVERED,
    BRANCHES_MISSED
  };

namespace ReportGroupTrendFieldTypeMapper
{
AWS_CODEBUILD_API ReportGroupTrendFieldType GetReportGroupTrendFieldTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportGroupTrendFieldType(ReportGroupTrendFieldType value);
} // namespace ReportGroupTrendFieldTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
