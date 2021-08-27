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
  enum class ReportPackagingType
  {
    NOT_SET,
    ZIP,
    NONE
  };

namespace ReportPackagingTypeMapper
{
AWS_CODEBUILD_API ReportPackagingType GetReportPackagingTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportPackagingType(ReportPackagingType value);
} // namespace ReportPackagingTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
