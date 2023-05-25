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
  enum class ReportType
  {
    NOT_SET,
    TEST,
    CODE_COVERAGE
  };

namespace ReportTypeMapper
{
AWS_CODEBUILD_API ReportType GetReportTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportType(ReportType value);
} // namespace ReportTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
