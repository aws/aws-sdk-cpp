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
  enum class CacheMode
  {
    NOT_SET,
    LOCAL_DOCKER_LAYER_CACHE,
    LOCAL_SOURCE_CACHE,
    LOCAL_CUSTOM_CACHE
  };

namespace CacheModeMapper
{
AWS_CODEBUILD_API CacheMode GetCacheModeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForCacheMode(CacheMode value);
} // namespace CacheModeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
