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
  enum class FileSystemType
  {
    NOT_SET,
    EFS
  };

namespace FileSystemTypeMapper
{
AWS_CODEBUILD_API FileSystemType GetFileSystemTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForFileSystemType(FileSystemType value);
} // namespace FileSystemTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
