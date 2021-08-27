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
  enum class ReportStatusType
  {
    NOT_SET,
    GENERATING,
    SUCCEEDED,
    FAILED,
    INCOMPLETE,
    DELETING
  };

namespace ReportStatusTypeMapper
{
AWS_CODEBUILD_API ReportStatusType GetReportStatusTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportStatusType(ReportStatusType value);
} // namespace ReportStatusTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
