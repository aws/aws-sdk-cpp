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
  enum class BucketOwnerAccess
  {
    NOT_SET,
    NONE,
    READ_ONLY,
    FULL
  };

namespace BucketOwnerAccessMapper
{
AWS_CODEBUILD_API BucketOwnerAccess GetBucketOwnerAccessForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForBucketOwnerAccess(BucketOwnerAccess value);
} // namespace BucketOwnerAccessMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
