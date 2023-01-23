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
  enum class ReportGroupSortByType
  {
    NOT_SET,
    NAME,
    CREATED_TIME,
    LAST_MODIFIED_TIME
  };

namespace ReportGroupSortByTypeMapper
{
AWS_CODEBUILD_API ReportGroupSortByType GetReportGroupSortByTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportGroupSortByType(ReportGroupSortByType value);
} // namespace ReportGroupSortByTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
