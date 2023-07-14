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
  enum class RetryBuildBatchType
  {
    NOT_SET,
    RETRY_ALL_BUILDS,
    RETRY_FAILED_BUILDS
  };

namespace RetryBuildBatchTypeMapper
{
AWS_CODEBUILD_API RetryBuildBatchType GetRetryBuildBatchTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForRetryBuildBatchType(RetryBuildBatchType value);
} // namespace RetryBuildBatchTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
