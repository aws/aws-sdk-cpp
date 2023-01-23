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
  enum class ImagePullCredentialsType
  {
    NOT_SET,
    CODEBUILD,
    SERVICE_ROLE
  };

namespace ImagePullCredentialsTypeMapper
{
AWS_CODEBUILD_API ImagePullCredentialsType GetImagePullCredentialsTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForImagePullCredentialsType(ImagePullCredentialsType value);
} // namespace ImagePullCredentialsTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
