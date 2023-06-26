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
  enum class BatchReportModeType
  {
    NOT_SET,
    REPORT_INDIVIDUAL_BUILDS,
    REPORT_AGGREGATED_BATCH
  };

namespace BatchReportModeTypeMapper
{
AWS_CODEBUILD_API BatchReportModeType GetBatchReportModeTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForBatchReportModeType(BatchReportModeType value);
} // namespace BatchReportModeTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
