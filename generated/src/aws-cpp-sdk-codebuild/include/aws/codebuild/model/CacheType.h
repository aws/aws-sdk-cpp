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
  enum class CacheType
  {
    NOT_SET,
    NO_CACHE,
    S3,
    LOCAL
  };

namespace CacheTypeMapper
{
AWS_CODEBUILD_API CacheType GetCacheTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForCacheType(CacheType value);
} // namespace CacheTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
