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
  enum class ReportCodeCoverageSortByType
  {
    NOT_SET,
    LINE_COVERAGE_PERCENTAGE,
    FILE_PATH
  };

namespace ReportCodeCoverageSortByTypeMapper
{
AWS_CODEBUILD_API ReportCodeCoverageSortByType GetReportCodeCoverageSortByTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportCodeCoverageSortByType(ReportCodeCoverageSortByType value);
} // namespace ReportCodeCoverageSortByTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
