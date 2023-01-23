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
  enum class LogsConfigStatusType
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace LogsConfigStatusTypeMapper
{
AWS_CODEBUILD_API LogsConfigStatusType GetLogsConfigStatusTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForLogsConfigStatusType(LogsConfigStatusType value);
} // namespace LogsConfigStatusTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
