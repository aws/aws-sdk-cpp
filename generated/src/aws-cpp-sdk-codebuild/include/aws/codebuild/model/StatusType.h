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
  enum class StatusType
  {
    NOT_SET,
    SUCCEEDED,
    FAILED,
    FAULT,
    TIMED_OUT,
    IN_PROGRESS,
    STOPPED
  };

namespace StatusTypeMapper
{
AWS_CODEBUILD_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForStatusType(StatusType value);
} // namespace StatusTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
