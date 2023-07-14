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
  enum class ReportExportConfigType
  {
    NOT_SET,
    S3,
    NO_EXPORT
  };

namespace ReportExportConfigTypeMapper
{
AWS_CODEBUILD_API ReportExportConfigType GetReportExportConfigTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportExportConfigType(ReportExportConfigType value);
} // namespace ReportExportConfigTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
