/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{
  enum class FailureType
  {
    NOT_SET,
    JobFailed,
    ConfigurationError,
    PermissionError,
    RevisionOutOfSync,
    RevisionUnavailable,
    SystemUnavailable
  };

namespace FailureTypeMapper
{
AWS_CODEPIPELINE_API FailureType GetFailureTypeForName(const Aws::String& name);

AWS_CODEPIPELINE_API Aws::String GetNameForFailureType(FailureType value);
} // namespace FailureTypeMapper
} // namespace Model
} // namespace CodePipeline
} // namespace Aws
