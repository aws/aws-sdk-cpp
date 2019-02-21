/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
