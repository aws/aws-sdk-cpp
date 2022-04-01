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
  enum class ReportGroupStatusType
  {
    NOT_SET,
    ACTIVE,
    DELETING
  };

namespace ReportGroupStatusTypeMapper
{
AWS_CODEBUILD_API ReportGroupStatusType GetReportGroupStatusTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForReportGroupStatusType(ReportGroupStatusType value);
} // namespace ReportGroupStatusTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
